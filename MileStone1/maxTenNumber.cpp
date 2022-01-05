#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void largest(int arr[],int n,int k)
    {
        vector<int> res;
        priority_queue<int> temp;
        for(int i=0;i<n;i++)
            temp.push(arr[i]);
        for(int i=0;i<k;i++)
        {
            res.push_back(temp.top());
            temp.pop();
        }
        for(auto it:res)
            cout<<it<<" ";
    }
};
