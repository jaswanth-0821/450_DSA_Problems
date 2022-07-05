// A board of length m and width n is given, we need to break this board into m*n squares such 
// that cost of breaking is minimum. cutting cost for each edge will be given for the board. 
// In short,we need to choose such a sequence of cutting such that cost is minimized.

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int cost(vector<int> l,vector<int> w,int n,int m)
{
	sort(l.begin(),l.end(),greater <>());
	sort(w.begin(),w.end(),greater <>());
	int x=1;
	int y=1;
	int ans=0;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(l[i]>w[j])
		{
			ans =ans + (l[i]*x);
		
			y++;
			i++;
		}
		else
		{
			ans =ans + (w[j]*y);
		
			x++;
			j++;
			
		}
	}
	while(i<n )
	{
		ans =ans + (l[i]*x);
		y++;
		i++;	
	}
	while(j<m)
	{
		ans =ans + (w[j]*y);
	
		x++;
		j++;		
	}
	return ans;	
}

int main() 
{
	int n,m;
	cin>>n>>m;
	vector<int> l;
	vector<int> w;
	for(int i=0;i<n-1;i++)
	{
		int x;
		cin>>x;
		l.push_back(x);
	}
	for(int i=0;i<m-1;i++)
	{
		int x;
		cin>>x;
		w.push_back(x);
	}
	int ans = cost(l,w,n-1,m-1);
	cout<<ans<<endl;
	
	// Your code goes here;

	return 0;
}