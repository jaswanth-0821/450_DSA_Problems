//Given an array, print the Next Smaller Element (NSE) for every element. 
//The NSE for an element x is the first smaller element on the right side of x in array. 
//Elements for which no smaller element exist (on right side), consider NSE as -1. 


#include <iostream>
#include<vector>
#include<stack>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<pair<int,int>> arr;
    stack<int> st;
    int a[t];
    
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    st.push(a[0]);
    
    for(int i=1;i<t;i++)
    {
        if(!st.empty() && st.top()>a[i])
        {
            cerr<<1;
            while(!st.empty() && st.top()>a[i])
            {
                arr.push_back(make_pair(st.top(),a[i]));
                st.pop();
            }
            cerr<<2;
        }
        cerr<<6;
        st.push(a[i]);
        cerr<<7;
    }
    while(!st.empty())
    {
        arr.push_back(make_pair(st.top(),-1));
        st.pop();
    }
    cerr<<3;
    for(auto e: arr)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
    cerr<<4;
    
    
	// your code goes here
	return 0;
}
