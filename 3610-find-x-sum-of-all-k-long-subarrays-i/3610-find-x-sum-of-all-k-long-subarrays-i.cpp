class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> answer;
        int i = 0;
        int b = 0;
        while(i + k <= nums.size()) {
            int a = i;
            unordered_map<int,int> freq;
            for(int j = a ; j < a+ k ; j ++) {
                freq[nums[j]]++;
            }
            vector<pair<int, int>> v(freq.begin(), freq.end());
            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.second == b.second) 
                    return a.first > b.first;   // when freq equal, larger number first
                return a.second > b.second;     // otherwise, higher freq first
            });
            int sum = 0;
            for(int b = 0 ; b < min(x, int(v.size())) ; b++){
                sum += v[b].first * v[b].second;
            }
            answer.push_back(sum);
            i++;
        }
        return answer;
    }
};