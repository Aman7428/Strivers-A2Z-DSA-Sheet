//Aman Kumar Sharma
//Reverse a Doubly Linked List
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
Node *ReverseLinkedList(Node *head){
    if(!head)return head;

    Node *curr=head;
    Node *last=NULL;

    while(curr != NULL){
        last=curr->prev;
        curr->prev=curr->next;
        curr->next=last;

        curr=curr->prev;
    }
    if(last != NULL){
        head=last->prev;
    }
    return head;
}
void PrintList(Node *head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    
    int val;
    cin>>val;
    Node *head=new Node(val);
    Node *tail=head;

    for(int i=1; i<n; i++){
        cin>>val;
        Node *newNode=new Node(val);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    head=ReverseLinkedList(head);
    PrintList(head);
    return 0;
}