// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers,
// the consecutive numbers can be in any order.

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    int findLongestConseqSubseq(int arr[], int n)
    {

        unordered_set<int> S;
        int ans = 0;
 

        for (int i = 0; i < n; i++)
           S.insert(arr[i]);
        for (int i = 0; i < n; i++)
        {
            if (S.find(arr[i] - 1) == S.end())
            {
               
               
                int j = arr[i];
                while (S.find(j) != S.end())
                j++;
 
            ans = max(ans, j - arr[i]);
            }
        }

        return ans;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
