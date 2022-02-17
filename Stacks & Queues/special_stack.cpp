//Design a data-structure SpecialStack that supports all the stack operations likepush(), pop(), isEmpty(),
//isFull() and an additional operation getMin() which should return minimum element from the SpecialStack.
//Your task is to complete all the functions, using stack data-Structure


#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);

stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}


void push(stack<int>& s, int a)
{
    s.push(a);
    return ;
	
}

bool isFull(stack<int>& s,int n)
{
    if(s.size()==n)
    {
        return true;
    }
    return false;

}

bool isEmpty(stack<int>& s)
{
    if(s.size()==0)
    {
        return true;
    }
    return false;
}
int pop(stack<int>& s)
{
    int x  = s.top();
    s.pop();
    return x;
}
int getMin(stack<int>& s)
{
    int mini =99999;
    while(!(s.empty()))
    {
        mini = min(mini,s.top());
        s.pop(); 
    }
    return mini;
    
}
