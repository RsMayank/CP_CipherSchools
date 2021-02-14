
#include<bits/stdc++.h>
using namespace std;

//Binary Search 
//given that Array is Sorted

int bs(int arr[],int num,int start,int end)
{
	while(start <= end)
	{
		int mid = start + (end - start)/2;
		if (num == arr[mid])
			return mid;
		else if(num > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}


int main()
{
	int size,num;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements"<<endl;
	for(int i = 0;i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter number to find: "<<endl;
	cin>>num;
	int n = sizeof(arr)/sizeof(arr[0]);
	int res = bs(arr,num,0,n - 1);
	cout<<res;
	return 0;
}
