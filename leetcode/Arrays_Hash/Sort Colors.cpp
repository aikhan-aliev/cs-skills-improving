class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int end = nums.size() - 1;
        while (mid <= end){
            if (nums[mid] == 0){
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                mid ++;
                low ++;
            }
            else if (nums[mid] == 1){
                mid ++;
            }
            else {
                int temp = nums[end];
                nums[end] = nums[mid];
                nums[mid] = temp;
                end --;
            }
        }
    }
};