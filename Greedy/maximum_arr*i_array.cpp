// Given an array A of N integers. Your task is to write a program to find the maximum 
// value of ∑arr[i]*i, where i = 0, 1, 2,., n 1.You are allowed to rearrange the elements
// of the array.Note: Since output could be large, hence module 109+7 and then print answer.


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        vector<int> a1;
        for(int i=0;i<n;i++)
        {
            a1.push_back(a[i]);
        }
        sort(a1.begin(),a1.end());
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            sum =( sum + (a1[i]*i)%1000000007)%1000000007;
            
        }
        return sum;
        // Complete the function
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends