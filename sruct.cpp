#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eID;
    float salary;
    char fchar;
    
}
ep;

int main(){
    
    ep harsh;
    
    harsh.eID=1;
    harsh.salary=2000000;
    harsh.fchar='n';
    cout<<"the value is"<<harsh.eID<<endl;
    cout<<"the value is"<<harsh.fchar<<endl;
    cout<<"the value is"<<harsh.salary<<endl;


    return 0;
}