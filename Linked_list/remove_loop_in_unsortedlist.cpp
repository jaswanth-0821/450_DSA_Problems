// Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.
    
    
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

class Solution
{
    public:
.
    Node * removeDuplicates( Node *head) 
    { 
  
        unordered_set<int> seen; 
      
  
        struct Node *curr = head; 
        struct Node *prev = NULL; 
        while (curr != NULL) 
        { 
 
            if (seen.find(curr->data) != seen.end()) 
            { 
               prev->next = curr->next;
 
               delete (curr);             
            }
    
            else
            { 
               seen.insert(curr->data);
               prev = curr; 
            }
            curr = prev->next; 
        } 
        return head;
    }
    
};



int main() {

	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
