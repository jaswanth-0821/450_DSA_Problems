// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0


// solution

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini,maxi;
        mini = prices[0];
        maxi = 0;
        int siz = prices.size();
        for(int i=0;i<siz;i++)
        {
            mini = min(mini,prices[i]);
            maxi = max(maxi,prices[i]-mini);
            
            
        }
        return maxi;
        
    }
};

// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
