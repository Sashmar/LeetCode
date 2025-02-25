class Solution {
    public int removeDuplicates(int[] nums) {
        HashSet<Integer> h= new HashSet<>();
        for(int i=0;i < nums.length; i++) {
            h.add(nums[i]);
        }
        int j=h.size();
        int b=0;
        for(int i : h) {
            nums[b]=i;
            b++;
        }
        Arrays.sort(nums, 0, h.size());
        return (j);
    }
}