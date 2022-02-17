//A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people,
//find if there is a celebrity in the party or not.A square NxN matrix M[][] is used to represent people at the party 
//such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
//Note: Follow 0 based indexing.

#include<bits/stdc++.h>
using namespace std;



class Solution 
{
    public:
  
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int a1[n];
        int a2[n];
        for(int i=0;i<n;i++)
        {
            a1[i]=0;
            for(int j=0;j<n;j++)
            {
                a1[i] = a1[i]+M[j][i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a1[i]==n-1)
            {
                bool t= false;
                for(int j=0;j<n;j++)
                {
                    if(M[i][j]==1)
                    {
                        t= true;
                    }
                }
                
                if(!t)
                {
                    return i;
                }
            }
            
        }
        return -1;
     
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  
