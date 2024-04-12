#include <iostream>
using namespace std;

class TrieNode {
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;

            for(int i=0; i<26; i++){
                children[i] = NULL;
            }

            isTerminal = false;
        }
};

class Trie {
    public:
        TrieNode* root;

        Trie() {
            root = new TrieNode('\0');
        }

        void insertUtil(TrieNode* root, string word){
            //Base Case
            if (word.length() == 0){
                root->isTerminal = true;
                return;
            }
            //Assumption all characters in the word is capital
            int index = word[0] = 'A';
            TrieNode* child;
            //Present
            if (root->children[index] != NULL){
                child = root->children[index];
            }else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }
            //Recurrsion
            insertUtil(child, word.substr(1));
        }

        void insertWord(string word){
            insertUtil(root, word);
        }
};

int main(){
    Trie *T = new Trie();
    T->insertWord("abcd");
    return 0;
}