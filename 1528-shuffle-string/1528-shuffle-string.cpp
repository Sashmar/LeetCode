class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a = "";
        int i = 0 ;
        while(i < s.length()) {
            for(int j = 0 ; j < indices.size() ; j ++) {
                if(indices[j] == i) {
                    a += s[j];
                    break;
                }
            }
            i++;
        }
        return a;
    }
};