//You are given a string s of lower case english alphabets. You can choose any two characters in the string and
//replace all the occurences of the first character with the second character and replace all the occurences of 
//the second character with the first character. Your aim is to find the lexicographically smallest string that 
//can be obtained by doing this operation at most once.

Example 1:
#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    pair<int,int> calcu(vector<int> arr)
    {
        vector<int>arr1(arr.size(),-1);
        if(arr.size()<2)
        {
            pair<int,int> f1  = make_pair(-1,-1);
            return f1;
            
        }
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr1[i+1]==-1)
            {
                if(arr[i]>arr[i+1])
                {
                    arr1[i] = i+1;
                }
            }
            else
            {
                if(arr[i]>arr[arr1[i+1]])
                {
                    arr1[i] = arr1[i+1];
                    
                }
                
            }
        }
    
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]!=-1)
            {
                pair<int,int> x = make_pair(arr[i],arr[arr1[i]]);
                return x;
            }
        }
        pair<int,int> f  = make_pair(-1,-1);
        return f;
    }
    string chooseandswap(string a)
    {
        map<char,int> stri;
        map<int,char> rstri;
        map<int,bool> check;
        for(int i=0;i<a.length();i++)
        {
            stri[a[i]] = int(a[i])-96;
            rstri[stri[a[i]]] = a[i];
            
        }
        vector<int> arr;
        for(int i=0;i<a.length();i++)
        {
            if(!check[stri[a[i]]])
            {
                check[stri[a[i]]] = true;
                arr.push_back(stri[a[i]]);
            }
        }
        pair<int,int> ans = calcu(arr);
        if(ans.first!=-1)
        {
            char p = rstri[ans.first];
            char q = rstri [ans.second];
            for(int i=0;i<a.length();i++)
            {
                if(a[i]==p)
                {
                    a[i]=q;
                }
                else if(a[i]==q)
                {
                    a[i]=p;
                }
            }
            return a;
        }
        else
        {
            return a;
        }
        
        // Code Here
        return a;
    
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
