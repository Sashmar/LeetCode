class Solution {
public:

    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> map;
        for(int i = 0 ; i < knowledge.size() ; i ++) map[knowledge[i][0]] = knowledge[i][1];

        int b = 0;
        string check= "";
        string final = "";
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(') {
                b = 1;
            }
            else if(b == 1 && s[i] != ')') {
                check += s[i];
            }

            else if(b == 1 && s[i] == ')') {
                if(map.find(check) != map.end()) {
                    final += map[check];
                }
                else final += "?";
                check = "";
                b = 0;
            }

            else final += s[i];
        }

        return final;
    }
};