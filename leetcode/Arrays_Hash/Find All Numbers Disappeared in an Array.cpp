class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> s(begin(nums), end(nums));
        vector<int> res (nums.size() - s.size());
        for (int i = 1, j = 0; i <= n; i++){
            if (!s.count(i)) res[j++] = i;
        }
        return res;
    }
};