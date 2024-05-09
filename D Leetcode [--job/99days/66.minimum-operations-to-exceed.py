from  typing import List

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        counted = 0
        for item in nums:
            if item < k:
                counted += 1
                
        return counted

checker = Solution()
nums = [2,10,11,1,3]
result = checker.minOperations(nums, 10)
print(result)



# Example 1:
# Input: nums = [2,11,10,1,3], k = 10
# Output: 3
# Explanation: After one operation, nums becomes equal to [2, 11, 10, 3].
# After two operations, nums becomes equal to [11, 10, 3].
# After three operations, nums becomes equal to [11, 10].
# At this stage, all the elements of nums are greater than or equal to 10 so we can stop.
# It can be shown that 3 is the minimum number of operations needed so that all elements of the array are greater than or equal to 10.

# Example 2:
# Input: nums = [1,1,2,4,9], k = 1
# Output: 0
# Explanation: All elements of the array are greater than or equal to 1 so we do not need to apply any operations on nums.
