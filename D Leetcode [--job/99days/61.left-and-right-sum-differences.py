from typing import List

class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        leftsum = [0]
        sums = 0
        for i in range(len(nums)-1):
            leftsum += [ sums + nums[i]]
            sums += nums[i]
            
        rightsum = [0]
        sums = 0
        nums.reverse()
        for i in range(len(nums)-1):
            rightsum += [sums + nums[i]]
            sums += nums[i]

        rightsum.reverse()

        ans = []
        for i in range(len(nums)):
            ans += [abs(leftsum[i] - rightsum[i])]
        return ans
    


# Example 1:
# Input: nums = [10,4,8,3]
# Output: [15,1,11,22]
# Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
# The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].

# Example 2:
# Input: nums = [1]
# Output: [0]
# Explanation: The array leftSum is [0] and the array rightSum is [0].
# The array answer is [|0 - 0|] = [0].
