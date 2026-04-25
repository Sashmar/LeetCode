class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count  = 0;
        int t = 0;
        for(int i = 0 ; i < moves.size(); i ++) {
            if(moves[i] == 'L') t --;
            else if(moves[i] == 'R') t++;
            else count++;
        }

        if(t > 0) t += count;
        else t -= count;
        return abs(t);
    }
};