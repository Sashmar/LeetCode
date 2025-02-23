import java.math.BigInteger;
class Solution {
    public int[] plusOne(int[] digits) {
        StringBuilder s = new StringBuilder();
        for(int  i = 0 ; i < digits.length ; i++) {
            s.append(digits[i]);
        }
        String p = s.toString();
        BigInteger a = new BigInteger(p);
        a=a.add(BigInteger.ONE);
        p=a.toString();
        int[] g = new int[p.length()];
        for(int  i= 0 ; i < p.length() ; i ++) {
            g[i]=p.charAt(i)-'0';
        }
        return g;
    }
}