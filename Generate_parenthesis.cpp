#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
void parenthesis(int pos , int n, int open , int close)
{
    static char str[MAX_SIZE];
    	if(close == n) 
	{ 
        cout<<str<<endl;
        return; 
	}
	else
	{ 
		if(open > close) 
		{ 
			str[pos] = '}'; 
			parenthesis(pos+1, n, open, close+1); 
		} 
		
		if(open < n) 
		{ 
		str[pos] = '{'; 
		parenthesis(pos+1, n, open+1, close); 
		} 
	} 

}
void printparenthesis(int n)
{
    if (n>0)
        parenthesis(0,n,0,0);
    return;
}

// Main Function
int main()
{
    int n;
    cin>>n;
    printparenthesis(n);
    return 0;
}