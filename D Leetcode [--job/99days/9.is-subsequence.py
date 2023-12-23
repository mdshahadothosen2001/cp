class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        k = 0
        if len(s) == 0:
            return True
        for w in t:
            if s[k] == w:
                k += 1
            if k == len(s):
                return True
        return False

"""
test = Solution()
result = test.isSubsequence(s,t)
print(result)
"""

"""
Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false

Exmaple 3:
Input: s = "", t = "ahbgdce"
Output: True
"""
