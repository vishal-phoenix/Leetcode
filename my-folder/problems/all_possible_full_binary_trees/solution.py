# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def allPossibleFBT(self, n: int) -> List[Optional[TreeNode]]:
        @cache
        def helper(nodes):
            if nodes <= 0:
                return []
            if nodes == 1:
                return tuple([TreeNode(0)])

            if nodes % 2 == 0:
                return ()
            
            total = []
            for i in range(1, nodes, 2):
                left = helper(i)
                right = helper(nodes - i - 1)

                for node_left in left:
                    for node_right in right:
                        total.append(TreeNode(0, node_left, node_right))
            
            return tuple(total)
        
        return helper(n)