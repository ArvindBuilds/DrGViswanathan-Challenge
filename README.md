# 🚀 Dr. G. Vishwanathan Challenge — 50 Days of DSA

Welcome to my **50 Days of Coding & DSA Challenge**, inspired by the **Dr. G. Vishwanathan Challenge**.

The goal of this challenge is to build consistency, strengthen my Data Structures & Algorithms fundamentals, and improve my problem-solving skills by solving at least one coding problem every day for 50 days.

---

## 🎯 Challenge Goals

* 📚 Strengthen DSA fundamentals
* 🧠 Improve problem-solving and logical thinking
* 💻 Practice C++
* 🔥 Maintain consistency for 50 consecutive days
* 📈 Track my progress and learning
* 🚀 Become better at competitive programming and technical interviews

---

## 📅 Progress

| Day | Problem                                                           | Platform | Topic       | Language | Status   |
| --- | ----------------------------------------------------------------- | -------- | ----------- | -------- | -------- |
| 1   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | LeetCode | Linked List | C++      | ✅ Solved |
| 2   | —                                                                 | —        | —           | —        | ⏳        |
| 3   | —                                                                 | —        | —           | —        | ⏳        |
| 4   | —                                                                 | —        | —           | —        | ⏳        |
| 5   | —                                                                 | —        | —           | —        | ⏳        |
| ... | ...                                                               | ...      | ...         | ...      | ...      |
| 50  | —                                                                 | —        | —           | —        | ⏳        |

---

# 🟢 Day 1 — Add Two Numbers

### 🔗 Problem

**LeetCode #2 — Add Two Numbers**

Given two non-empty linked lists representing two non-negative integers, where the digits are stored in reverse order, add the two numbers and return the sum as a linked list.

### 💡 Approach

The solution traverses both linked lists simultaneously.

At every node:

```text
sum = digit1 + digit2 + carry
```

Then:

```text
digit = sum % 10
carry = sum / 10
```

A dummy node is used to simplify the construction of the resulting linked list.

### 🧠 Concepts Learned

* Singly Linked Lists
* Linked List Traversal
* Carry Handling
* Dummy Node
* Pointer Manipulation

### ⏱️ Complexity

**Time Complexity:** `O(max(m, n))`

**Space Complexity:** `O(max(m, n))`

---

## 💻 Solution

```cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};
```

---

## 📊 Challenge Tracker

**Progress:** `1 / 50` ✅

```text
Day 01 █░░░░░░░░░ 2%
```

---

## 🔥 Daily Commitment

> **One problem a day. One step closer to becoming a better problem solver.**

I’ll be updating this README throughout the challenge to document my progress, solutions, concepts learned, and challenges faced.

---

### 📌 Challenge Started

**Day 1 — 29 August 2026**

### 🏁 Target

**50 Days → 50+ Problems → Stronger DSA Fundamentals 🚀**

---

⭐ If you find this journey useful, feel free to follow along!

<!---LeetCode Topics Start-->
# LeetCode Topics
## Linked List
| Problem Name | Difficulty |
| ------- | ------- |
| [0083-remove-duplicates-from-sorted-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0083-remove-duplicates-from-sorted-list/) | Easy |
<!---LeetCode Topics End-->