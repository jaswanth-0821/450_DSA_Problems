//Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array
//in order of their appearancein the array.Next greater element of an element in the array is the nearest element on the right which 
//is greater than the current element.If there does not exist next greater of current element, then next greater element for current 
//element is -1. For example, next greater of the last element is always -1.


#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        stack <long long> st;
        vector<long long> a(n);
        for(int i=n-1;i>=0;i--)
        {
            if (i==n-1)
            {
                a[i]=-1;
                
            }
            else
            {
                
                while( !st.empty() && arr[i]>=st.top())
                {
                    st.pop();
                }
                if(st.empty())
                {
                    a[i]=-1;
                }
                else
                {
                    a[i]= st.top();
                }
            }
            st.push(arr[i]);
        }
        return a;
        

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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
} 
