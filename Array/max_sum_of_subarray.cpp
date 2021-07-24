// this is not my code ......i copied it from gfg


// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
   
    int maxSubarraySum(int a[], int n){
        
        long long maxh = 0, maxf = INT_MIN;
        for(int i=0;i<n;i++) 
            {
                maxh+=a[i];
                maxf=max(maxh,maxf); 
        
                if(maxh<0)
                    maxh=0;
    
            }
            return maxf;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
  
