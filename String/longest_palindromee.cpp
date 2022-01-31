//Given a string S, find the longest palindromic substring in S.
//Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
//Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S.
//Incase of conflict, return the substring which occurs first ( with the least starting index).



#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    pair<int,int> check_odd(string s)
    {
        int left =0;
        int right=2;
        int count =0;
        pair<int,int> countx;
        for(int i=1;i<s.length();i++)
        {
            bool check= true;
            int count1= 1;
            left = i-1;
            right = i+1;
            while(!(left<0)&&!(right>=s.length()) && check)
            {
                if(s[left]!=s[right])
                {
                    check=false;
                }
                else
                {
                    count1= count1+2;
                }
                left--;
                right++;
            }
            if(count<count1)
            {
                count=count1;
                countx.first = count;
                countx.second = i;
            }
            
            
        }
        if(countx.first==1)
        {
            countx.second=0;
        }
        return countx;
    }
    pair<int,int> check_even(string s)
    {
        int left =0;
        int right=1;
        int count =0;
        pair<int,int> countx;
        for(int i=0;i<s.length();i++)
        {
            bool check= true;
            int count1= 0;
            left =i;
            right = i+1;
            while(!(left<0)&&!(right>=s.length()) && check)
            {
                if(s[left]!=s[right])
                {
                    check=false;
                }
                else
                {
                    count1++;
                    count1++;
                }
                left--;
                right++;
                
            }
            if(count<count1)
            {
                count=count1;
                countx.first = count;
                countx.second = i;
            }
            
        }
        return countx;
    }
    string longestPalin (string S) 
    {
        if(S.length()==1)
        {
            return S;
        }
        pair<int,int> x1 = check_odd(S);
        pair<int,int> x2 = check_even(S);
        pair<int,int> x3;
        if(x1.first>x2.first)
        {
            x3 = x1;
        }
        else
        {
            x3=x2;
        }
        if(x3.first%2==0)
        {
            x3.second = x3.second - x3.first/2;
            x3.second++;
        }
        else
        {
            x3.second = x3.second - x3.first/2;
        }
        string x = S.substr(x3.second,x3.first);
      
        return x;
       
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
