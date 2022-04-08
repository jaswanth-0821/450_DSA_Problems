//Given a binary grid. Find the distance of nearest 1 in the grid for each cell.
//The distance is calculated as |i1 – i2| + |j1 – j2|, where i1, j1 are the row number and column number of the current cell and
//i2, j2 are the row number and column number of the nearest cell having value 1


#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    
  
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n = grid.size();
	    int m = grid[0].size();
	   
	    queue<pair<int,int>>check;
	    vector<vector<int>> ans(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                ans[i].push_back(0);
	                check.push(make_pair(i,j));
	            }
	            else
	            {
	                ans[i].push_back(-1);
	            }
	        }
	    }
	   
	   
	    while(!check.empty())
	    {
	        
	        pair<int,int> a = check.front();
	        check.pop();
	        int x = a.first;
	        int y = a.second;
	        if(x-1>=0  )
            {
                if(ans[x-1][y] == -1)
                {
                    ans[x-1][y] = ans[x][y] + 1;
                    check.push(make_pair(x-1,y));
                }
                else if(ans[x-1][y]>(ans[x][y] + 1))
                {
                    ans[x-1][y] = ans[x][y] + 1;
                    check.push(make_pair(x-1,y));
                }
            }
            if(x+1<n  )
            {
                if(ans[x+1][y] == -1)
                {
                    ans[x+1][y] = ans[x][y] + 1;
                    check.push(make_pair(x+1,y));
                }
                else if(ans[x+1][y]>(ans[x][y] + 1))
                {
                    ans[x+1][y] = ans[x][y] + 1;
                    check.push(make_pair(x+1,y));
                }
            }
            if(y-1>=0  )
            {
                if(ans[x][y-1] == -1)
                {
                    ans[x][y-1] = ans[x][y] + 1;
                    check.push(make_pair(x,y-1));
                }
                else if(ans[x][y-1]>(ans[x][y] + 1))
                {
                    ans[x][y-1] = ans[x][y] + 1;
                    check.push(make_pair(x,y-1));
                }
            }
            if(y+1<m  )
            {
                if(ans[x][y+1] == -1)
                {
                    ans[x][y+1] = ans[x][y] + 1;
                    check.push(make_pair(x,y+1));
                }
                else if(ans[x][y+1]>(ans[x][y] + 1))
                {
                    ans[x][y+1] = ans[x][y] + 1;
                    check.push(make_pair(x,y+1));
                }
            }
	        
	    }
	    
	    return ans;
	    
	}
};

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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  
