from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        if not root.left and not root.right:
            return True
        if not root.left or not root.right:
            return False
        return self.is_mirror(root.left, root.right)
        
    def is_mirror(self, left, right):
        if not left and not right:
            return True
        if not left or not right:
            return False

        return (left.val == right.val) and \
               self.is_mirror(left.left, right.right) and \
               self.is_mirror(left.right, right.left)


root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(2)

root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

root.right.left = TreeNode(5)
root.right.right = TreeNode(4)

checker = Solution()
result = checker.isSymmetric(root)
print(result)

# Example 1:
# Input: root = [1,2,2,3,4,4,3]
# Output: true

# Example 2:
# Input: root = [1,2,2,null,3,null,3]
# Output: false
