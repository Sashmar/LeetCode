class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> a(n);
        iota(a.begin(), a.end(), 1);
        int b = 0;
        int i = 0;
        while(b < n - 1) {
            i = (i + k - 1) % a.size();

            a.erase(a.begin()+ i);
            b++;
        }

        return a[0];

    }
};