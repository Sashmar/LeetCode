class Solution {
public:
    int calculate(string s) {
        stack<string> st;

        int i = 0;
        int d = 0;
        int m = 0;


        while(i < s.size()) {
            if(s[i] == ' ') {
                i ++;
                continue;
            }
            if(isdigit(s[i])) {
                int num = 0;
                while(i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i ++;
                }

                i --;

                if(d == 1) {
                int a = stoi(st.top());
                st.pop();
                int b = num;
                a = a / b;
                d = 0;
                st.push(to_string(a));
                }

                else if(m == 1) {
                int a = stoi(st.top());
                st.pop();
                int b = num;
                a = a * b;
                m = 0;
                st.push(to_string(a));
                }
                else st.push(to_string(num));
            }
            

            

            else if(s[i] == '/') d ++;
            else if(s[i] == '*') m ++;

            else st.push(string(1, s[i]));

            i ++;
        }

        vector<string> vecc;

        while(!st.empty()) {
            vecc.push_back(st.top());
            st.pop();
        } 

        int sum = 0;
        int g = vecc.size() - 1;
        if(vecc[g] == "-") {
            sum = sum - stoi(vecc[g - 1]);
            g -= 2;
        }

        else {
            sum += stoi(vecc[g]);
            g --;
        }
        int sub = 0;
        int add = 0;
        for(int i = g ; i >= 0 ; i --) {
            if(vecc[i] == "+") add ++;
            else if(vecc[i] == "-") sub ++;
            
            else {
                if(sub == 1) {
                    sum -= stoi(vecc[i]);
                    sub = 0;
                }
                else if(add == 1) {
                    sum += stoi(vecc[i]);
                    add = 0;
                }
            }

        }


        return sum;
    }
};