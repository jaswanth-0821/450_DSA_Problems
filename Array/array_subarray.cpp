// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not.
// Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.


#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_map<int, int> umap;
    for(int i =0;i<n;i++)
    {
        umap[a1[i]]=1;
    }
    for(int i =0;i<m;i++)
    {
        if(umap[a2[i]]==0)
        {
            return "No";
        }
    }
    return "Yes";
    
    
}
