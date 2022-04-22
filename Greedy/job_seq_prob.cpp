// Given a set of N jobs where each jobi has a deadline and profit associated with it.

// Each job takes 1 unit of time to complete and only one job can be scheduled at a time.
  
//  We earn the profit associated with job if and only if the job is completed by its deadline.

// Find the number of jobs done and the maximum profit



// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
    {
        return (a.second > b.second);
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    {
        vector<pair<int,int>> a;
        int fg[n];
        for(int k=0;k<n;k++){
            fg[k]=0;
        }
        for(int i=0;i<n;i++)
        {
            a.push_back(make_pair(arr[i].dead,arr[i].profit));
        }
        sort(a.begin(),a.end(),sortbysec);
        // for(auto e: a)
        // {
        //     cout<<e.first<<" "<<e.second<<endl;
        // }
        // cout<<endl;
        int count=0;
        int res = 0;
        vector<int> ch(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(a[i].first>n)
            {
                count = count + 1;
                res = res + a[i].second;
                
            }
            else
            {
                
            
                for(int j=a[i].first;j>0;j--)
                {
                    if(ch[j]==0 && fg[i]==0)
                    {
                        
                        ch[j]=1;
                        count = count + 1;
                        res = res + a[i].second;
                        fg[i]=1;
                    }
                }
            }
            
        }
        vector<int> ans;
        ans.push_back(count);
        ans.push_back(res);
        return ans;
        
        
        // your code here
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
