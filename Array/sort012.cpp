// A array contain only 0,1,2 numbers sort them without using any sorting algo

// my solution get O(n) time complexity

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count0++;
            }
            else if(a[i]==1)
            {
                count1++;
            }
            else if(a[i]==2)
            {
                count2++;
            }
        }
        int i=0;
        while(count0--)
        {
            a[i]=0;
            i++;
        }
        while(count1--)
        {
            a[i]=1;
            i++;
        }
        while(count2--)
        {
            a[i]=2;
            i++;
        }
        
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}



// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
