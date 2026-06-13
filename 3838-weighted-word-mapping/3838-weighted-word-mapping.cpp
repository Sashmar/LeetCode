class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string a = "";
        for(int i = 0 ; i < words.size() ; i ++) {
            string b = words[i];
            int sum = 0;
            for(int j = 0 ; j < b.size() ; j ++) {
                int v = b[j] - 'a';
                sum += weights[v];
            }
            sum = sum % 26;
            a += ('a' + 25 - sum);

        }

        return a;
    }
};