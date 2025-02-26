class Solution {
    public int findPeakElement(int[] nums) {
        int max =0;
        int m=0;
        int found = 0;
        if(nums.length==1){
            max=0;
        }
        else if(nums.length<=3) {
            m=nums[0];
            for(int i=1; i< nums.length; i ++) {
                if(m<nums[i]) {
                    m=nums[i];
                    max=i;
                }
            }
        }
        else{
            for(int i = 0 ; i < nums.length -2 ; i ++) {
                int left=nums[i];
                int mid = nums[i+1];
                int right=nums[i+2];
                if(mid>left&&mid>right) {
                    max=i+1;
                    found++;
                }
            }
            if(found==0) {
                m=nums[0];
                for(int i=1; i< nums.length; i ++) {
                    if(m<nums[i]) {
                        m=nums[i];
                        max=i;
                    }
                }
            }
        }
        return max;
    }
}