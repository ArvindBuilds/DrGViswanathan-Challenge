class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;

        while (head != nullptr) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        // Reverse so right-side nodes are processed first
        head = reverseList(head);

        int maxSoFar = INT_MIN;
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (head != nullptr) {
            if (head->val >= maxSoFar) {
                maxSoFar = head->val;
                tail->next = head;
                tail = head;
            }

            head = head->next;
        }

        tail->next = nullptr;

        // Restore original direction
        return reverseList(dummy.next);
    }
};