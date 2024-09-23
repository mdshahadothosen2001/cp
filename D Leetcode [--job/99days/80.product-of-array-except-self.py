from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        answer = [0] * (len(nums))

        prefix = 1 
        for i in range(len(nums)):
            answer[i] = prefix
            prefix *= nums[i]
        
        suffix = 1 
        for i in range(len(nums) - 1, -1, -1):
            answer[i] *= suffix
            suffix *= nums[i]
        
        return answer

# nums = [1,2,3,4]
# obj = Solution()
# answer = obj.productExceptSelf(nums)
# print(answer)

# Example 1:
# Input: nums = [1,2,3,4]
# Output: [24,12,8,6]

# Example 2:
# Input: nums = [-1,1,0,-3,3]
# Output: [0,0,9,0,0]
