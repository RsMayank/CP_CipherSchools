#include<bits/stdc++.h>
using namespace std;

void slidingWindow(vector<int>v , int k)
{
    int i = 0 , j = 0 ;
    int sum = 0 ;
    vector <int> op;
        while(j < k)
        {
            sum += v[j];
            j ++ ;
        }
       // cout << sum << endl;
        op.push_back(sum);
    for(int i = 1 ; i <= v.size() - k ; i++)
    {
        sum  -= v[i - 1];
        sum += v[j];
        j++;
        op.push_back(sum);
    }


    for(auto i = op.begin() ; i != op.end() ; i++)
    {
        cout << *i <<" " ;
    }
    cout << endl;

}

int main()
{
    int n ;
    cin>> n;
    int k ; cin >> k;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++)
        cin >> v[i] ;

    slidingWindow(v , k);
    return 0;
}