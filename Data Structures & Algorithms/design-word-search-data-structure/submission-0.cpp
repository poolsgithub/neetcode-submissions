class Node {
   public:
    Node* child[26];
    bool isword;

    Node() {
        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
        isword = false;
    }
};

class WordDictionary {
    Node* root = new Node();

   public:
    WordDictionary() {}

    void addWord(string word) {
        Node* temp = root;
        for (char c : word) {
            int i = c - 'a';
            if (temp->child[i] == nullptr) {
                temp->child[i] = new Node();
            }
            temp = temp->child[i];
        }
        temp->isword = true;
    }

    bool helper(Node* root, int index, string word) {
        Node* temp = root;
        for (int k = index; k < word.size(); k++) {
            if (word[k] == '.') {
                for (int j = 0; j < 26; j++) {
                    if (temp->child[j] != nullptr && helper(temp->child[j], k + 1, word)) {
                        return true;
                    }
                }
                return false;
            }
            int i = word[k] - 'a';
            if (temp->child[i] == nullptr) {
                return false;
            }
            temp = temp->child[i];
        }

        return temp->isword;
    }

    bool search(string word) {
       return helper(root, 0, word);
    }
};
