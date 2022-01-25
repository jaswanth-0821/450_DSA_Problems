//Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.

#include <bits/stdc++.h>
using namespace std;
 
#define N 4
 
void print(int arr[N][N])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
            cout << arr[i][j] << " ";
             
        cout << '\n';
    }
}
 
void rotate(int arr[N][N])
{
     
    
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
 
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N / 2; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][N - j - 1];
            arr[i][N - j - 1] = temp;
        }
    }
}
 
