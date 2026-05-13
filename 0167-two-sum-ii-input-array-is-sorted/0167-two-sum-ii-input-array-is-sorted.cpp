class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> b;
        int i = 0 ;
        int j = numbers.size() - 1;
        while(i <= j) {
            int sum = numbers[i] + numbers[j];
            if(sum == target) {
                b.push_back(i+1);
                b.push_back(j+1);
                break;
            }
            else if(sum < target) i ++;
            else j --;
        }
        return b;
    }
};