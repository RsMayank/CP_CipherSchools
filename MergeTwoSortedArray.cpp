#include<bits/stdc++.h>
using namespace std;
vector <int> Merge2Sorted(int a[], int b[],int n1, int n2)
{
    int i = 0 , j = 0, k = 0;
    vector <int>res(n1 + n2);

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            res[k] = a[i];
            i++;
            k++;
        }
        if(b[j] < a[i])
        {
            res[k] = b[j];
            j++;
            k++;
        }
    }
    while(i  < n1)
        res[k++] = a[i++];
    while(j < n2)
        res[k++] = b[j++];



    return res;


}


//Main Fi=unction
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1];
    int b[n2];
    for(int i = 0 ; i < n1; i++)
        cin>>a[i];
    for(int j = 0 ;  j < n2 ; j ++)
        cin>>b[j];

    vector<int> res(n1+n2);
    res = Merge2Sorted(a, b, n1 , n2);
    for(auto i = res.begin(); i< res.end(); i++)
        cout<<*i<<" ";


    return 0;
}