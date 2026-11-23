class ProductOfNumbers {
public:
    vector<int> a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int b = a.size() - k;
        int mul = 1;
        for(int i = b ; i < a.size() ; i ++) mul *= a[i];
        return mul;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */