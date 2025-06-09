#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next = NULL;

    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this-> next = NULL;

        }
    }
};
void insertNode(int data,int pr , Node* &tail){
     
    // empty list
    if(tail == NULL ){
        Node* temp = new Node(data);
        tail = temp;
        tail->next = tail;
    }
    else{
        Node* curr = tail;
        while(curr->data != pr){
            curr = curr->next;
        }

        Node* temp = new Node(data );
         temp-> next = curr-> next;
         curr-> next = temp;
}
};
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
   do{
    cout<< tail-> data<<" ";
    tail = tail->next;
   }while(tail != temp);
    cout << endl;
}
void deleteNode(Node* &tail,int value){
    if(tail == NULL){
    cout<< "List is empty." << endl;
    return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next; // start from the first node
        while(curr->data != value){
            prev= curr;
            curr = curr->next;
        }
        
        prev ->next = curr -> next;

        if(tail == prev){
            tail = NULL;
        }
        
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
    

int main(){
    Node* tail = NULL;
    
   
    for (int i = 1; i < 6 ;i++){
        insertNode(i*10,i*10 - 10,tail);
    };
   
    
    print(tail);
    deleteNode(tail, 10);
    print(tail);

return 0;
};