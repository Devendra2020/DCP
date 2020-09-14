/*
Problem Statement -An XOR linked list is a more memory efficient doubly linked list. 
Instead of each node holding next and prev fields, it holds a field named both, 
which is an XOR of the next node and the previous node. Implement an XOR linked list;
 it has an add(element) which adds the element to the end, and a get(index) which returns, 
 the node at index.
 
*/


#include <stdint.h>
#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* npx; 
	
	Node(int x){
	    data = x;
	    npx = NULL;
	}
};

struct Node* XOR (struct Node *a, struct Node *b)
{
	return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

void insert(struct Node **head_ref, int data);

void printList (struct Node *head);

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *head = NULL;
        int n, tmp;
        cin>>n;
        while(n--)
        {
            cin>>tmp;
            insert(&head, tmp);
        }
        printList (head);
        cout<<"\n";
    }
	return (0);
}


void insert(struct Node **head_ref, int data)
{
	Node *head=*head_ref;
if(head==NULL)
{*head_ref=new Node(data);


}
else
{Node *new_node=new Node(data);


    (*head_ref)->npx=XOR(new_node,(*head_ref)->npx);
    new_node->npx=*head_ref;
    *head_ref=new_node;
}    
}

void printList (struct Node *head)
{
	Node *temp=head;
	Node *prev=NULL;
	while(temp)
	{
	    cout<<temp->data<<" ";
	    Node *temp1=prev;
	    prev=temp;
	    temp=XOR(temp->npx,temp1);
	   
	    
	}
	
	temp=prev;
	prev=NULL;
	cout<<"\n";
	while(temp)
	{
	    cout<<temp->data<<" ";
	    Node *temp1=prev;
	    prev=temp;
	    temp=XOR(temp->npx,temp1);
	   
	    
	}
	
	
	
}
