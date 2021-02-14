#include<iostream>
using namespace std;

int fibb(int a)
{
    if(a <= 1)
        return a;
    
    return fibb(a -1) + fibb(a-2);
}
int main()
{
    int n;
    cin >> n;
    //cout<<fibb(n)<<" ";
    return 0;
}