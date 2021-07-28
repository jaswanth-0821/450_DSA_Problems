
//Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        struct Node* fast = head;
        struct Node* slow = head;
        if(fast ==NULL )
        {
            return false;
        }
        fast = fast->next;
        while(fast != slow && fast!=NULL && slow != NULL)
        {
            if(fast->next ==NULL || fast->next->next == NULL ||  slow == NULL ||slow->next== NULL )
            {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast == slow && fast !=NULL)
        {
            return true;
        }
        return false;

    }
};




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        if(ob.detectLoop(head) )
            cout<< "True\n";
        else
            cout<< "False\n";
    }
	return 0;
}
 


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
