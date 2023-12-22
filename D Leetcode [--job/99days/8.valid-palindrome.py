class Solution:
    def isPalindrome(self, s: str) -> bool:
        s_only_alphabet = [w.lower() for w in s if w.isalpha() or w.isalnum()]
        s_reversed = list(reversed(s_only_alphabet))
        if s_only_alphabet == s_reversed:
            return True
        else:
            return False

"""
#expected output: True
s1 = "A man, a plan, a canal: Panama"

#expected output: False
s2 = "race a car"

#expected output: True
s3 = " "

test = Solution()
palindrome = test.isPalindrome(s1)
print(palindrome)

palindrome = test.isPalindrome(s3)
print(palindrome)

palindrome = test.isPalindrome(s3)
print(palindrome)

"""