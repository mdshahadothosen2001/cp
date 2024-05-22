from typing import List 

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        first_max = max(nums)
        nums.remove(first_max)
        second_max = max(nums)
        product = (first_max - 1) * (second_max-1)
        return product

checker = Solution()
nums = [2,3,1,5,4]
nums = [1,5,4,5]
result = checker.maxProduct(nums)
print(result)



# Example 1:
# Input: nums = [3,4,5,2]
# Output: 12 
# Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 

# Example 2:
# Input: nums = [1,5,4,5]
# Output: 16
# Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.

# Example 3:
# Input: nums = [3,7]
# Output: 12
