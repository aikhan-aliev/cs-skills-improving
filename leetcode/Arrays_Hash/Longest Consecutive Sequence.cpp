class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> hash(nums.begin(), nums.end());

        for (int num : hash){
            if (hash.find(num - 1) == hash.end()){
                int streak = 1;
                int current = num;

                while (hash.find(current + 1) != hash.end()){
                    streak ++;
                    current ++;
                }
                longest = max(longest, streak);
            }
            
        }
        return longest;

    }
};