#solution 1
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1 = (set(nums1))
        nums2 = (set(nums2))

        if len(nums1) > len(nums2):
            res = nums1 - (nums1 - nums2) 
        else:
            res = nums2 - (nums2 - nums1)
            
        return list(res)
    
        ###Solution 2
        # count = {}
        # res = []

        # for num in nums1:
        #     count[num] = count.get(num, 0) + 1
        
        # for num in nums2:
        #     if num in count:
        #         res.append(num)
        #         del count[num]
        # return res     