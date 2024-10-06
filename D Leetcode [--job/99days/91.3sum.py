#15. 3sum
from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        triplets = []
        nums.sort()

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            
            j = i + 1
            k = len(nums) - 1

            while j < k:
                total = nums[i] + nums[j] + nums[k]

                if total > 0:
                    k -= 1
                elif total < 0:
                    j += 1
                else:
                    triplets.append([nums[i], nums[j], nums[k]])
                    j += 1

                    while nums[j] == nums[j-1] and j < k:
                        j += 1
        
        return triplets

# complexity O(nm)
# less run time required
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        val_with_index={}
        triplets=[]
        nums.sort()
        for i in range(len(nums)):
            val_with_index[nums[i]]=i
        for i in range(len(nums)-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            
            c = -nums[i]
            for j in range(i+1, len(nums)-1):
                if j > i+1 and nums[j] == nums[j-1]:
                    continue
                target = c - nums[j]
                if target < nums[j]:
                    break
                if target in val_with_index:
                    k = val_with_index[target]
                    if k > j:
                        triplets.append([nums[i], nums[j], nums[k]])
        return triplets
    
obj = Solution()
nums = [-1,0,1,2,-1,-4]
result = obj.threeSum(nums)
print(result)
        
# Example 1:
# Input: nums = [-1,0,1,2,-1,-4]
# Output: [[-1,-1,2],[-1,0,1]]
# Explanation: 
# nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
# nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
# nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
# The distinct triplets are [-1,0,1] and [-1,-1,2].
# Notice that the order of the output and the order of the triplets does not matter.

# Example 2:
# Input: nums = [0,1,1]
# Output: []
# Explanation: The only possible triplet does not sum up to 0.

# Example 3:
# Input: nums = [0,0,0]
# Output: [[0,0,0]]
# Explanation: The only possible triplet sums up to 0.
