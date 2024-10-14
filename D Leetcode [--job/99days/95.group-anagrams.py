# 49. Group Anagrams
from typing import List

    
# complexity O(n)
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if not strs:
            return strs
        if len(strs) == 1:
            return [strs]
        anagrams = []
        read = set()
        index_set = {}
        index = 0
        for i in range(len(strs)):
            word = "".join(sorted(strs[i]))
            if word in read:
                
                place_index = index_set[word]
                anagrams[place_index] += [strs[i]]              
                
            else:
                read.add(word)
                index_set[word] = index
                index += 1
                anagrams.append([strs[i]])

        return anagrams

# complexity O(n) run time less
from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs):
        anagrams = defaultdict(list)
        
        for word in strs:
            sorted_str = ''.join(sorted(word))
            anagrams[sorted_str].append(word)
        
        return list(anagrams.values())
    
obj = Solution()
strs = ["eat","tea","tan","ate","nat","bat"]
result = obj.groupAnagrams(strs)
print(result)
                


# Example 1:
# Input: strs = ["eat","tea","tan","ate","nat","bat"]

# Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

# Explanation:

# There is no string in strs that can be rearranged to form "bat".
# The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
# The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

# Example 2:
# Input: strs = [""]

# Output: [[""]]


# Example 3:
# Input: strs = ["a"]

# Output: [["a"]]
