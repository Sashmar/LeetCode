class Solution {
public:
    int minimumDeletions(string s) {
        int b_count = 0;
        int del = 0 ;
        for(char c: s) {
            if(c == 'b') b_count++;

            else {
                del = min(del + 1, b_count);
            }
        }

        return del;
    }
};