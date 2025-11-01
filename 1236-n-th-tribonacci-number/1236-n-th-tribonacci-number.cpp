class Solution {
public:
    int tribonacci(int n) {
        int i =0;
        if(n==0) return 0;
        else if(n == 1 || n==2) return 1;
        else {
            int n3 = 0;
            int n0 = 0;
            int n1 = 1;
            int n2 = 1;
            while(i<n-2) {
                n3 = n0+n1+n2;
                n0=n1;
                n1=n2;
                n2= n3;
                i++;
            }
            return n3;
        }
        return -1;
    }
};