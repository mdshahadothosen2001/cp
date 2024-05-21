from typing import List 

class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        
        occur = 0
        for item1 in nums1:
            if item1 in nums2:
                occur += 1
        ans.append(occur)
            
        occur = 0
        for item2 in nums2:
            if item2 in nums1:
                occur += 1
        ans.append(occur)
            
        return ans
        
checker = Solution()
nums1 = [4,3,2,3,1]
nums2 = [2,2,5,2,3,6]
result = checker.findIntersectionValues(nums1, nums2)
print(result)



# Example 1:
# Input: nums1 = [4,3,2,3,1], nums2 = [2,2,5,2,3,6]
# Output: [3,4]
# Explanation: We calculate the values as follows:
# - The elements at indices 1, 2, and 3 in nums1 occur at least once in nums2. So the first value is 3.
# - The elements at indices 0, 1, 3, and 4 in nums2 occur at least once in nums1. So the second value is 4.

# Example 2:
# Input: nums1 = [3,4,2,3], nums2 = [1,5]
# Output: [0,0]
# Explanation: There are no common elements between the two arrays, so the two values will be 0.
