//Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character,
//each time a character is inserted to the stream. If there is no such character then append '#' to the answer.

#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    map<char,int> a;
		    string st = "abcdefghijklmnopqrstuvwxyz";
		    for(int i=0;i<26;i++)
		    {
		        a[st[i]]=0;
		    }
		    queue<char> q;
		    for(int i=0;i<A.length();i++)
		    {
		        a[A[i]]++;
		        if(a[A[i]]<2)
		        {
		            q.push(A[i]);
		        }
		        while(  a[q.front()]>1)
		        {
		            
		            q.pop();
		            if(q.empty())
		            {
		                exit;
		            }
		        }
		        if(!q.empty())
		        {
		            A[i]=q.front();
		        }
		        else
		        {
		            A[i]='#';
		        }
		    }
		    return A;
		}
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  
