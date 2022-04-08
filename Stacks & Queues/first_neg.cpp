// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
    
    long long int  a[N];
    
    for(long long int  i=N-1;i>=0;i--)
    {
        if(i==N-1)
        {
            if(A[i]<0)
            {
                a[i]=0;
            }
            else
            {
                a[i]=-1;
            }
        }
        else
        {
            if(A[i]<0)
            {
                a[i]=0;
            }
            else
            {
                if(a[i+1]==-1)
                {
                    a[i]=-1;
                }
                else
                {
                    a[i]= a[i+1]+1;
                }
            }
        }
        
        
    }
    vector<long long> ans;
    long long int k = K-1;
    long long int  x=0;
    
    for(long long int  i=0;i<(N-k);i++)
    {
        if(a[i]<=k  && a[i]!=-1)
        {
            ans.push_back(A[i+a[i]]);
        }
        else
        {
            ans.push_back(x);
        }
        
    }
    
    return ans;
    
    
                                                 
}
