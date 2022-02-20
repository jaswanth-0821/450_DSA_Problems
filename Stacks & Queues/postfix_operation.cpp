// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int>a;
        char t;
        int sol = 0;
        for(int i=0;i<S.length();i++)
        {
            t= S[i];
            if(!(t=='+' || t=='-' || t=='*' || t=='/'))
            {
                int l = int(t)- 48;
                a.push(l);
            }
            else
            {
                int x = a.top();
                a.pop();
            
                
                int y= a.top();
                a.pop();
              
                
                if(t=='+')
                {
                    sol  = x+y;
                    a.push(sol);
                }
                else if(t=='-')
                {
                    sol = y-x;
                    a.push(sol);
                }
                else if(t=='*')
                {
                    sol = y*x;
                    a.push(sol);
                }
                else if(t=='/')
                {
                    sol = y/x;
                    a.push(sol);
                }
            }
        }
        return sol;
            // Your code here
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
