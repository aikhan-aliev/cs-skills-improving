class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) count[num]++;
        
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto pair : count){
            int number = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(number);
        }
        vector<int> res;

        for (int i = buckets.size() - 1; i >= 0 && res.size() < k; i--){
            for (int num : buckets[i]){
                res.push_back(num);
                if (res.size() >= k) return res;
            }
        }
        return res;
        
    }
};