class LRUCache {
public:
    int capacity = 0;
    vector<pair<int, int>> lru;
    LRUCache(int capacity) {
        this ->capacity = capacity;
    }
    
    int get(int key) {
        for(int i = 0 ; i < lru.size() ; i ++) {
            if(lru[i].first == key) {
                pair<int, int> a = {lru[i].first, lru[i].second};
                lru.erase(lru.begin() + i);
                lru.push_back(a);
                return a.second;
            }
        }

        return -1;


    }
    
    void put(int key, int value) {

        for(int i = 0 ; i < lru.size() ; i ++) {
            if(lru[i].first == key) {
                lru.erase(lru.begin() + i);
                lru.push_back({key, value});
                return;
            }
        }

        if(lru.size() < capacity){
            lru.push_back({key, value});
        }

        else{
            lru.erase(lru.begin());
            lru.push_back({key, value});
        }

        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */