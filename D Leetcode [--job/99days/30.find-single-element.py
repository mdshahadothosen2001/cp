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
# Input: nums = [2,2,1]
# Output: 1

# Example 2:
# Input: nums = [4,1,2,1,2]
# Output: 4

# Example 3:
# Input: nums = [1]
# Output: 1
