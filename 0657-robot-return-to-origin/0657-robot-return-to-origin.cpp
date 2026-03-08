class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, u = 0 ;
        for(int i = 0 ; i < moves.size() ; i ++) {
            if(moves[i] == 'R') r++;
            else if(moves[i] == 'L') r--;
            else if(moves[i] == 'U') u++;
            else u--;
        }
        if(r == 0 && u == 0) return true;
        else return false;
    }
};