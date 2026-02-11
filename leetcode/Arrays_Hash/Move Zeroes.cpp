class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            if (nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[left];
                nums[left] = temp;
                left++;
            }
        }
    }
};