class Solution:
    def isValid(self, s: str) -> bool:
        count = list()
        opens = ["(", "{", "["]
        close = [")", "}", "]"]
        if (len(s) % 2 != 0):
            return False

        for char in s:
            if char in opens:
                count.append(char)
            else:
                if not count:
                    return False
                pop_value = count.pop()
                index = opens.index(pop_value)
                if (close[index] != char):
                    return False
        if len(count) > 0:
            return False
        return True