// Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

// Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).


#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int i=0;
        int j=0;
        int sum=0;
        int length=INT_MAX;
        while(i<n && j<n)
        {
            sum=sum+arr[j];
            while(i<n && sum>x)
            {
                length=min(length,j-i+1);
                sum=sum-arr[i];
                i++;
            }
            j++;
        }
        return length;
    }
};


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  
