class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> count;

        for (int &num : nums1) count[num]++;

        for (int &num : nums2){
            if (count.find(num) != count.end()){
                result.push_back(num);
                count.erase(num);
            }
        }
        return result;
    }
};