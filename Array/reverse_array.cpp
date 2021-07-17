// given a array .....reverse the array




#include <iostream>
using namespace std;
void reverse_array(int array[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = array[i];
        array[i]=array[n-1-i];
        array[n-1-i] = temp;
    }

}

int main()
{
    int array[]={1,2,3,4,5,6};
    int array_length = sizeof(array)/sizeof(array[0]);
    reverse_array(array,array_length);
    for(int i=0;i<6;i++)
    {
        cout<<array[i]<<" ";
    }

}


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
