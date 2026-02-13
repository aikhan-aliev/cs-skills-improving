class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        count = [-1] * (len(nums) + 1)
        for i in range(len(nums)):
            count[nums[i]] = nums[i]
        for i in range(len(count)):
            if (count[i] == -1):
                return i
        return n