from typing import List


class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        word1_concatenated = ""
        word2_concatenated = ""

        for item in word1:
            word1_concatenated += item

        for item in word2:
            word2_concatenated += item
        
        return word1_concatenated == word2_concatenated



# Example 1:
# Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
# Output: true
# Explanation:
# word1 represents string "ab" + "c" -> "abc"
# word2 represents string "a" + "bc" -> "abc"
# The strings are the same, so return true.

# Example 2:
# Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
# Output: false

# Example 3:
# Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
# Output: true
