class Solution {
    public int majorityElement(int[] nums) {
        int a[] = new int[nums.length];
        for(int i = 0 ; i < nums.length; i++) {
            int b = nums[i];
            int count=0;
            for(int j = i; j < nums.length ; j++) {
                if(nums[j]==b) count++;
            }
            a[i]=count;
        }
        int max = a[0];
        int temp =0;
        int ind = 0;
        for(int i = 1 ; i < nums.length ; i++) {
            if(max<a[i]){
                temp = max;
                max = a[i];
                a[i]=temp;
                ind =i;
            }
        }
        return nums[ind];

    }
}
