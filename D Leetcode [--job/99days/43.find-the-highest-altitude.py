from typing import List

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        altitude = [0]
        for index, point in enumerate(gain):
            altitude += [altitude[index] + point]
        return max(altitude)

checker = Solution()
gain = [-5,1,5,0,-7]
result = checker.largestAltitude(gain)
print(result)

# Example 1:
# Input: gain = [-5,1,5,0,-7]
# Output: 1
# Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

# Example 2:
# Input: gain = [-4,-3,-2,-1,4,3,2]
# Output: 0
# Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
