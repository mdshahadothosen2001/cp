from  typing import List
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        length = len(nums)
        if k > length:
            return -1
        
        sum_of = 0
        max_of = 0
        
        for index in range(k):
            max_of += nums[index]
        
        sum_of = max_of
        for index in range(k, length):
            sum_of += nums[index] - nums[index-k]
            
            if sum_of > max_of:
                max_of = sum_of
                sum_of = max_of

        max_of /= k
        return max_of

checker = Solution()
nums = [1,12,-5,-6,50,3]
k = 4
result = checker.findMaxAverage(nums, k)
print(result)

# Example 1:
# Input: nums = [1,12,-5,-6,50,3], k = 4
# Output: 12.75000
# Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

# Example 2:
# Input: nums = [5], k = 1
# Output: 5.00000

# Example 3:
# Input: nums = [0,4,0,3,2], k = 1
# Output: 4.0
