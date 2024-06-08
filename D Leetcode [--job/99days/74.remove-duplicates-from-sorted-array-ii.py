from  typing import List 

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) <=2:
            return len(nums)
        
        left, right = 0,0
        
        while right < len(nums):
            counted = 1 
            
            while right+1 < len(nums) and nums[right] == nums[right+1]:
                counted += 1 
                right += 1
                
            for i in range(min(2, counted)):
                nums[left] = nums[right]
                left += 1
                
            right += 1 
            
        return left

checker = Solution()
nums = [0,0,1,1,1,1,2,3,3]
result = checker.removeDuplicates(nums)
print(result)


# Example 1:
# Input: nums = [1,1,1,2,2,3]
# Output: 5, nums = [1,1,2,2,3,_]
# Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
# It does not matter what you leave beyond the returned k (hence they are underscores).

# Example 2:
# Input: nums = [0,0,1,1,1,1,2,3,3]
# Output: 7, nums = [0,0,1,1,2,3,3,_,_]
# Explanation: Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
# It does not matter what you leave beyond the returned k (hence they are underscores).
