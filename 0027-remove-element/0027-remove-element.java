class Solution {
    public int removeElement(int[] nums, int val) {
        Stack<Integer> s = new Stack<>();
        int j=0;
        for(int i = 0 ; i < nums.length ; i++) {
            if(nums[i]!=val) {
                s.push(nums[i]);
                j++;
            }

        }
        for(int i=0 ; i<s.size(); i ++ ) {
            nums[i]=s.get(i);
        }
        return (j);
    }
}