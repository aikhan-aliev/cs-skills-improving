class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = dict()
        n = len(nums) / 2
        for num in nums:
            count[num] = count.get(num, 0) + 1
            if count[num] > n:
                return num
        return 0