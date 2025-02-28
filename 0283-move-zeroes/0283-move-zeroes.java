class Solution {
    public int[] moveZeroes(int[] nums) {
        int[] b = new int[nums.length];
        int a=0;
        for(int i= 0 ; i < nums.length; i ++) {
            if(nums[i]!=0) {
                b[a]=nums[i];
                a++;
            }
        }

        for(int i=0;i<nums.length ; i++) {
            nums[i]=b[i];
        }

        return nums;
    }
}