class StockSpanner {
public:
    vector<int> a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int c = 1;
        a.push_back(price);

        for(int i = a.size() - 2 ; i >= 0 ; i --) {
            if(a[i] <= a[a.size() - 1]) c++;
            else break;
        }

        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */