class TrieNode {
public:
    TrieNode* child[26];
    bool isword;

    TrieNode(){
        for(int i = 0; i < 26; i++){
            child[i] = nullptr;
        }
        isword = false;
    }
};

class PrefixTree {
    TrieNode* root = new TrieNode();
public:
    PrefixTree() {

    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for(auto c : word){
            int i = c - 'a';
            if(temp->child[i] == nullptr){
                temp->child[i] = new TrieNode();
            }
            temp = temp->child[i];
        }
        temp->isword = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        for(char c : word){
            int i = c - 'a';
            if(temp->child[i] == nullptr){
                return false;
            }
            temp = temp->child[i];
        }
        return temp->isword;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for(char c : prefix){
            int i = c - 'a';
            if(temp->child[i] == nullptr){
                return false;
            }
            temp = temp->child[i];
        }
        return true;
    }
};
