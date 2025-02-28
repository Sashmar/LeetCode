class Solution {
    public int addDigits(int num) {
        int sum=0;
        if ( num/10 ==0) {
            return num;
        }
        else{
            while (num/ 10!=0 ){
                sum+=num%10;
                num/=10;
                if(num/10==0){
                    sum+=num;
                    num=sum;
                    sum=0;
                }
            }
        }
        return num;
    }
}