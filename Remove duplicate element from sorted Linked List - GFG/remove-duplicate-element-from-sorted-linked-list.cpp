//{ Driver Code Starts
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
int main() {
	// your code goes here
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
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 if(head==NULL ||head->next==NULL)
 {
     return head;
 }
 Node* temp=head;
 while(true)
 {   Node* temp=head;
     while(temp->next!=NULL &&temp->data!=temp->next->data)
 {
     temp=temp->next;
 }
 if(temp->next==NULL)
 {
     return head;
 }
 
 
 Node* t=temp;
 Node* t1=temp;
  Node* t2=temp;
 
 
 while((temp->next!=NULL)&&(temp->data==temp->next->data))
 {  
     t=temp->next;
     t2=t->next;
     temp->next=temp->next->next;
     delete t;
 }
 t1->next=t2;
 }
 return head;
 
}