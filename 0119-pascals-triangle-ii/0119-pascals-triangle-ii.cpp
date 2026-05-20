class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a;
        a.push_back(1);
        if(rowIndex == 0) return a;

        a.push_back(1);
        if(rowIndex == 1) return a;
        int ir = 1;
        while(ir < rowIndex) {
            vector<int> b;
            for(int i = 0 ; i <= a.size(); i ++) {
                if(i == 0) b.push_back(1);
                else if(i == a.size()) b.push_back(1);
                else {
                    b.push_back(a[i-1] + a[i]);
                }
            }
            ir++;
            a = move(b);
        }

        return a;
    }
};