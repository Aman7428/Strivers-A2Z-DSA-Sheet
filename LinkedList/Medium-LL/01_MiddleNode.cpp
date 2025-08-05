//Aman Kumar Sharma
//Middle of the Linked List (leetcode-876)
#include<bits/stdc++.h>
using namespace  std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next){}
};
ListNode* MiddleNode(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void PrintListNode(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=NULL;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        ListNode* newNode=new ListNode(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    head=MiddleNode(head);
    PrintListNode(head);
    return 0;
}