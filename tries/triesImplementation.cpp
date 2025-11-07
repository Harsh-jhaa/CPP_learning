#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTreminal;
    TrieNode(char ch){
        data = ch;
        for(int i = 0; i<26; i++){
            children[i] = NULL;
        }
        isTreminal = false;
    }

};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    // insertion into trie
    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
            root->isTreminal = true;
            return;
        }

        // assuming only uppercase letters
        int index = word[0]-'A';
        TrieNode* child;

        // present character
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }else{
            // absent character
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }
        // recursion
        insertUtil(child, word.substr(1));

    }
    void insertWord(string word){
        insertUtil(root, word);
    };

    // searching in trie
    bool searchUtil(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
            return root->isTreminal;
        }

        // assuming only uppercase letters
        int index = word[0] - 'A';
        TrieNode* child;

        // present character
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }else{
            return false;
        }
        // recursion
        return searchUtil(child, word.substr(1) );
    }

        bool searchWord(string word){
        return searchUtil(root, word); 
    }
};

int main(){
 
    Trie* t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("ARM");
    t->insertWord("TIME");
    cout<<"Present or not:"<<t->searchWord("TIME")<<endl; // 1
    cout<<"Present or not:"<<t->searchWord("TIM")<<endl;   // 0
    


return 0;
}