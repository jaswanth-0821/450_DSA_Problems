//Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
   int median(vector<vector<int>> &matrix, int r, int c){
        
       vector<int>arr;
       
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           {
               arr.push_back(matrix[i][j]);
           }
       }
       sort(arr.begin(),v.end());
       return arr[arr.size()/2];
       
   }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}


