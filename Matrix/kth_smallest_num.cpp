//Given a N x N matrix, where every row and column is sorted in non-decreasing order.
//Find the kth smallest element in the matrix.
  
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     
      return 0;
}





int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    vector<int> a(n,0);
    int mini,mini1;
    for(int ii=0;ii<k;ii++)
    {
        mini = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]<n && mini>mat[a[i]][i])
            {
                mini = mat[a[i]][i];
                mini1 = i;
            }
        }
        
        a[mini1]++;
        //cout<<mini1<<" "<<a[mini1]<<" "<<mini<<endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]<n && mini>mat[a[i]][i])
        {
            mini = mat[a[i]][i];
            mini1 = i;
        }
    }
    return mini;
  
}
