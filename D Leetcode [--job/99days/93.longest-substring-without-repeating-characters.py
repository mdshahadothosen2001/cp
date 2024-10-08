# 3. longest-substring-without-repeating-characters

# complexity O(nm)
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        for i in range(len(s)):
            sub_s = s[i]
            for j in range(i+1, len(s)):
                if s[j] in sub_s:
                    break
                sub_s += s[j]
            longest = max(longest, len(sub_s)) 
        return longest

# complexity O(n)
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        sub_len = 0
        char_indices = {}
        for i, c in enumerate(s):
            if c in char_indices:
                sub_len = min(i - char_indices[c], sub_len + 1)
            else:
                sub_len += 1
            longest = max(longest, sub_len)
            char_indices[c] = i
        return longest
      
obj = Solution()
s = "abcabcbb"
result = obj.lengthOfLongestSubstring(s)
print(result)


# Example 1:
# Input: s = "abcabcbb"
# Output: 3
# Explanation: The answer is "abc", with the length of 3.

# Example 2:
# Input: s = "bbbbb"
# Output: 1
# Explanation: The answer is "b", with the length of 1.

# Example 3:
# Input: s = "pwwkew"
# Output: 3
# Explanation: The answer is "wke", with the length of 3.
# Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
