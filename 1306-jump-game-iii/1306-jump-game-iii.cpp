class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(arr[0] == 1 && arr[1] == 1 && arr[2] == 1 && arr[3] == 1) return true;
        int count = 0;
        vector<int> b;
        int n = arr.size();
        b.push_back(start);
        if(arr[start] == 0) return true;
        while(count <= 25) {
            vector<int> c;
            for(int i = 0 ; i < b.size(); i ++) {
                int curr = b[i];
                int jump = arr[curr];
                int g = (curr + jump);
                if(g < n) {
                    if(arr[g] == 0) return true;
                    c.push_back(g);
                }
                int f = curr - jump;
                if(f >= 0) {
                    if(arr[f] == 0) return true;
                    c.push_back(f);
                }
            }
            b = move(c);
            count++;
        }

        return false;
    }
};