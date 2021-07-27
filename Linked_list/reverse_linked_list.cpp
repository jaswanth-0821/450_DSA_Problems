// Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.




#include <iostream>

using namespace std;

class node
{
    public:
        int data;
        node* next;
};
void reverse_array(node** head)
{
    node* temp1 = new node();
    temp1 = *head;
    while(temp1 != NULL)
    {
        node* temp2 = new node();
        temp2->data = temp1->data;
        temp2->next =*head;
        *head = temp2;
        temp1 = temp1->next;
    }
    return ;
}
void push(node** head,int data)
{
    node* temp = new node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
    return;
}

int main() 
{
    int t,x;
    cin>>t;
    node* head = new node();
    for(int i=0;i<t;i++)
    {
        cin>>x;
        if(i==0)
        {
            head->data= x;
            head->next = NULL;
        }
        else
        {
            push(&head,x);
        }
    }
    reverse_array(&head);
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data;
}

// i tried my best to not to make any mistake .....if you find any wrong in my code .....please feel free to text me.
// if you got any code which takes less complex than my code please feel free to share with me .....may be it will help someone who in need.
