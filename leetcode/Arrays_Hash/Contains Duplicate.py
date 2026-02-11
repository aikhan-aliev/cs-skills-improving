class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        m = {}

        for elem in nums:
            if elem not in m:
                m[elem] = 1
            else:
                m[elem] += 1
                if (m[elem] >= 2):
                    return True
        return False