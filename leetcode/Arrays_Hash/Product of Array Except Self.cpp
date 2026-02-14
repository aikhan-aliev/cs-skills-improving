class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int suff = 1;
        int pre = 1;

        for (int i = 0; i < nums.size(); i++){
            res[i] = res[i] * pre;
            pre = pre * nums[i];
            res[nums.size() - 1 - i] *= suff;
            suff *= nums[nums.size() - 1 - i];
        }
        return res;
    }
};