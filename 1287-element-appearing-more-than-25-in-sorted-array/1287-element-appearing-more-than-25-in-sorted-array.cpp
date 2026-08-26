class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int max = 0;
        int m = -1;
        int count = 1;
        for(int i = 1 ; i < arr.size() ; i ++) {
            if(arr[i] == arr[i - 1]) {
                count ++;
            }

            else{
                if(max < count) {
                    m = arr[i - 1];
                    max = count;
                }
                count = 1;
            }
        }

        if(max < count) {
            m = arr[arr.size() - 1];
        }

        return m;
    }
};