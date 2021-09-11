// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

// the below solution is from geeks for geeks .

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) 
            m[arr[i]]++;
        
        int twice_count = 0;
        for (int i = 0; i < n; i++) 
        {
            twice_count += m[k - arr[i]];
            if (k - arr[i] == arr[i]) twice_count--;
        }
        return twice_count / 2;
    }
};
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
} 



// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
