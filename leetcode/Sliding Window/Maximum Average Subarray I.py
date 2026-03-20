class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s = 0
        for i in range(k):
            s += nums[i]
        ans = s
        j = 0
        for i in range(k, len(nums)):
            s += nums[i]
            s -= nums[j]
            j += 1
            ans = max(ans, s)
        return ans / k