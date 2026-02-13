class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector <int> count(n + 1, -1);
        for (int i = 0; i < n; i++){
            count[nums[i]] = nums[i];
        }
        for (int i = 0; i < count.size(); i++){
            if (count[i] == -1) return i;
        }
        return n;

    }
};