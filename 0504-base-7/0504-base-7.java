class Solution {
    public String convertToBase7(int num) {
        int a =0;
        int b=1;
        int flag=0;
        if(num<0) {
            num = -num;
            flag=1;
        }
        while(num>0) {
            a+=(num % 7)*b;
            b*=10;
            num/=7;
        }

        if(flag==1) {
            a=-a;
            return String.valueOf(a);
        }
        else{
            return Integer.toString(a);
        }

    }
}