#include<iostream>
using namespace std;
void swapPointer(int *a, int *b)
{ int temp=*a;
   *b=*a;
   *b=temp;

} 
int main(){
    int x=3,y=6;
    cout<<"the value of x is "<<x<< "and y is"<<y<<endl; 
    swap(x,y);
    cout<<"the value of x is "<<x<< "and y is"<<y<<endl; 
    
    return 0;
}