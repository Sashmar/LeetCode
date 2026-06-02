class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for(int i = left ; i <= right ; i++ ) {
            string b = to_string(i);
            int n = 0;
            for(int j = 0 ; j < b.size() ; j ++) {
                if(b[j] == '0' || i % (b[j] - '0') != 0) {
                    n = 1;
                    break;
                }
            }
            if(n == 0) a.push_back(i); 
        }

        return a;
    }
};