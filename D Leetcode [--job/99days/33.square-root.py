class Solution:
    def mySqrt(self, x: int) -> int:
        square_power =int(x**0.5)
        return square_power

# x = 8
# checker = Solution()
# result = checker.mySqrt(x)
# print(result)

# Example 1:

# Input: x = 4
# Output: 2
# Explanation: The square root of 4 is 2, so we return 2.
# Example 2:

# Input: x = 8
# Output: 2
# Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
