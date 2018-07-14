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
    ListNode *reverseList(ListNode *head) {
        ListNode *temp;
        ListNode *tempThree;
        ListNode *curr = head;

        while(curr->next!=NULL){
            temp = curr->next;
            tempThree = curr->next->next;
            curr->next = curr->next->next;
            temp->next = curr;
            curr = temp;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}