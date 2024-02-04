class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:  
            return False
        origin = x
        reverseNumber = 0
        while (x != 0):
            lastDigit = int(x % 10)
            reverseNumber = reverseNumber * 10 + lastDigit
            x = x // 10
            
        return True if (origin == reverseNumber) else False
        


# checker = Solution()
# result = checker.isPalindrome(121)
# print(result)

# Example 1:

# Input: x = 121
# Output: true
# Explanation: 121 reads as 121 from left to right and from right to left.
# Example 2:

# Input: x = -121
# Output: false
# Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
# Example 3:

# Input: x = 10
# Output: false
# Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
