
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int dfs(vector<vector<int>>&grid,int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == 2)return 0;
        
        //if not visited
        if(grid[i][j] == 0)return 0;
        grid[i][j] = 2;
        return 1+ dfs(grid,i-1,j,n,m)
                    +dfs(grid,i+1,j,n,m)
                    +dfs(grid,i,j-1,n,m)
                    +dfs(grid,i,j+1,n,m)
                    +dfs(grid,i-1,j-1,n,m)
                    +dfs(grid,i-1,j+1,n,m)
                    +dfs(grid,i+1,j+1,n,m)
                    +dfs(grid,i+1,j-1,n,m);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    maxi = max(maxi,dfs(grid,i,j,n,m));
                }
            }
        }
        return maxi;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
