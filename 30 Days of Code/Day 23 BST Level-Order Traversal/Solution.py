# https://www.hackerrank.com/challenges/30-binary-trees/problem

import sys

class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def levelOrder(self,root):
        #Write your code here
        q = []
        if root is not None:
            q.append(root)

            while q:
                newNode = q.pop(0)
                print(newNode.data, end=" ")
                if newNode.left is not None:
                    q.append(newNode.left)
                if newNode.right is not None:
                    q.append(newNode.right)

T=int(input())
myTree=Solution()
root=None
for i in range(T):
    data=int(input())
    root=myTree.insert(root,data)
myTree.levelOrder(root)
