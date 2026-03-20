class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = ans = 0
        count = set()

        for i in range(len(s)):
            while s[i] in count:
                count.remove(s[left])
                left += 1
            count.add(s[i])

            ans = max(ans, i - left + 1)

        return ans    
