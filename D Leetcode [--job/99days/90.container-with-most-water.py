# 11. container-with-most-water
from typing import List

# complexity O(n)
class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_water = 0
        left, right = 0, len(height) - 1
        while left < right:
            max_water = max(max_water, (min(height[left], height[right]) * (right - left)))
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return max_water

# complexity O(n) less run time
class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_water = 0
        left, right = 0, len(height) - 1
        max_height = max(height)
        while left < right:
            max_water = max(max_water, (min(height[left], height[right]) * (right - left)))
            if max_height * (right - left) <= max_water:
                break
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return max_water
    
obj = Solution()
height = [1,8,6,2,5,4,8,3,7]
result = obj.maxArea(height)
print('result', result)

# Example 1:
# Input: height = [1,8,6,2,5,4,8,3,7]
# Output: 49
# Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

# Example 2:
# Input: height = [1,1]
# Output: 1
