# Definition for singly-linked list.
from  typing import Optional
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        list_link = ListNode()
        current1 = list1
        current2 = list2
        result = list_link
        
        while current1 or current2:
            if current1 and (not current2 or current1.val <= current2.val):
                result.next = ListNode(current1.val)
                current1 = current1.next
            elif current2 and (not current1 or current2.val < current1.val):
                result.next = ListNode(current2.val)
                current2 = current2.next
                
            result = result.next
            
        return list_link.next

#Smaple I/O
"""
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]
"""
#for access class and merge linked list
"""
def display(self, head):
    if head is None:
        print("Empty")
    else:
        current = head
        while current.next:
            print(current.val)
            current = current.next 
        print(current.val)


list1 = ListNode(1)
list1.next = ListNode(3)
list1.next.next = ListNode(5)

list2 = ListNode(4)
checker = Solution()
result = checker.mergeTwoLists(list2, list1)
checker.display(result)
"""
