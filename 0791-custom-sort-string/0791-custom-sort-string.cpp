class Solution {
public:
    string customSortString(string order, string s) {
        string g = "";
        unordered_map<char, int> a;
        for(int i = 0 ; i < s.size() ; i ++) a[s[i]] ++;

        for(int i = 0 ; i < order.size() ; i ++) {
            auto it = a.find(order[i]);

            int b = 0;

            if(it != a.end()) b = it -> second;
            else continue;
            for(int j = 0 ; j < b ; j ++) g += order[i];
        }

        for(int i = 0 ; i < s.size() ; i ++) {
            if(!order.contains(s[i])) g += s[i];
        }

        return g;
    }
};