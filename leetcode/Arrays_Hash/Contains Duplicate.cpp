class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int num : nums){
            if (map[num] >= 1) return true;
            else map[num]++;
        }
        return false;
    }
};