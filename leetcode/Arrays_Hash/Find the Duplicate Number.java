class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer, Integer> count = new HashMap<>();

        for (int num : nums){
            count.put(num, count.getOrDefault(num, 0) + 1);

            if (count.get(num) == 2){
                return num;
            }
        }
        return -1;
    }
}