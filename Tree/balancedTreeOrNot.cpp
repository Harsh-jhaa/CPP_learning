// class Solution {
//     private:
//         pair<bool,int> isBalancedFast(Node* root){
//             if(root == NULL){
//                 //base condition 
//                 pair<bool,int> p = make_pair(true,0);
//                 return p;
//             }
            
//             // left and right side calling
//             pair<bool,int> left = isBalancedFast(root->left);
//             pair<bool,int> right = isBalancedFast(root->right);
            
//             bool leftAns = left.first;
//             bool rightAns = right.first;
            
//             bool diff = abs(left.second - right.second) <= 1;
            
//             pair<bool,int> ans;
//             ans.second = max(left.second,right.second) + 1;
            
//             if(leftAns && rightAns && diff){
//                 ans.first = true;
//             }else{
//                 ans.first = false;
//             }
//             return ans;
//         }
//   public:
//     bool isBalanced(Node* root) {
//         // Code here
//         return isBalancedFast(root).first;
//     }
    
// };


// only the main solution logic