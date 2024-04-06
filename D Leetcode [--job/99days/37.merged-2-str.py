class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        len1 = len(word1)
        len2 = len(word2)
        if len1 == 0 and len2 == 0:
            return word1
        minLen = self.minLen(len1, len2)
        new_str = ""
        for i in range(minLen):
            new_str += word1[i]
            new_str += word2[i]
        new_str += word1[minLen:]
        new_str += word2[minLen:]
        return new_str
        
    def minLen(sel, len1, len2):
        if len1<=len2:
            return len1
        else:
            return len2

checker = Solution()
word1 = "abc"
word2 = "pqr"
result = checker.mergeAlternately(word1, word2)
print(result)

# Example 1:
# Input: word1 = "abc", word2 = "pqr"
# Output: "apbqcr"
# Explanation: The merged string will be merged as so:
# word1:  a   b   c
# word2:    p   q   r
# merged: a p b q c r

# Example 2:
# Input: word1 = "ab", word2 = "pqrs"
# Output: "apbqrs"
# Explanation: Notice that as word2 is longer, "rs" is appended to the end.
# word1:  a   b 
# word2:    p   q   r   s
# merged: a p b q   r   s