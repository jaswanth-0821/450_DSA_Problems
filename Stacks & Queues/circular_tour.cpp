
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};
class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
        int start =0;
        int q[n];
        for(int i=0;i<n;i++)
        {
            q[i]=p[i].petrol - p[i].distance;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum + q[i];  
        }
        if(sum<0)
        {
            return -1;
        }
        start = 0;
        int starti = 0;
        for(int i=0;i<n ;i++)
        {
            start = start+q[i%n];
            if(start<0)
            {
                starti= (i+1)%n;
                start = 0;
            }   
        }
        if(start>0)
        {
            return starti;
        }
        return -1;
       
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
