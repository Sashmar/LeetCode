class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> b = new HashSet<>();
        int a=0;
        while(true) {
            a+= (n % 10)*(n % 10);
            n/=10;
            if(n==0) {
                if(a==1) return true;
                if(b.contains(a)) return false;
                b.add(a);
                n=a;
                a=0;
            }
        }
    }
}