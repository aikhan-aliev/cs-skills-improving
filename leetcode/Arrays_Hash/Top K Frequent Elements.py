import heapq
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Step 1: Count frequency
        count = Counter(nums)
        print(count)
        
        # Step 2: Create buckets
        # Max possible frequency = len(nums)
        buckets = [[] for _ in range(len(nums) + 1)]
        print(buckets)
        
        for num, freq in count.items():
            buckets[freq].append(num)
        print(buckets)
        
        # Step 3: Collect top k frequent
        result = []
        for freq in range(len(buckets) - 1, 0, -1):
            for num in buckets[freq]:
                result.append(num)
                if len(result) == k:
                    return result