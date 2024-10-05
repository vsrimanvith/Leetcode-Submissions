class LRUCache {
public:
    class Node{
        public:
        int key, val;
        Node* prev, *next;

        Node(int key, int val){
            this->key=key;
            this->val=val;
        }
    };
    Node * head = new Node(-1,-1);
    Node * tail = new Node(-1,-1);

    int capacity;
    unordered_map<int,Node*>mp;

    


    LRUCache(int capacity) {
        this->capacity=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addNode(Node* node){
        Node* temp=head->next;
        node->next=temp;
        node->prev=head;
        head->next=node;
        temp->prev=node;
        
    }

    void delNode(Node* node){
        Node* node_prev=node->prev;
        Node* node_next=node->next;
        node_prev->next=node_next;
        node_next->prev=node_prev;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* resnode = mp[key];
            int res = resnode -> val;
            mp.erase(key);

            delNode(resnode);
            addNode(resnode);
            mp[key]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* resnode = mp[key];
                        mp.erase(key);

            delNode(resnode);
        }
        if(capacity==mp.size()){
            mp.erase(tail->prev->key);
            delNode(tail->prev);
        }
        addNode(new Node(key,value));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */