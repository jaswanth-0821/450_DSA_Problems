// Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
// Note: Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a sorted way.

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
Node* removeDuplicates(Node *root);
int main() 
{
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

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
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}


Node *removeDuplicates(Node *head)
{
    struct Node* temp1 = head;
    struct Node* temp2 = head->next;
    if(temp2==NULL)
    {
        return head;
    } 
    while(temp2!=NULL && temp2->next!=NULL)
    {
        
        if(temp2->data==temp1->data)
        {
            temp1->next = temp2->next;
            free(temp2);
            temp2 = temp1->next;
        }
        else
        {
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
    }
    if(temp2!=NULL)
    {
        if(temp2->data==temp1->data)
        {
            temp1->next = NULL;
            free(temp2);
        }
    }
    return head;
    
}
 


// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
