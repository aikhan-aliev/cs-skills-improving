class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        count = dict()

        for num in nums:
            count[num] = count.get(num, 0) + 1
        
        for num,val in count.items():
            if (val == 1):
                return num
        return 0
