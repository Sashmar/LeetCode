class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> s;
        for(int i = 0 ; i < operations.size() ; i ++) {
            if(operations[i] == "+") {
                int a = s.top();
                s.pop();
                int b = s.top();
                int c = a + b;
                s.push(a);
                s.push(c);
            }
            else if(operations[i] == "C") s.pop();
            else if(operations[i] == "D") s.push(s.top() * 2);
            else {
                s.push(stoi(operations[i]));
            }
        }

        while(!s.empty()) {
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};