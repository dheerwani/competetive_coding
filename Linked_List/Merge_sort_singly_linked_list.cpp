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


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    void splitting(Node* source,Node** a,Node** b)
    {
        Node* slow = source;
        Node* fast = source->next;
        
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        
        *a =source;
        *b = slow->next;
        slow->next=NULL;
    }
    
    Node* merging(Node* a,Node* b)
    {
        Node *result =NULL;
        if(a==NULL)
            return b;
        else if(b==NULL)
            return a;
        
        if(a->data <= b->data)
        {
            // cout<<a->data<<" ";
            result=a;
            result->next= merging(a->next,b);
        }
        else
        {
            // cout<<b->data<<" ";
            result=b;
            result->next= merging(a,b->next);
        }
        // cout<<endl;
        return result;
    }
    
    void mergemyway(Node** headref)
    {
        Node* head= *headref;
        Node* a;
        Node* b;
        
        if(head==NULL || head->next==NULL)
        {
            return;
        }
        
        splitting(head,&a,&b);
        
        mergemyway(&a);
        mergemyway(&b);
        
        *headref = merging(a,b);
        // your code here
        
    }
    
    Node* mergeSort(Node* headref) {
        
        mergemyway(&headref);
        
        return headref;
        
        
    }
};


// { Driver Code Starts.

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
}  // } Driver Code Ends