//The task is to find the smallest number with given sum of digits as S and number of digits as D.


#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    string smallestNumber(int S, int D)
    {
        vector<int> ans ;
        int sum = 0;
        for(int i=0;i<D;i++)
        {
            ans.push_back(9);
            sum = sum+9;
        }
        int j=0;
        if(S>sum)
        {
            return "-1";
        }
        while(sum>S)
        {
            // for(auto e: ans)
            // {
            //     cout<<e<<" ";
            // }
            if(sum-S>8)
            {
                if(j==0)
                {
                    ans[j] = 1;
                    sum = sum-8;
                    j++;
                }
                else
                {
                    ans[j] = 0;
                    sum = sum-9;
                    j++;
                    
                }
                
            }
            else
            {
                ans[j] = 9 -(sum-S);
                sum = S;
                
            }
            
        }
        std::stringstream ss;
        for (auto it = ans.begin(); it != ans.end(); it++)   
        {
            if (it != ans.begin()) {
                ss << "";
            }
            ss << *it;
        }
        return ss.str();
        
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends