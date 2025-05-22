#include <bits/stdc++.h>
using namespace std;

struct Node{ 
    int data;
    Node *next;

};

Node* createNode(int value) {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}

void append(Node*& head, int value){
    Node* newnode = createNode(value);
    if(head == nullptr){
        head = newnode;
        return;
    }

    Node *temp = head;
    while(temp->next != nullptr){
        temp= temp->next;

    }
    temp->next= newnode;
}


void display(Node* head){
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



int main() {
    Node* head = nullptr; // Initialize empty linked list

    append(head, 10);
    append(head, 20);
    append(head, 30);

    display(head);

    

    return 0;
}
