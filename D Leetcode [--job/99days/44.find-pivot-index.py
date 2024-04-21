from typing import List

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        len_of_nums = len(nums)
        for index in range(len_of_nums):
            
            if index == 0:
                leftmost = 0
            else:
                leftmost = sum(nums[:index])
            
            if index == len_of_nums - 1:
                rightmost = 0
            else:
                rightmost = sum(nums[index+1:])
            
            if leftmost == rightmost:
                return index
        return -1


checker = Solution()
nums = [1,7,3,6,5,6]
result = checker.pivotIndex(nums)
print(result)

# Example 1:
# Input: nums = [1,7,3,6,5,6]
# Output: 3
# Explanation:
# The pivot index is 3.
# Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
# Right sum = nums[4] + nums[5] = 5 + 6 = 11

# Example 2:
# Input: nums = [1,2,3]
# Output: -1
# Explanation:
# There is no index that satisfies the conditions in the problem statement.

# Example 3:
# Input: nums = [2,1,-1]
# Output: 0
# Explanation:
# The pivot index is 0.
# Left sum = 0 (no elements to the left of index 0)
# Right sum = nums[1] + nums[2] = 1 + -1 = 0
