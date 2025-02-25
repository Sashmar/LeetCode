class Solution {
    public int removeDuplicates(int[] nums) {
        TreeSet<Integer> t = new TreeSet<>();
        for(int i = 0 ; i < nums.length ; i ++) {
            t.add(nums[i]);
        }

        int b = 0;
        for(int i : t) {
            nums[b]=i;
            b++;
        }

        return t.size();
    }
}