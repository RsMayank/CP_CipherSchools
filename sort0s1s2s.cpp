#include<bits/stdc++.h>

using namespace std;

void sort012sArray(vector <int> res)
{
    int c0 = 0 ,c1 = 0, c2 = 0;
    int n = res.size();
    for(int i = 0 ; i < n; i++)
    {
        int temp = res[i];
        switch (temp){
            case 0:
                c0++;
            case 1:
                c1++;
            case 2:
                c2++;
        }
    }

    //vector <int> res(n);
    int k = 0;
    while(c0>0)
    {
        res[k] = 0;
        k++;
        c0--;
    }
    while(c1 > 0)
    {
        res[k] = 1;
        k++;
        c1++;
    }
    while(c2 > 1)
    {
        res[k] =2;
        k++;
        c2++;
    }


    for(int i = 0 ; i != n ; i++)
        cout<<res[i] <<" ";
    return;
}

int main()
{
    int n;
    cin>>n;
    vector <int> ar (0);
    for(int i = 0 ; i < n ; i++)
        cin>>ar[i];
    //vector <int> res(n);
    sort012sArray(ar);

    return 0;
}