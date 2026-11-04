class StockSpanner {
public:
    vector<int> a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int c = 1;
        a.push_back(price);
        reverse(a.begin(), a.end());

        for(int i = 1 ; i < a.size() ; i ++) {
            if(a[i] <= a[0]) c++;
            else break;
        }

        reverse(a.begin(), a.end());

        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */