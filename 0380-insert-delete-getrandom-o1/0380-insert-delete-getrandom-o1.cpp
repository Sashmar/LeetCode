class RandomizedSet {
public:
    vector<int> a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        for(int i = 0 ; i < a.size() ; i ++) {
            if(a[i] == val) return false;
        }

        a.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        for(int i = 0 ; i < a.size() ; i ++) {
            if(a[i] == val) {
                a.erase(a.begin() + i);
                return true;
            }
        }

        return false;
    }
    
    int getRandom() {
        random_device rd;

        mt19937 gen(rd());

        uniform_int_distribution<int> distr(0, a.size() -1);

        int ind = distr(gen);

        return a[ind];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */