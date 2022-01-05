// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long p =1;
       long start =0 , end=0;
       long res =0;
       while(start<=end && end <n){
           p*=a[end];
           while(start<end && p>=k){
               p=p/a[start];
               start++;
           }
           
           if(p<k){
               res+=1+(end-start);
           }
           end++;
       }
       return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
