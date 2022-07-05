// This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. 
// You just need to complete the function maxSum() that takes array a[ ] and its size N as input parameters and 
// return the maximum sum using above method.


#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    long long int ans = 0;
    sort(arr, arr+n);
    int x = 0, y = n-1;
    
    while(x<y){
        
        ans += abs(arr[x++] - arr[y]);
        ans += abs(arr[x] - arr[y--]);
    }
    
    ans += abs(arr[x] - arr[0]);
    
    return ans;
    
}