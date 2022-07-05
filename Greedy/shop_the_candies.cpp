
// In a candy store, there are N different types of candies available and the prices of all the 
// N different types of candies are provided to you.You are now provided with an attractive offer.
// You can buy a single candy from the store and get at most K other candies ( all are different types )
// for free.Now you have to answer two questions. Firstly, you have to find what is the minimum amount
// of money you have to spend to buy all the N different candies. Secondly, you have to find what is 
// the maximum amount of money you have to spend to buy all the N different candies.In both the cases
// you must utilize the offer i.e. you buy one candy and get K other candies for free.


#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int> a;
        for(int i=0;i<N;i++)
        {
            a.push_back(candies[i]);
        }
        sort(a.begin(),a.end());
        deque<int> arr1;
        deque<int> arr2;
        for(int i=0;i<N;i++)
        {
            arr1.push_back(a[i]);
            arr2.push_back(a[i]);
        }
        int sum1=0;
        int sum2=0;
        while(!arr1.empty())
        {
            sum1 = sum1 + arr1.front();
            arr1.pop_front();
            for(int j=0;j<K && !arr1.empty();j++)
            {
                arr1.pop_back();
            }
        }
        while(!arr2.empty())
        {
            sum2 = sum2 + arr2.back();
            
            arr2.pop_back();
            for(int j=0;j<K && !arr2.empty();j++)
            {
                arr2.pop_front();
            }
        }
        vector<int> ans;
        ans.push_back(sum1);
        ans.push_back(sum2);
        return ans;
      
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  