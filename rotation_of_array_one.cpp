// Given an array, rotate the array by one position in clock-wise direction.

#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}



void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    return;
}

// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
