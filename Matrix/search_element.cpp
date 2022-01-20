class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(); 
        
        int i=0; 
        int j=matrix[0].size()-1; 
        
        while(j>=0 && i<n){
            if(matrix[i][j]==target){
                return true;
            } else if(matrix[i][j]>target){
                j--; 
            }else{
                i++; 
            }
        } 
        return false;
    }
};

class Solution {
public:
//     bool binary_search(vector<vector<int>>& matrix, int target,int start,int end,int x)
//     {
        
//         if(matrix[x][start]==target)
//         {
//             return true;
//         }
//         if(matrix[x][end]==target)
//         {
//             return true;
//         }
//         if(start==end || start+1 == end)
//         {
//             return false;
//         }
//         if(matrix[x][(start+end+1)/2]<=target)
//         {
//             start = (start+end+1)/2;
             
//         }
//         else
//         {
//             end =(start+end+1)/2;
//         }
//         bool ans = binary_search(matrix,target,start,end,x);
//         return ans;
        
//     }
    
//     int row_search(vector<vector<int>>& matrix, int target,int start,int end)
//     {
        
//         if(matrix[start][0]==target)
//         {
//             return start;
//         }
//         if(matrix[end][0]==target)
//         {
//             return end;
//         }
//         if(start==end || start+1==end)
//         {
//             return end;
//         }
//         if(matrix[(start+end+1)/2][0]<=target)
//         {
//             start = (start+end+1)/2;
             
//         }
//         else
//         {
//             end =(start+end+1)/2;
//         }
//         int ans = row_search(matrix,target,start,end);
//         return ans;
//     }
    
//     bool searchMatrix(vector<vector<int>>& matrix, int target) 
//     {
//         int start = 0;
//         int end = matrix.size();
//         int x =  row_search(matrix,target,start,end);
//         start =0;
//         end= matrix[x].size();
//         bool ans = binary_search(matrix,target,start,end,x);
//         return ans;
        
        
        
   
        
//     }
