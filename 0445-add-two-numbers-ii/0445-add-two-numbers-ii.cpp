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
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int size1 = list_size(l1), size2 = list_size(l2);
        if (size1 < size2) {
            swap(size1, size2);
            swap(l1, l2);
        }
        ListNode* head = new ListNode(0);
        ListNode* ans = head;
        head->next = l1;
        int diff = size1 - size2 + 1;
        dfs(head, l2, diff);
        return !ans->val ? ans->next : ans;
    }
    // assume l1 > l2
    bool dfs(ListNode* l1, ListNode* l2, int& diff) {
        if (!l1 || !l2) return 0;
        if (diff) {
            diff--;
            l1->val += dfs(l1->next, l2, diff);
            if (l1->val >= 10) {
                l1->val -= 10;
                return 1;
            }
            return 0;
        }
        l1->val += l2->val + dfs(l1->next, l2->next, diff);
        if (l1->val >= 10) {
            l1->val -= 10;
            return 1;
        }
        return 0;
    }
    int list_size(ListNode* list) {
        ListNode* tmp = list;
        int size = 1;
        while (tmp->next) {
            size++;
            tmp = tmp->next;
        }
        return size;
    }
};