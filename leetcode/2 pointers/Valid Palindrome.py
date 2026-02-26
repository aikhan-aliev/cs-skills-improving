class Solution:
    def isPalindrome(self, s: str) -> bool:
        new = ""
        for char in s:
            if (char.isalnum()):
                new += char.lower()

        i = 0
        j = len(new) - 1

        while (i < j):
            if (new[i] != new[j]):
                return False
            i += 1
            j -= 1
        return True

        # new = ""
        # for char in s:
        #     if  65 <= ord(char) <= 90 or 97 <= ord(char) <= 122 or 48 <= ord(char) <= 57:
        #         new += char.lower()
        # if (new == new[::-1]):
        #     return True
        # else:
        #     return False
