class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;

        string a = "inc";

        if(arr[0] > arr[1]) return false;

        for(int i = 0 ; i < arr.size() - 1 ; i ++) {
            if(arr[i] < arr[i + 1] && a == "dec") return false;
            else if(arr[i] > arr[i + 1]) a = "dec";
            else if(arr[i] == arr[i + 1]) return false;
        }

        if(a == "inc") return false;

        return true;
    }
};