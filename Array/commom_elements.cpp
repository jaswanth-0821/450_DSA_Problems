// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:


       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int x = max(max(n1,n2),n3);
            vector<int> temp;
            int temp1=INT_MIN;
            int i1=0,i2=0,i3=0,count=0;
            while(i1<n1 && i2<n2 && i3<n3)
            {
                if(A[i1]==B[i2] && B[i2]==C[i3] && temp1 != A[i1])
                {
                    count++;
                    temp1 = A[i1]; 
                    temp.push_back(A[i1]);
                    i1++;
                    i2++;
                    i3++;
                }
            
                else if (min ({A[i1],B[i2],C[i3]}) == A[i1])
                {
                    i1++;
                }
                else if (min ({A[i1],B[i2],C[i3]}) == B[i2]) 
                {
                    i2++;
                }
                else 
                {
                    i3++;
                }
            }
            return temp;
        }

};


int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
