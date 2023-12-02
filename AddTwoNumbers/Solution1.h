#ifndef SOLUTION1_H_
#define SOLUTION1_H_

#include "BaseSolution.h"

class Solution1 : public BaseSolution {
public:
    ListNode* addTwoNumbers(ListNode*, ListNode*) override;
};

ListNode* Solution1::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode();
    ListNode* current = result;
    int carry = 0;

    while(l1 || l2 || carry) {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;

        current->next = new ListNode((x+y+carry)%10);
        carry = (x+y)/10;

        current = current->next;

        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }

    return result->next;
}



#endif /* SOLUTION1_H_ */

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