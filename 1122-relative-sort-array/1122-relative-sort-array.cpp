class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> a;

        for(int i = 0 ; i < arr2.size() ; i ++) {
            for(int j = 0 ; j < arr1.size() ;) {
                if(arr2[i] == arr1[j]) {
                    a.push_back(arr1[j]);
                    arr1.erase(arr1.begin() + j);
                    continue;
                }
                else j++;
            }
        }

        sort(arr1.begin(), arr1.end());
        for(int i = 0 ; i < arr1.size() ; i ++) a.push_back(arr1[i]);

        return a;
    }
};