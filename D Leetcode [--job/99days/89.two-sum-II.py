# 167. Two Sum II - Input Array Is Sorted
from typing import List

# complexity O(n)
class Solution:
   def twoSum(self, numbers: List[int], target: int) -> List[int]:
        previous_values = {}
        for i in range(len(numbers)):
            if target - numbers[i] in previous_values:
                return [(previous_values[target - numbers[i]]) + 1, i + 1]
            else:
                previous_values[numbers[i]] = i

# complexity 0(n) but runtime is less
class Solution:
   def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left = 0
        right = len(numbers) -1

        while left < right:
            result = numbers[left] + numbers[right]

            if result == target:
                return [left + 1 , right + 1]

            elif result > target:
                right -= 1
            else:
                left += 1
        return
   
# Example 1:
# Input: numbers = [2,7,11,15], target = 9
# Output: [1,2]
# Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

# Example 2:
# Input: numbers = [2,3,4], target = 6
# Output: [1,3]
# Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].

# Example 3:
# Input: numbers = [-1,0], target = -1
# Output: [1,2]
# Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
