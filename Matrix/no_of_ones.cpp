//Given a boolean 2D array of n x m dimensions where each row is sorted. 
//Find the 0-based index of the first row that has the maximum number of 1's.


#include <bits/stdc++.h>
using namespace std;

// method 1 which is easy but time complexity is high;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > matrix, int n, int m) 
	{
	    int max = 0;
	    int sum_max=0;
	    int sumt;
	    for(int i=0;i<matrix.size();i++)
	    {
	        sumt =  accumulate(matrix[i].begin(), matrix[i].end(), 0);
	        if(sum_max<sumt)
	        {
	            max = i;
	            sum_max = sumt;
	        }
	    }
	    if(sum_max==0)
	    {
	        return -1;
	    }
	    return max;
	    
	}

};

// best method
class Solution{
public:
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int r = 0;                    
        int c = m-1;           
        int max_row_index=-1;  
        while(r<n && c>=0)
        {
            if(arr[r][c]==1)
            {
                max_row_index = r;
                c--;
            }
            else
                r++;
        }
        return max_row_index;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
