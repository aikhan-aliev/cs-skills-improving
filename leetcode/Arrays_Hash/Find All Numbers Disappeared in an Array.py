class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        new_ls = list(range(1, n + 1))
        st = set(nums)
        res = list()

        for i in range(len(new_ls)):
            if (new_ls[i] not in st):
                res.append(new_ls[i])
        return res
            