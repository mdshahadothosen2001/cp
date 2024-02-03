from typing import List
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        for i,num in enumerate(nums):
            if num not in nums[:i]+nums[i+1:]:
                return num
        return

# nums = [1,2,3,4,3,4,3,2,5]
# checker = Solution()
# result = checker.singleNumber(nums)
# print("single number ", result)

# Example 1:
# Input: nums = [2,2,3,2]
# Output: 3

# Example 2:
# Input: nums = [0,1,0,1,0,1,99]
# Output: 99
