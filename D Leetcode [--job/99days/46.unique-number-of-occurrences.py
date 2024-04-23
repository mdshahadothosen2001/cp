from collections import Counter
from typing import List

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        counted = Counter(arr)
        len_of_element = len(counted)
        occurrence = set(counted.values())
        len_of_occur = len(occurrence)
        print(len_of_element,len_of_occur, occurrence)
        if len_of_element == len_of_occur:
            return True
        return False
checker = Solution()
arr = [1,1,1,1,2,2,2,3,3]
arr = [1,2]
result = checker.uniqueOccurrences(arr)
print(result)

# Example 1:
# Input: arr = [1,2,2,1,1,3]
# Output: true
# Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

# Example 2:
# Input: arr = [1,2]
# Output: false

# Example 3:
# Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
# Output: true
