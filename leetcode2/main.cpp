#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int up=0;
        ListNode node = ListNode(0);
        ListNode* head = &node;
        while(l1||l2||up)
        {
            int temp = (l1?l1->val:0)+(l2?l2->val:0)+up;
            head->next = new ListNode(temp%10);
            up = temp/10;
            head = head->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        return node.next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    ListNode a(2);
    ListNode b(4);
    ListNode c(3);
    ListNode d(5);
    ListNode e(6);
    ListNode f(4);
/*
    a.next = &b;
    b.next = &c;

    d.next = &e;
    e.next = &f;*/

    Solution solution;
    ListNode *result = solution.addTwoNumbers(&a,&d);
    while(result!=NULL&&result!=NULL){
        std::cout<<result->val<<" ";
        result = result->next;
    }
    std::cout<<std::endl;
    return 0;
}