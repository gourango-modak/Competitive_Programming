    

class TrieNode {
    TrieNode* left;
    TrieNode* right;
    bool endWord;
}


class TrieNode {
public:
    TrieNode *numbers[10];
    int data;
    bool endNum;
};


TrieNode* newNode(int data, int end) {
    TrieNode *node = new TrieNode();
    node->data = data;
    node->endNum = end;
    rep(i, 0, 10) node->numbers[i] = NULL;
    return node;
}


void insertTrie(int n, TrieNode* head) {
    TrieNode *cur = head;
    for(int i=31; i>=0; i--) {
        int bit = (n>>i)&1;
        if(bit == 0) {
            if(!cur->left) cur = new TrieNode();
            cur = cur->left;
        } else {
            if(!cur-right) cur = new TrieNode();
            cur = cur->right;
        }
    }
}


void walkInTrie(TrieNode *head) {
    if(head == NULL) return;
    rep(i, 0, 10) {
        walkInTrie(head->numbers[i]);
        if(head->numbers[i] != NULL)
            cout << head->numbers[i]->data << " ";
    }
}



bool walkInTrie(TrieNode *head) {
    if(head == NULL) return 0;
    bool res = 0;
    rep(i, 0, 10) {
        int noOfChild = 0;
        if(head->numbers[i] != NULL && head->numbers[i]->endNum) {
            rep(j, 0, 10) {
                if(head->numbers[i]->numbers[j] != NULL) noOfChild++;
            }
            if(noOfChild>0) {
                return 1;
            }
        }
        res |= walkInTrie(head->numbers[i]);
    }
    return res;
}