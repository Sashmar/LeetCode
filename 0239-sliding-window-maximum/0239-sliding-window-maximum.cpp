class Solution {
public:

    int findMax(queue<int>& qu) {
        int m = INT_MIN;
        size_t original = qu.size();
        for(int i = 0; i < original ; i ++) {
            int p = qu.front();
            qu.pop();
            m = max(m, p);
            qu.push(p);
        }

        return m;
    }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty() || k == 0) return {};
        else if(k == 1) return nums;

        if(nums.size() < k) {
            queue<int> q;
            for(int num: nums) q.push(num);
            return {findMax(q)};

        }

        vector<int> a;
        multiset<int> s;
        for (int i = 0; i < k; i++) {
            s.insert(nums[i]);
        }

        a.push_back(*s.rbegin());

        for(int i = k ; i < nums.size() ; i ++) {
            int del = nums[i - k];
            auto it = s.find(del); 
            s.erase(it);
            s.insert(nums[i]);
            a.push_back(*s.rbegin());
        }

        return a;

    }
};