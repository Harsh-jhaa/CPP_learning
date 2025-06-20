#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int *arr;
    int top;    
    int size;

    Stack(int size){
        this-> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout<< "Stack overflow" << endl;
        }
    }
    void pop(){
        if(top >= 0 ){
            top--;
        }else{
            cout<< "Stack underflow" << endl;
        }
    }
    int peek(){
       if(top >= 0){
        return arr[top];
       }else{
        cout<< "Stack is empty" << endl;
        return -1; // or some other error value
       }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};
int main(){
            Stack st(5);

            st.push(10);
            st.push(20);    
            st.push(30);
            st.push(40);
            st.push(50);

            // should give 50
            cout<< "top element: "<< st.peek()<<endl; 

            st.pop();
            // should give 40
            cout<< "top element: "<< st.peek()<<endl; 


            for(auto i = 1; i<5; i++){
                st.pop();
            }
            // should give "Stack underflow"
           cout<< "empty:" << st.isEmpty() << endl;


return 0;
}