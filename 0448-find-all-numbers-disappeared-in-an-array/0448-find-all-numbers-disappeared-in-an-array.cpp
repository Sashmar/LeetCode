class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> a;
        unordered_map<int,int> freq;
        for(int i : nums) freq[i]++;
        for(int i = 1; i <=nums.size() ; i++){
            if(freq[i] == 0) a.push_back(i);
        }

    
        return a; 

    }
};