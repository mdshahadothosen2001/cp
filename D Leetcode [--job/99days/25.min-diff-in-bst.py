from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        self.min_diff = float('inf')
        self.previous_val = None
        self.InOrderTraversal(root)
        return self.min_diff if self.min_diff != float('inf') else 0

    def InOrderTraversal(self, root):
        if root:
            self.InOrderTraversal(root.left)

            if self.previous_val is not None:
                self.min_diff = min(self.min_diff, abs(self.previous_val - root.val))
            
            self.previous_val = root.val

            self.InOrderTraversal(root.right)

# Example 1:
# Input: root = [4,2,6,1,3]
# Output: 1

# Example 2:
# Input: root = [1,0,48,null,null,12,49]
# Output: 1
