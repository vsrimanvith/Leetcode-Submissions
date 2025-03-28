# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        #
        currA=headA
        currB=headB

        while currA != currB:
            if currA is None:
                currA=headB
            else:
                currA=currA.next
            if currB is None:
                currB=headA
            else:
                currB=currB.next
        return currA

        # a1->a2->c1->c2->c3->None. ->b1->b2->b3->c1
        # b1->b2->b3->c1->c2. ->c3->None->a1->a2->c1
            

        