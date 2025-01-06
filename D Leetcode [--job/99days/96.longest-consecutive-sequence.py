# problem: 128. Longest Consecutive Sequence

from typing import List


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        num_set = set(nums)
        longest = 0

        for num in num_set:
            if num - 1 not in num_set:
                current_num = num
                current = 1

                while current_num + 1 in num_set:
                    current_num += 1
                    current += 1

                longest = max(longest, current)

        return longest


obj = Solution()
nums = [100,4,200,1,3,2]
result = obj.longestConsecutive(nums)
print(result)

# Example 1:

# Input: nums = [100,4,200,1,3,2]
# Output: 4
# Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
# Example 2:

# Input: nums = [0,3,7,2,5,8,4,6,0,1]
# Output: 9