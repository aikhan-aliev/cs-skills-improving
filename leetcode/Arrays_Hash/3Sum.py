class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = set()
        nums.sort()

        for i in range(len(nums)):
            j = i + 1
            k = len(nums) - 1
            while (j < k):
                summ = nums[i] + nums[j] + nums[k]
                if (summ == 0):
                    res.add((nums[i], nums[j], nums[k])) 
                    j += 1
                    k -= 1
                elif (summ > 0):
                    k -= 1
                else:
                    j += 1
        res = list(res)
        return res      