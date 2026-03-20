class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        numbers = set()
        for i in range(len(nums)):
            if (i > k):
                numbers.remove(nums[i - k - 1])

            if (nums[i] in numbers):
                return True

            numbers.add(nums[i])
            
        return False