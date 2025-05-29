#include<bits/stdc++.h>
using namespace std;
int main(){
            string s1= "hello";
            string s2= "world";
            string s3= "hello world";
            if(s1.compare(s2)==0){
                cout<<"s1 and s2 are equal"<<endl;
            }
            else if(s1.compare(s3)==0){
                cout<<s1.compare(s2)<<endl;
                 }
            else{
                    cout<<s1.compare(s3);
                } 

return 0;
}