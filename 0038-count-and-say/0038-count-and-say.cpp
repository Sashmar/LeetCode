class Solution {
public:
    string countAndSay(int n) {
        string a = "";
        vector<int> b;
        int i = 1;
        b.push_back(1);
        if(n == 1) return "1";
        int k = 0;
        while(i < n) {
            vector<int> c;
            int j = 1;
            int g = b[k];
            for(k = 1 ; k < b.size() ; k ++) {
                if(b[k - 1] == b[k]) j++;
                else {
                    c.push_back(j);
                    c.push_back(b[k - 1]);
                    j = 1;
                }
            }
            c.push_back(j);
            c.push_back(b.back());
            i++;
            b= move(c);
        }
        for(int i = 0 ; i < b.size(); i ++) {
            a += to_string(b[i]);
        }

        return a;
    }
};