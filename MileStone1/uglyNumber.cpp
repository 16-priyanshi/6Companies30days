#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set <long long int> s;
	   s.insert(1);
	   n--;
	   while(n--){
	        auto it = s.begin();
	        long long int x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    } 
        return *s.begin();
	}
};

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		Solution ob;
		auto ans = ob.getNthUglyNo(n);
		cout<<ans<<endl;
	}
	return 0;
}
