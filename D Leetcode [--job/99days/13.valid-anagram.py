class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_sorted = sorted(s)
        t_sorted = sorted(t)
        print(s_sorted)
        print(t_sorted)
        if s_sorted==t_sorted:
            return True
        return False

"""
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Example 3:
Input: s = "ac", t = "bb"
Output: false
"""
