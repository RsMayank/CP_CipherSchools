#include<bits/stdc++.h>
using namespace std;

//function to rotate array by one
void rotateArrayByOne(int arr[], int n)
{
	int last = arr[n-1];
	//cout<<"last: "<<last<<endl;
	for(int i = n - 2 ; i >= 0 ; i--)
	{
		arr[i + 1 ] = arr[i];
	}
	//#Adding last element to the beggining
	arr[0] = last;
}
void rotateArray(int arr[],int n, int k)
{
	while(k--)
	{
		rotateArrayByOne(arr,n);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K;
		cin>>N>>K;
		int arr[N];
		for(int i = 0 ; i < N ; i++)
		{
			cin>>arr[i];
		}
		rotateArray(arr,N,K);
		for(int i = 0 ; i < N ; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
