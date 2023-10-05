//Author: Sri Manvith Vaddeboyina

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* sp = head;
        ListNode* fp = head;
        while(fp && fp->next)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        return sp;
    }
};