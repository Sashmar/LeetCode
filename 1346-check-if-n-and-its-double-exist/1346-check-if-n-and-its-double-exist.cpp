class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0 ; i < arr.size() ; i ++) {
            int a = arr[i];
            auto b = find(arr.begin(), arr.end(), a * 2);
            if(b != arr.end()) {
                int ind = distance(arr.begin(), b);
                if(i != ind) return true;
            }
        }

        return false;
    }
};