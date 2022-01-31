#include <iostream>
#include<string>
#include  <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    char c1[t],c2[t];
    cin>>c1;
    cin>>c2;
    
    
    bool check = false;
    for(int i=0;i<t && !check;i++)
    {
        
        char c3 = c1[0];
        char c4 = c2[i];
        if(c3==c4)
        {
            check=true;
            for(int j=0;j<t && check;j++)
            {
                if(c1[j]!=c2[(i+j)%t])
                {
                   
                    check=false;
                }
            }
        }
    }
    cout<<check;
	return 0;
}
