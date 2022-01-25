//Given a string S, check if it is palindrome or no
 
#include <bits/stdc++.h>
using namespace std;



class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int l = S.size();
	    int i=0;
	    while(i<(S.size()/2))
	    {
	        if(S[i]!=S[(l-i)-1])
	        {
	            return 0;
	       
	        }
	        i++;
	    }
	    return 1;
	  
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
} 
