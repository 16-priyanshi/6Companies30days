// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     int count =1;
    int n=src.size();
    char temp = src[0];
    string s="";
    for(int i=1;i<n;i++){
        if(src[i]==src[i-1]){
            count++;
        }
        else{
           s.push_back(temp);
           s+=to_string(count);
           count=1;
           temp=src[i];
        }
        
    }
    s.push_back(temp);
    s+=to_string(count);
  //Your code here 
  return s;
}     
 

