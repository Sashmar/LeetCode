class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int a = true;
        int count5 = 0;
        int count10 = 0;
        int i = 0;
        while(a && i < bills.size()) {
            if(bills[i]== 5) count5 ++;
            else if(bills[i] == 10) {
                count10++;
                count5--;
                if(count5 < 0 ) {
                    a = false;
                    return a;
                }
            }
            else {
                if(count5 > 0 && count10 > 0) {
                    count5--;
                    count10--;
                }
                else if(count5 >= 3){
                    count5-=3;
                }
                else {
                    a=false;
                    return a;
                }
            }
            i++;
        }
        return a;
    }
};