#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
// traversing the linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// length finding of linked list
int length(Node* head){
    int len = 0;
     Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;

    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int data ){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp; // if head is null, tail should also point to the new node
    }
    else{
        Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}
void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp; // if tail is null, head should also point to the new node
    }
    else{
        Node* temp = new Node(data);
    tail ->next = temp;
    temp-> prev = tail;
    tail = temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail, int data,int position){
    if(position == 1){
        insertAtHead(head,tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1 && temp != NULL){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main(){
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << "Length : "<< length(head)<<endl;
    insertAtHead(head,tail, 10);
    print(head);
    for(int i =3;i<6;i++){
        insertAtTail(tail,head,i*10);
    } 
    
    print(head);
    insertAtPosition(head, tail, 25, 3);
    print(head);
    
            

return 0;
}