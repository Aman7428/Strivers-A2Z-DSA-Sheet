//Aman Kumar Sharma
//Find Length of Linked List
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int CountNode(Node *head){
    int count=1;
    Node *temp=head;
    while(temp->next != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    int n;
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
    cout<<CountNode(head)<<endl;
    return 0;
}