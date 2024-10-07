# 209. minimum-size-subarray-sum
from typing import List

# complexity O(nm) more memory required
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        sub_arr = []
        r = -1
        for i in range(n):
            sub_arr_sum = nums[i]
            sub_arr += [[nums[i]]]
            r += 1
            
            for j in range(i + 1, n):
                if sub_arr_sum >= target:
                    break
                sub_arr[r].append(nums[j])
                sub_arr_sum += nums[j]
                if sub_arr_sum >= target:
                    break
                
        sub_min = 0
        for item in sub_arr:
            if sub_min == 0 and sum(item) >= target:
                sub_min = len(item)
            if len(item) < sub_min and sum(item) >= target:
                sub_min = len(item)
        
        return sub_min

# complexity O(nm)
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        result = float('inf')
        sub_arr_sum = 0
        start = 0

        for i in range(n):
            sub_arr_sum += nums[i]

            while sub_arr_sum >= target:
                result = min(result, i - start + 1)
                sub_arr_sum -= nums[start]
                start += 1

        return 0 if result == float('inf') else result

obj = Solution()
# expected 2
# nums = [2,16,14,15] target = 20
# expected 5
# nums = [1,2,3,4,5] target = 15
# expected 8
# nums = [12,28,83,4,25,26,25,2,25,25,25,12] target = 213
nums = [12,28,83,4,25,26,25,2,25,25,25,12]
result = obj.minSubArrayLen(213, nums)
print('...',result)

# Example 1:
# Input: target = 7, nums = [2,3,1,2,4,3]
# Output: 2
# Explanation: The subarray [4,3] has the minimal length under the problem constraint.

# Example 2:
# Input: target = 4, nums = [1,4,4]
# Output: 1

# Example 3:
# Input: target = 11, nums = [1,1,1,1,1,1,1,1]
# Output: 0
