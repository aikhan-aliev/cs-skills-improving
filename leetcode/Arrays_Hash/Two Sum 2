class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i = 0
        j = len(numbers) - 1
        while i < j:
            if (numbers[i] + numbers[j] == target):
                return [i + 1, j + 1]
            elif (numbers[i] + numbers[j] < target):
                i += 1
            else:
                j -= 1
# O(n) time
# O(1) space

        # result = list()
        # for i in range(len(numbers) - 1):
        #     if (target - numbers[i] in numbers[(i + 1):]):
        #         result.append(i)
        #         break
        # for i in range(result[0] + 1, len(numbers)):
        #     if (numbers[result[0]] + numbers[i] == target):
        #         return [result[0] + 1, i + 1]
                