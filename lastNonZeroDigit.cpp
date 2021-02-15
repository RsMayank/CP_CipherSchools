#include<iostream>
using namespace std;

int facto(int n)
{
    if(n <= 1)
        return 1;
    int res = n * facto(n-1);
    return res;
}
int lastNonZeroDigit(int op)
{
    int rem;
    while(op != 0 )
    {
        rem = op % 10;
        op = op / 10 ;
        if(rem != 0)
            break;
    }

    return rem;
}


int main()
{
    int number;
    cin >> number;
    int res ; 
    res = facto(number);
    cout<<"Factorial Of Number "<<number<<" : "<<res<<endl;
    int lastNonZero ;
    lastNonZero  =lastNonZeroDigit(res);
    cout<<"Last Non Zero Digit: " <<lastNonZero<<endl;
    return 0;
}