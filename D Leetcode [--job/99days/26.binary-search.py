from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        index = 0
        for num in nums:
            if num >= target:
                return index
            index += 1
        return index

checker = Solution()
result = checker.searchInsert([1,3,5], 5)

print(result)


# Example 1:
# Input: nums = [1,3,5,6], target = 5
# Output: 2

# Example 2:
# Input: nums = [1,3,5,6], target = 2
# Output: 1

# Example 3:
# Input: nums = [1,3,5,6], target = 7
# Output: 4
