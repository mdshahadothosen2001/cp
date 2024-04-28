from typing import List

class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        points.sort()
        widest = 0
        for i in range(len(points)-1):
            inside_width = points[i+1][0] - points[i][0]
            if widest < inside_width:
                widest = inside_width
        return widest


# Example 1:
# Input: points = [[8,7],[9,9],[7,4],[9,7]]
# Output: 1
# Explanation: Both the red and the blue area are optimal.

# Example 2:
# Input: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
# Output: 3
