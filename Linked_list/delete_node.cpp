// Given a linked list of N nodes such that it may contain a loop.A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.
// Remove the loop from the linked list, if it is present.  



#include <iostream>
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

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


class Solution
{
    public:
   
    void removeLoop(Node* head)
    {
        if(!head) return;
        
        Node* fast = head->next;
        Node* slow = head;
        
        while( fast != slow )
        {
            if( !fast || !fast->next ) 
            return;
            fast=fast->next->next;
            slow=slow->next;
        }
        int size = 1;
        fast = fast->next;
        {
            size++;
            fast = fast->next;
        }
        slow = head;
        fast = head;
        for(int i=0; i<size-1; i++)
            fast = fast->next;
        while( fast->next != slow )
        {
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = NULL;
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
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
