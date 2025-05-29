#include<iostream>
using namespace std;

int main(){
    int i;
    for ( i = 0; i < 5; i++)
    {
       if(i==3){
        continue;
       }
        /* code */
        cout<<i<<endl;

    }
    
    return 0;
}