#include<bits/stdc++.h>
using namespace std;
int main(){
            string str = "chaman";
            stack<char> s ;
            for(int i = 0 ; i < str.length();i++){
                s.push(str[i]);
            }
            string ans = "";

            while(s.empty() == false){
                ans += s.top();
                s.pop();
            }

            cout << "Reversed string: " << ans << endl;

return 0;
}