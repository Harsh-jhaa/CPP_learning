#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp -> next = head; // new node points to the current head
    head = temp; // head now points to the new node
    cout << "Inserted node at the head." << endl;


}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp; // new node points to the current head
    tail = temp; // head now points to the new node
    cout << "Inserted node at the tail." << endl;


}
void insertAtPosition(Node* &tail,Node* &head,int position, int data ){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node*temp = head;
    int count = 1;
    while(count < position -1 ){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next; // new node points to the next node
    temp -> next = nodeToInsert; // previous node points to the new node
}

// traverse the linked list
void printing(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){

    Node* node1 = new Node(10);
    Node* head = node1; // head points to the first node
    Node* tail = node1; // tail also points to the first node
    cout << "Initial head data: " << head->data << endl; // should print 10
    cout<<"Initial linked list:";
    printing(head);
    insertAtHead(head, 20);
    insertAtTail(tail,30);

    // cout<< "Final head data: "<< head -> data << endl; // should print 20
    // cout<< "Final tail data: "<< tail -> data << endl; // should print 20
    cout<<"Final linked list: ";
    printing(head); // should print 20 10 30

    insertAtPosition(tail, head, 3, 25); // This function is not implemented yet
    printing(head); // should print 20 25 10 30
    cout<< "Final head data: "<< head -> data << endl; 
    cout<< "Final tail data: "<< tail -> data << endl; 

return 0;
}