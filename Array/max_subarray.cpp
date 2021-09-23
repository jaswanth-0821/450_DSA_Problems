// Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.


#include <bits/stdc++.h>

using namespace std;

#define ll long long int 
class Solution{
public:


long long maxProduct(vector<int> arr, int n) {
    ll maxProd = 1; 
    ll minProd = 1; 
    ll ans = 0;
    for(int i =0 ; i<n ; i++){
        ll x = arr[i];
        if(x<0)
        swap(minProd , maxProd);
        maxProd = max(x , x*maxProd);
        minProd = min(x , x*minProd);
        ans = max(ans,maxProd);
        
    }
    return ans ;
}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} 
