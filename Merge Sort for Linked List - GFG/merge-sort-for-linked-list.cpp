//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution {
private:
    Node* findMid(Node* head)
    {
        Node* sp=head;
        Node* fp=head->next;
        while(fp!=NULL && fp->next!=NULL)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        return sp;
    }
    Node* mergeList(Node* left,Node* right)
    {
        if(left==NULL) return right;
        if(right==NULL) return left;

        Node* temp=new Node(-1);
        Node* head=temp;
        while(left!=NULL && right!=NULL)
        {
            if(left->data<=right->data)
            {
                head->next=left;
                head=left;
                left=left->next;
            }
            else
            {
                head->next=right;
                head=right;
                right=right->next;
            }
        }
        while(left!=NULL)
        {
            head->next=left;
            head=left;
            left=left->next;
        }
        while(right!=NULL)
        {   head->next=right;
            head=right;
            right=right->next;
        }
        return temp->next;
    }
public:
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* mid;
        mid=findMid(head);

        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;

        left=mergeSort(left);
        right=mergeSort(right);

        Node* ans=mergeList(left,right);
        return ans;
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends