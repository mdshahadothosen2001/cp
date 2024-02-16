from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        remainder = 0
        append = 0
        if digits[-1]==9:
            remainder = 1
            append = 1
            digits[-1] = 0
        else:
            digits[-1] += 1
        
        for index in range(len(digits)-2, -1, -1):
            if digits[index]==9 and remainder==1:
                remainder = 1
                append = 1
                digits[index] = 0
            elif remainder==1:
                digits[index] += 1
                remainder = 0
                append = 0
            elif append==1:
                digits.insert(index,1)
            
        if append==1:
            digits.insert(0, 1)

        return digits

# digits = [1,9,9]
# checker = Solution()
# result = checker.plusOne(digits)
# print(result)

# digits = [9,9]
# checker = Solution()
# result = checker.plusOne(digits)
# print(result)


# Example 1:
# Input: digits = [1,2,3]
# Output: [1,2,4]
# Explanation: The array represents the integer 123.
# Incrementing by one gives 123 + 1 = 124.
# Thus, the result should be [1,2,4].

# Example 2:
# Input: digits = [4,3,2,1]
# Output: [4,3,2,2]
# Explanation: The array represents the integer 4321.
# Incrementing by one gives 4321 + 1 = 4322.
# Thus, the result should be [4,3,2,2].

# Example 3:
# Input: digits = [9]
# Output: [1,0]
# Explanation: The array represents the integer 9.
# Incrementing by one gives 9 + 1 = 10.
# Thus, the result should be [1,0].
