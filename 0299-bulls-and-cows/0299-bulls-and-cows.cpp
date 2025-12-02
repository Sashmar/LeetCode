class Solution {
public:
    string getHint(string secret, string guess) {
        int b = 0;
        int c = 0;
        int i = 0;
        while(i < secret.size()) {
            if(secret[i] == guess[i]) {
                b++;
                secret.erase(i, 1);
                guess.erase(i, 1);
            }
            else i++;
        }
        i=0;
        while(i < secret.size()) {
            int pos = guess.find(secret[i]);
            if (pos != string :: npos) {
                guess.erase(pos, 1);
                c++;
            }
            i++;
        }

        return to_string(b) + "A" + to_string(c) + "B";
    }
};