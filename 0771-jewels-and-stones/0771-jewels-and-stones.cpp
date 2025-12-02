class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char> a;
        int c =0;
        for(int i = 0 ; i< jewels.size() ; i++) {
            a.push_back(jewels[i]);
        }

        for(int i = 0 ; i< a.size() ; i++) {
            for(int j = 0 ; j< stones.size() ; j++) {
                if(a[i] == stones[j]) c++;
            }
        }

        return c;
    }
};