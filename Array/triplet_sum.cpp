// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void swap(int* a, int* b)
    {
    	int t = *a;
    	*a = *b;
    	*b = t;
    }
    
    int partition (int arr[], int low, int high)
    {
    	int pivot = arr[high];
    	int i = (low - 1);
    
    	for (int j = low; j <= high - 1; j++)
    	{
    		if (arr[j] < pivot)
    		{
    			i++; 
    			swap(&arr[i], &arr[j]);
    		}
    	}
    	swap(&arr[i + 1], &arr[high]);
    	return (i + 1);
    }
    void quickSort(int arr[], int low, int high)
    {
    	if (low < high)
    	{
    		int pi = partition(arr, low, high);
    		quickSort(arr, low, pi - 1);
    		quickSort(arr, pi + 1, high);
    	}
    }
    
    bool find3Numbers(int A[], int n, int X)
    {
        bool x = true;
        bool y = false;
        quickSort(A,0,n-1);
        if(n<3)
        {
            return y;
        }
        if(n==3)
        {
            if((A[0]+A[1]+A[2])==X)
            {
                return x;
            }
            else
            {
                return y;
            }
        }
        for(int i=0;i<n-2;i++)
        {
            int temp1 = i+1;
            int temp2 = n-1;
            int sum = A[i]+A[temp1]+A[temp2];
            while(temp1<temp2)
            {
                sum = A[i]+A[temp1]+A[temp2];
                if(sum==X)
                {
                    return x;
                }
                if(sum>X)
                {
                    temp2 = temp2-1;
                }
                else
                {
                    temp1 = temp1+1;
                }  
            }    
        }
        return y;  
    }
};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  
