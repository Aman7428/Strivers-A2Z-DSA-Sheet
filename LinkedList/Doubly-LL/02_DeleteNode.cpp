//Aman Kumar Sharma
//Delete in a Doubly Linked List
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=next=NULL;
    }
};

Node *DeleteNode(Node *head, int x){
    Node *temp=head;
    if(head==NULL)return NULL;

    if(x==1){
        head=head->next;
        if(head != NULL){
            head->prev=NULL;
        }
        delete temp;
        return head;
    }

    for(int i=1; i<x && temp != NULL; i++){
        temp=temp->next;
    }

    if(temp==NULL)return NULL;

    if(temp->prev != NULL)temp->next->prev=temp->prev;
    if(temp->next != NULL)temp->prev->next=temp->next;
    delete temp;
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

    int x;
    cin>>x;
    head=DeleteNode(head, x);
    PrintList(head);
    return 0;
}