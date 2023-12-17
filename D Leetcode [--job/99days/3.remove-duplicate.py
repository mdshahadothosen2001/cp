from typing import List
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 0
        for num in nums:
          if k < 1 or num > nums[k - 1]:
            nums[k] = num
            k += 1
        return k

"""
[1,1,2]
#expected output 2

[0,0,1,1,1,2,2,3,3,4]
#expected output 5
"""