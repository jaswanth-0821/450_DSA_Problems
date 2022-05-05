// Given arrival and departure times of all trains that reach a railway station. 
// Find the minimum number of platforms required for the railway station so that no train is kept waiting.
  
// Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time
// can never be the same for a train but we can have arrival time of one train equal to departure time of the other.
// At any given instance of time, same platform can not be used for both departure of a train and arrival of another train.
// In such cases, we need different platforms.

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        int platfrom=1;
        int j=0;
        int ans=1;
        int i=1;
  
        while(i<n&&j<n)
        {
            if(arr[i]<=dep[j])
            {
                platfrom++;
                ans=max(ans,platfrom);
                i++;
            }
            else
            {
                platfrom--;
                j++;
            }
        }
        return ans;
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
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  
