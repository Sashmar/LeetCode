class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string a : tokens) {
            if (a == "+" || a == "-" || a == "*" || a == "/") {
                int b = s.top(); s.pop();
                int c = s.top(); s.pop();
                if (a == "+") s.push(c + b);
                else if (a == "-") s.push(c - b);
                else if (a == "*") s.push(c * b);
                else if (a == "/") s.push(c / b);
            }
            else s.push(stoi(a));
        } 

        return s.top();

    }
};