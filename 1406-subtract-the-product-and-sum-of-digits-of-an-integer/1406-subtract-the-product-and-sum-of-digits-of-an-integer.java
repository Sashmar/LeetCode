class Solution {
    public int subtractProductAndSum(int n) {
        int sum =0;
        int prod = 1;
        while (n > 0){
            int t= n%10;
            sum+=t;
            prod*=t;
            n/=10;
        }
        return prod - sum;
    }
}