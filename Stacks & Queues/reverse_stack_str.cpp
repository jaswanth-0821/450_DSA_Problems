//You are given a string S, the task is to reverse the string using stack.


#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

char* reverse(char *S, int len)
{
    stack<char> ar;
    for(int i=0;i<len;i++)
    {
        ar.push(S[i]);
    }
    for(int i=0;i<len;i++)
    {
        S[i]=ar.top();
        ar.pop();
    }
    return S;
}
