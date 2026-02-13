class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> count;

        for (int &num : nums){
            count[num]++;
        }
        for (auto num : count){
            if (num.second == 1) return num.first;
        }
        return 0;
    }
};