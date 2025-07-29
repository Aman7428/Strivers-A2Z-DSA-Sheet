//Aman Kumar Sharma
//Linked List Insertion At End
#include<bits/stdc++.h>
using namespace std;

//Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *InsertAtEnd(Node *head, int x){
    Node *newNode=new Node(x);

    if(head==NULL)return newNode;

    Node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}

void PrintLinkedList(Node *head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n, x;
    cin>>n;
    Node *head=NULL;
    Node *tail=NULL;

    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    cin>>x;
    head=InsertAtEnd(head, x);
    PrintLinkedList(head);
    return 0;
}