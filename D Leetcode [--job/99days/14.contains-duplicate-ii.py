from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        each_indices = {}
        for i,num in enumerate(nums):
            if num in each_indices and abs(i - each_indices[num]) <=k:
                    return True
            each_indices[num] = i 
        return False

"""

Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
"""
