// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };


// }

// int main(){


  
//   pair<int,int> diaFast(Node* root){
      
//         if(root == NULL){
            
//             pair<int,int> p = make_pair(0,0);
//             return p;
//         }
        
//         pair<int,int> left = diaFast(root->left);
//         pair<int,int> right = diaFast(root->right);
//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second  ;
//         pair<int,int> ans ;
//         ans.first = max(op1,max(op2,op3));
//         ans.second = max(left.second,right.second) + 1;
        
        
//         return ans;
//   }
//     int diameter(Node* root) {
//         // Your code here
//         return diaFast( root).first;
         

//     }


// return 0;
// }

// get the logic only , ntg else , cuz it is incomplete as it is a gfg question...