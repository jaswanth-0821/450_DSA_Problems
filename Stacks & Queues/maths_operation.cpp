#include <iostream>
#include<stack>

using namespace std;

int main() 
{
    stack<char>a;
    char t;
    int sol = 0;
    while(cin>>t)
    {
        cerr<<t<<endl;
        if(!(t=='+' || t=='-' || t=='*' || t=='/'))
        {
            a.push(t);
        }
        else
        {
            
            int x = int(a.top()) - 48;
            a.pop();
            if(x<0)
            {
                x = x+ 48;
            }
            int y= int(a.top()) -48;
            a.pop();
            if(y<0)
            {
                y = y+ 48;
            }
            cout<<x<<" "<<y<<endl;
            if(t=='+')
            {
                sol  = x+y;
                a.push(sol);
                
            }
            else if(t=='-')
            {
                sol = x-y;
                a.push(sol);
            }
            else if(t=='*')
            {
                sol = y*x;
                a.push(sol);
            }
            else if(t=='/')
            {
                sol = x/y;
                a.push(sol);
            }
        }
    }
    cout<<sol<<endl;
	// your code goes here
	return 0;
}
