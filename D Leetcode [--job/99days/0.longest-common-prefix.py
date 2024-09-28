# O(nm) complexity
# here n is length of lowest word
# here m is length of words
from typing import List 
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        
        lowest_word = min(strs, key=len)
        prefix = ""
        for index, char in enumerate(lowest_word):
            for each_word in strs:
                if char != each_word[index]:
                    return prefix
            prefix += char
        
        return prefix
      
obj = Solution()
strs = ["flower","flow","flight"]
longest = obj.longestCommonPrefix(strs)
print(longest)


"""
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"


Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
"""
