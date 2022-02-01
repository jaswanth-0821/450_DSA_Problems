// Given a string str, find the length of the longest repeating subsequence such that it can be found twice in the given string. 
// The two identified subsequences A and B can use the same ith character from string str if and only if that ith character has
// different indices in A and B.


#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    
		    int n = str.size();
		    int t[n+1][n+1];
		    
		    for(int i=0;i<=n;i++){
		        for(int j=0;j<=n;j++){
		            if(i==0 || j==0){
		                t[i][j] = 0;
		            }
		            else if(str[i-1] == str[j-1] && i!=j){
		                t[i][j] = 1 + t[i-1][j-1];
		            }
		            else t[i][j] = max(t[i-1][j],t[i][j-1]);
		        }
		    }
		    return t[n][n];
		}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
} 
