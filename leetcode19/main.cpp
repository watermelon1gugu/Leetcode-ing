#include <iostream>
#include <vector>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
using namespace std;
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        vector<ListNode*> buff;
        ListNode *temp = head;
        int size = 0;
        while(temp!=NULL){
            buff.push_back(temp);
            temp = temp->next;
            size++;
        }if(size-n>0) {
            buff[size - n - 1]->next = buff[size - n]->next;
            delete (buff[size - n]);
            return head;
        }
        else if(size-n==0){
            ListNode* tmp = head;
            head = buff[size - n]->next;
            delete(tmp);
            return head;
        }
        else return nullptr;
    }
};

int main() {

    return 0;
}