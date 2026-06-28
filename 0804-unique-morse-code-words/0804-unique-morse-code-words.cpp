class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a;
        vector<string> b = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0 ; i < words.size() ; i++) {
            string c = words[i];
            int j = 0 ;
            string e = "";
            while(j < c.size()) {
                int d = c[j] - 'a';
                e += b[d];
                j ++;
            }
            auto it = find(a.begin(), a.end(), e);
            if(it == a.end()) a.push_back(e);  
        }

        return a.size();
    }
};