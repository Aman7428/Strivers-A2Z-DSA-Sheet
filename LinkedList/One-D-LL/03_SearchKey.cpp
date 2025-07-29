//Aman Kumar Sharma
//Search in Linked List
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
bool SearchInLinkedList(int n, Node *head, int key){
    Node *temp=head;
    while(temp){
        if(temp->data==key)return true;
        else temp=temp->next;
    }
    return false;
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
    int key;
    cin>>key;
    cout<<SearchInLinkedList(n, head, key)<<endl;
    return 0;
}