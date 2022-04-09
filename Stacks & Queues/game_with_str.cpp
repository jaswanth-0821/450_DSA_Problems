//Given a string s of lowercase alphabets and a number k, 
//the task is to print the minimum value of the string after removal of ‘k’ characters.
//The value of a string is defined as the sum of squares of the count of each distinct character.

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minValue(string s, int k)
    {
        map<char,int> count;
        vector<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]==0)
            {
                st.push_back(s[i]);
            }
            count[s[i]]++;
        }
        int x = count.size();
        priority_queue<int> arr;
        for(int i=0;i<x;i++)
        {
            arr.push(count[st[i]]);
           // cout<<st[i]<<" "<<count[st[i]]<<endl;
        }
        while(k--)
        {
            int t= arr.top();
            arr.pop();
            t--;
            arr.push(t);
        }
        
        
        // for(auto e: arr)
        // {
        //     cout<<e<<" ";
        // }
        // cout<<endl;
        
        int ans=0;
        for(int i=0;i<x;i++)
        {
            int c = arr.top();
            arr.pop();
            //cout<<c<<endl;
            ans = ans + (c*c);
        }
        return ans;
    
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
