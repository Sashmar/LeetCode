class Solution {
    public int sumBase(int n, int k) {
        int a = 0, sum =0 ;
        while (n >0 ) {
            a = n % k;
            sum += a;
            n/=k;
        }
        return sum;
    }
}