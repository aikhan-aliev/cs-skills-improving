class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        nums = nums.sort(nums.begin(), nums(end));
        set<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int summ = nums[i] + nums[j] + nums[k];

                if (summ == 0) {
                    res.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (summ > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
};