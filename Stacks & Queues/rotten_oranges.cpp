
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        queue<pair<int,pair<int,int>>> arr;
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    arr.push(make_pair(0,make_pair(i,j)));
                }
                else if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        int t;
        while(!arr.empty())
        {
            pair<int,pair<int,int>> c;
            c= arr.front();
            arr.pop();
            t = c.first;
            int x = c.second.first;
            int y = c.second.second;
            if(x>0 && grid[x-1][y]==1)
            {
                arr.push(make_pair(t+1,make_pair(x-1,y)));
                count--;
                grid[x-1][y]=2;
            }
            if(y>0 && grid[x][y-1]==1)
            {
                arr.push(make_pair(t+1,make_pair(x,y-1)));
                count--;
                grid[x][y-1]=2;
            }
            if(x<n-1 && grid[x+1][y]==1)
            {
                arr.push(make_pair(t+1,make_pair(x+1,y)));
                count--;
                grid[x+1][y]=2;
            }
            if(y<m-1 && grid[x][y+1]==1)
            {
                arr.push(make_pair(t+1,make_pair(x,y+1)));
                count--;
                grid[x][y+1]=2;
            }
        }
        if(count)
        {
            return -1;
        }
        else
        {
            return t;
        }  
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  
