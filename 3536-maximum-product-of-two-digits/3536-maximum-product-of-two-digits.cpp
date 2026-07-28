class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        while(n > 0) {
            a.push_back(n % 10);
            n = n / 10;
        }

        sort(a.begin(), a.end(), greater<int>());
        return a[0] * a[1];
    }
};