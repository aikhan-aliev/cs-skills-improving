class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = {}
        n = len(nums)

        for i in range(n):
            sub = target - nums[i]
            if sub in m:
                return [m[sub], i]
            m[nums[i]] = i
        return []