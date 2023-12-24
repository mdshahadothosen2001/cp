import collections
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        r_count = collections.Counter(ransomNote)
        m_count = collections.Counter(magazine)
        return all(r_count[i] <= m_count[i] for i in r_count)

"""

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true


Example 4:
Input: ransomNote = "", magazine = "bad"
Output: true

Example 5:
Input: ransomNote = "aa", magazine = ""
Output: false

Example 6:
Input: ransomNote = "ba", magazine = "abb"
Output: true
"""
