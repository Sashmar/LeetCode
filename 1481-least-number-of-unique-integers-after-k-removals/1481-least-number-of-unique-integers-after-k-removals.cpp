class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> map;
        for(int i = 0 ; i < arr.size() ; i ++) {
            map[arr[i]] ++;
        }

        if(k == 0) return map.size();

        vector<pair<int, int>> vec(map.begin(), map.end());

        sort(vec.begin(), vec.end(), [](const pair<int, int> &pair1, const pair<int, int> &pair2){
            return pair1.second < pair2.second; 
        });
        int i = 0;

        while(k > 0 && i < vec.size()) {
            if(k >= vec[i].second) {
                k -= vec[i].second;
                i ++;
            }
            else {
                vec[i].second -= k;
                k = 0;
            }
        }

        return vec.size() - i;
    }
};