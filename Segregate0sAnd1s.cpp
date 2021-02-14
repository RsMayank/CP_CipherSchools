#include<bits/stdc++.h>
using namespace std;
void segregator(int arr[], int size)
{
    int start = 0 , end = size - 1;
    while(start < end)
    {
        if(arr[start] > arr[end])
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else
            start++;
        

    }

}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ;i ++)
        cin>>arr[i]
    segregator(arr,size);
    for(int j = 0 ; j< size ; j++)
        cout<<arr[j]<<" ";
    return 0;
}