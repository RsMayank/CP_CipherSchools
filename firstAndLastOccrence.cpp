#include<bits/stdc++.h>
using namespace std;
pair <int ,int> firstAndLastOccurence(vector<int> a, int k)
{
    int frst;
    int last;
    bool visitedF = false;
    bool visitedL = false;
    int n = a.size()-1;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(k == a[i] && !visitedF)
        {
            frst = i;
            visitedF = true;
            break;
        }
    }
    for(int j = n ; j >=0 ; j--)
    {
        if(k == a[j] &&  !visitedL)
        {
            last = j;
            visitedL = true;
            break;
        }

        
    }

    pair <int, int> pr;
    pr.first = frst;
    pr.second = last;
    return pr;
}




int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int  i= 0 ; i < size ;i++)
        cin>>vec[i];
    int k;
    cin>>k;
    pair<int, int> res;
    res = firstAndLastOccurence(vec,k);
    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}