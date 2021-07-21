#include<iostream>
using namespace std;

void changeorder(int array[],int n)
{
    int x,y;
    x=0;y=n-1;
    while(x<=y)
    {
        if(array[x]>=0 && array[y]<0)
        {
            int temp= array[y];
            array[y]=array[x];
            array[x]=temp;
            x = x+1;
            y = y-1;
            
        }
        else if(array[x]>=0 && array[y]>=0)
        {
            y = y-1;
        }
        else if(array[x]<0 && array[y]<0)
        {
            x=x+1;
        }
        else
        {
            x = x+1;
            y = y-1;
        }
        
        
    }
    return;
}


int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    changeorder(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
    }
}
