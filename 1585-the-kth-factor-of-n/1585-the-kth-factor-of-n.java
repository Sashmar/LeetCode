class Solution {
    public int kthFactor(int n, int k) {
        int count  = 0 ;
        for (int i= 1 ; i<=n/2;i++){
            if(n%i==0) count++;

            if(count==k) return i;
        }
        count++;
        if(count==k) return n;
        else
        return -1;

    
    }
}