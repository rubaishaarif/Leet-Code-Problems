

class Solution:
    def countNodes(self, root: TreeNode) -> int:
        if not root:
            return 0

        left = root
        left_height = 0
        while left:
            left = left.left
            left_height += 1
        

        right = root
        right_height = 0
        while right:
            right = right.right
            right_height += 1

        if left_height == right_height:
            return (1 << left_height) - 1   
        

        return 1 + self.countNodes(root.left) + self.countNodes(root.right)

        