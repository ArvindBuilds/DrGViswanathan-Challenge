class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* groupPrev = &dummy;
        int groupSize = 1;

        while (groupPrev->next != nullptr) {
            ListNode* curr = groupPrev->next;
            int actualSize = 0;

            // Count the actual group length
            ListNode* temp = curr;
            while (temp != nullptr && actualSize < groupSize) {
                actualSize++;
                temp = temp->next;
            }

            if (actualSize % 2 == 0) {
                ListNode* groupNext = temp;
                ListNode* prev = groupNext;

                for (int i = 0; i < actualSize; i++) {
                    ListNode* nextNode = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = nextNode;
                }

                ListNode* oldHead = groupPrev->next;
                groupPrev->next = prev;
                groupPrev = oldHead;
            } else {
                for (int i = 0; i < actualSize; i++) {
                    groupPrev = groupPrev->next;
                }
            }

            groupSize++;
        }

        return dummy.next;
    }
};