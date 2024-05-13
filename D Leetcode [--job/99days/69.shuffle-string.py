from  typing import List 

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        shuffle = ""
        pairs = {}
        i = 0
        for index in indices:
            pairs[index] = s[i]
            i += 1
            
        indices.sort()
        for i in indices:
            shuffle += pairs.get(i)
        return shuffle


checker = Solution()
s = "codeleet"
indeces = [4,5,6,7,0,2,1,3]
shuffle = checker.restoreString(s, indeces)
print(shuffle)



# Example 1:
# Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
# Output: "leetcode"
# Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.

# Example 2:
# Input: s = "abc", indices = [0,1,2]
# Output: "abc"
# Explanation: After shuffling, each character remains in its position.
