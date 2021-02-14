#include<iostream>
using namespace std;

int fibb(int a)
{
    if(a <= 1)
        return a;
    
    int res = fibb(a -1) + fibb(a-2);
    cout << res;
}
int main()
{
    int n;
    cin >> n;
    //cout<<fibb(n)<<" ";
    return 0;
}