#include <iostream>
using namespace std;

void find_min_max(int array[],int array1[],int n)
{
    if(n==0)
    {
        array1[0]=0;
        array1[1]=0;
    }
    else if(n==1)
    {
        array1[0]=array[0];
        array1[1]=array[0];
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]<array1[0])
            {
                array1[0]=array[i];
            }
            else if(array[i]>array1[1])
            {
                array1[1]=array[i];
            }
        }
    }
    
    

}

int main()
{
    int array[]={1,2,3,4,5,6};
    int array_length = sizeof(array)/sizeof(array[0]);
    int array1[2]={9999,-1};
    find_min_max(array,array1,array_length);
    cout<<"minimum = "<<array1[0]<<endl;
    cout<<"miximum = "<<array1[1]<<endl;
    
    

}


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
