class LRUCache {
public:

    class Node{
      public:
        int key; int val;
        Node* next; 
        Node* prev; 
        
        Node(int key,int val)
        {
            this->key = key;
            this->val = val; 
        }
        
    };
    
    int cap; 
    unordered_map<int,Node*> mp; 
    
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    
    void addNode(Node*node){
        node->next = head->next; 
        head->next->prev = node; 
        node->prev = head;  
        head->next = node;         
    }
    
    void delNode(Node*node){
        node->prev->next = node->next; 
        node->next->prev = node->prev; 
        
    }
    
    LRUCache(int capacity) {
        cap = capacity; 
        head->next = tail; 
        tail->prev = head; 
    }
    
    int get(int key) {
        
        if(mp.find(key)!=mp.end()){
            
    Node* res = mp[key];
    int ans = res->val;
    mp.erase(key);
    delNode(res);
    addNode(res);
mp[key] = head->next; // since out addNode added res after.. ~ head->next...       
    return ans; 
        }
        
        return -1; 
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            
//      means it exists already... 
//      so basically we have to move it to recently used cache...
//      we del. it here the add again...
            
            Node* del = mp[key];
            mp.erase(key);
            delNode(del);            
        }
        
        if(mp.size()==cap){
//             if size full then...remove the oldest node... LRU...
            int _key  = tail->prev->key; 
            mp.erase(_key); // removing the LRU... from map.. 
//             now removing from the doubly linkedlist..
                    delNode(tail->prev);
            
        }
        
//         now we add the node... 
        addNode(new Node(key,value));
        mp[key] = head->next; 
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */