//Aman Kumar Sharma
//Insertion at doubly linked list

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        prev = next = NULL;
    }
};

Node* InsertNode(Node *head, int pos, int data) {
    if (head == NULL) return head; // If list is empty, no insertion possible

    Node *newNode = new Node(data);
    Node *temp = head;

    // Traverse to the node at index `pos`
    for (int i = 0; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) return head; // Invalid position

    Node *nextNode = temp->next;

    // Link newNode
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = nextNode;

    if (nextNode != NULL) nextNode->prev = newNode;

    return head; 
}

void PrintList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    int val;
    cin >> val;
    Node *head = new Node(val);
    Node *tail = head;

    // Build the list
    for (int i = 1; i < n; i++) {
        cin >> val;
        Node *newNode = new Node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    int pos, data;
    cin >> pos >> data;

    // Insert and print
    head = InsertNode(head, pos, data);
    PrintList(head);

    return 0;
}
