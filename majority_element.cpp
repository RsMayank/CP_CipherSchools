#include<bits/stdc++.h>
using namespace std;

//finding the candidate elment
int findcandidate(const vector <int>& arr)
{
	int n = arr.size();
	int max_index = 0 , count = 1;
	for(int i = 0 ; i < n ; i ++)
	{
		if(arr[i] == arr[max_index])
			count++;
		else
			count--;
		if(count == 0)
		{
			max_index = i;
			count = 1;
		}
			
	}
	return arr[max_index];
}
// finding the majority element
int isMajority(const vector <int>& arr, int cand)
{
	int count = 0;
	int n = arr.size();
	for(int i = 0 ; i < n ; i++)
	{
		if(cand == arr[i])
		{
			count++;
		}
	}
	if(count >  n/2)
		return 1;
	else
		return 0;
}

//Main Function
int main()
{
	int size;
	cin>>size;
	vector <int> ar(size);
	for(int i = 0 ; i < size ; i++)
		cin>>ar[i];
	int cand = findcandidate(ar);
	int res = isMajority(ar,cand);
	if(res)
		cout<<" "<<cand<<" ";
	else
		cout<<"No Majority Element "<<endl;
	

	return 0;
}

