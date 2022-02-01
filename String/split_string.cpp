// Given a binary string str of length N, the task is to find the maximum count of consecutive substrings
// str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s.
// If it is not possible to split str satisfying the conditions then print -1.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    string s1="0";
    int count1=0;
    int count0=0;
    int count=0;
    for(int i=0;i<t;i++)
    {
        if(s[i]==s1[0])
        {
            count0++;
        }
        else
        {
            count1++;
        }
        if(count1==count0 && count0!=0)
        {
            count++;
            count1=0;
            count0=0;
        }
        
    
    }
    if(count>0)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<-1<<end;
    }
	// your code goes here
	return 0;
}
