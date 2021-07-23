// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.


#include <bits/stdc++.h>
using namespace std;

#include<set>
class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  
    {
        
        set<int>s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s1.insert(b[i]);
        }
        return s1.size();
       
    }
};
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
} 
// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
