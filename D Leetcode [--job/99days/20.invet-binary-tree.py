from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root:
                root.left, root.right = root.right, root.left
                self.invertTree(root.left)
                self.invertTree(root.right)
        return root 



# for test by the general tree
# def inorder_traversal(root):
#     result = []
#     if root:
#         result.append(root.val)
#         result += inorder_traversal(root.left)
#         result += inorder_traversal(root.right)
#     return result


# head = TreeNode(4)
# head.left = TreeNode(2)
# head.right = TreeNode(7)

# head.left.left = TreeNode(1)
# head.left.right = TreeNode(3)

# head.right.left = TreeNode(6)
# head.right.right = TreeNode(9)

# checker = Solution()

# print("Before make binary tree : ", inorder_traversal(head))

# inverted_head = checker.invertTree(head)

# print("Binary tree : ", inorder_traversal(inverted_head))

# sample examples
# Example 1:
# Input: root = [4,2,7,1,3,6,9]
# Output: [4,7,2,9,6,3,1]
    
# Example 2:
# Input: root = [2,1,3]
# Output: [2,3,1]
    
# Example 3:
# Input: root = []
# Output: []
