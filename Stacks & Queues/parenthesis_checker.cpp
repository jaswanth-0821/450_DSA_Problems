//Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
//For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    bool ispar(string x)
    {
        stack <char> check;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]== '{' || x[i]== '(' || x[i]== '[')
            {
                check.push(x[i]);
            }
            else
            {
                if(check.empty())
                {
                    return false;
                }
                else
                {
                    if(x[i]=='}' && check.top()=='{')
                    {
                        check.pop();
                    }
                    else if(x[i]==')' && check.top()=='(')
                    {
                        check.pop();
                    }
                    else if(x[i]==']' && check.top()=='[')
                    {
                        check.pop();
                    }
                    else
                    {
                        return false;
                    }
                    
                }
            }
        }
        if(check.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
