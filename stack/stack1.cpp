#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.pop();
    cout<< "Top element: " << s.top() << endl; // Should print 20

return 0;
}