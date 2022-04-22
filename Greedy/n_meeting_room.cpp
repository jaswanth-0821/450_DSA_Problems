//There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is 
//start time of meeting i and end[i] is finish time of meeting i.What is the maximum number of meetings that can 
//be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
    {
        return (a.second < b.second);
    }
    public:

    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back(make_pair(start[i],end[i]));
            
        }
        sort(arr.begin(),arr.end(),sortbysec);
        int count =1;
        int temp=arr[0].second;
        for(int i=1;i<n;i++)
        {
            if(temp<arr[i].first)
            {
                count++;
                temp = arr[i].second;
            }
        }
        return count;
       
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} 
