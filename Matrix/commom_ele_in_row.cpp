//Given an m x n matrix, find all common elements present in all rows in O(mn) time and one traversal of matrix.


#include <bits/stdc++.h>
using namespace std;

#define M 4
#define N 5
 
void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> mp;
 
    
    for (int j = 0; j < N; j++)
        mp[mat[0][j]] = 1;
 
 
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
           
            if (mp[mat[i][j]] == i)
            {
          
                mp[mat[i][j]] = i + 1;
 
                
                if (i==M-1 && mp[mat[i][j]]==M)
                  cout << mat[i][j] << " ";
            }
        }
    }
}
 
