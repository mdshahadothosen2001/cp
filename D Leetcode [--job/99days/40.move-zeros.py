from  typing import List

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        length = len(nums)
        for outer in range(length):
            if nums[outer] == 0:
                for inner in range(outer,length):
                    if nums[inner] != 0:
                        print(nums[outer], " : ",nums[inner])
                        nums[outer], nums[inner] = nums[inner], nums[outer]
                        break

check = Solution()
nums = [0,1,0,3,12]
check.moveZeroes(nums)
print(nums)

# Example 1:
# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]

# Example 2:
# Input: nums = [0]
# Output: [0]
