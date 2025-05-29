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
    cout << "Initial head data: " << head->data << endl; // should print 10
    insertAtHead(head, 20);

    cout<< "Final head data: "<< head -> data << endl; // should print 20
            

return 0;
}