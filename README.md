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
| [0024-swap-nodes-in-pairs](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0024-swap-nodes-in-pairs/) | Medium |
| [0025-reverse-nodes-in-k-group](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0025-reverse-nodes-in-k-group/) | Hard |
| [0061-rotate-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0061-rotate-list/) | Medium |
| [0083-remove-duplicates-from-sorted-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0083-remove-duplicates-from-sorted-list/) | Easy |
| [0092-reverse-linked-list-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0092-reverse-linked-list-ii/) | Medium |
| [0141-linked-list-cycle](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0141-linked-list-cycle/) | Easy |
| [0142-linked-list-cycle-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0142-linked-list-cycle-ii/) | Medium |
| [0143-reorder-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0143-reorder-list/) | Medium |
| [0206-reverse-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0206-reverse-linked-list/) | Easy |
| [0234-palindrome-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0234-palindrome-linked-list/) | Easy |
| [0876-middle-of-the-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0876-middle-of-the-linked-list/) | Easy |
| [2074-reverse-nodes-in-even-length-groups](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2074-reverse-nodes-in-even-length-groups/) | Medium |
| [2487-remove-nodes-from-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2487-remove-nodes-from-linked-list/) | Medium |
## Array
| Problem Name | Difficulty |
| ------- | ------- |
| [0015-3sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0015-3sum/) | Medium |
| [0016-3sum-closest](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0016-3sum-closest/) | Medium |
| [0018-4sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0018-4sum/) | Medium |
| [0034-find-first-and-last-position-of-element-in-sorted-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0034-find-first-and-last-position-of-element-in-sorted-array/) | Medium |
| [0053-maximum-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0053-maximum-subarray/) | Medium |
| [0056-merge-intervals](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0056-merge-intervals/) | Medium |
| [0057-insert-interval](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0057-insert-interval/) | Medium |
| [0075-sort-colors](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0075-sort-colors/) | Medium |
| [0152-maximum-product-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0152-maximum-product-subarray/) | Medium |
| [0209-minimum-size-subarray-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0209-minimum-size-subarray-sum/) | Medium |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
| [0457-circular-array-loop](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0457-circular-array-loop/) | Medium |
| [0503-next-greater-element-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0503-next-greater-element-ii/) | Medium |
| [0525-contiguous-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0525-contiguous-array/) | Medium |
| [0560-subarray-sum-equals-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0560-subarray-sum-equals-k/) | Medium |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [0713-subarray-product-less-than-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0713-subarray-product-less-than-k/) | Medium |
| [0724-find-pivot-index](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0724-find-pivot-index/) | Easy |
| [0739-daily-temperatures](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0739-daily-temperatures/) | Medium |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [0904-fruit-into-baskets](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0904-fruit-into-baskets/) | Medium |
| [0918-maximum-sum-circular-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0918-maximum-sum-circular-subarray/) | Medium |
| [0974-subarray-sums-divisible-by-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0974-subarray-sums-divisible-by-k/) | Medium |
| [0977-squares-of-a-sorted-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0977-squares-of-a-sorted-array/) | Easy |
| [0986-interval-list-intersections](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0986-interval-list-intersections/) | Medium |
| [1004-max-consecutive-ones-iii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1004-max-consecutive-ones-iii/) | Medium |
| [1186-maximum-subarray-sum-with-one-deletion](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1186-maximum-subarray-sum-with-one-deletion/) | Medium |
| [1749-maximum-absolute-sum-of-any-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1749-maximum-absolute-sum-of-any-subarray/) | Medium |
| [2778-sum-of-squares-of-special-elements](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2778-sum-of-squares-of-special-elements/) | Easy |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2897-apply-operations-on-array-to-maximize-sum-of-squares/) | Hard |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2913-subarrays-distinct-element-sum-of-squares-i/) | Easy |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2916-subarrays-distinct-element-sum-of-squares-ii/) | Hard |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3551-minimum-swaps-to-sort-by-digit-sum/) | Medium |
| [3727-maximum-alternating-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3727-maximum-alternating-sum-of-squares/) | Medium |
## Two Pointers
| Problem Name | Difficulty |
| ------- | ------- |
| [0015-3sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0015-3sum/) | Medium |
| [0016-3sum-closest](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0016-3sum-closest/) | Medium |
| [0018-4sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0018-4sum/) | Medium |
| [0061-rotate-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0061-rotate-list/) | Medium |
| [0075-sort-colors](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0075-sort-colors/) | Medium |
| [0141-linked-list-cycle](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0141-linked-list-cycle/) | Easy |
| [0142-linked-list-cycle-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0142-linked-list-cycle-ii/) | Medium |
| [0143-reorder-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0143-reorder-list/) | Medium |
| [0202-happy-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0202-happy-number/) | Easy |
| [0234-palindrome-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0234-palindrome-linked-list/) | Easy |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
| [0457-circular-array-loop](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0457-circular-array-loop/) | Medium |
| [0567-permutation-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0567-permutation-in-string/) | Medium |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [0844-backspace-string-compare](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0844-backspace-string-compare/) | Easy |
| [0876-middle-of-the-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0876-middle-of-the-linked-list/) | Easy |
| [0977-squares-of-a-sorted-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0977-squares-of-a-sorted-array/) | Easy |
| [0986-interval-list-intersections](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0986-interval-list-intersections/) | Medium |
## Sorting
| Problem Name | Difficulty |
| ------- | ------- |
| [0015-3sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0015-3sum/) | Medium |
| [0016-3sum-closest](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0016-3sum-closest/) | Medium |
| [0018-4sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0018-4sum/) | Medium |
| [0056-merge-intervals](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0056-merge-intervals/) | Medium |
| [0075-sort-colors](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0075-sort-colors/) | Medium |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [0977-squares-of-a-sorted-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0977-squares-of-a-sorted-array/) | Easy |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3551-minimum-swaps-to-sort-by-digit-sum/) | Medium |
| [3727-maximum-alternating-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3727-maximum-alternating-sum-of-squares/) | Medium |
## Binary Search
| Problem Name | Difficulty |
| ------- | ------- |
| [0034-find-first-and-last-position-of-element-in-sorted-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0034-find-first-and-last-position-of-element-in-sorted-array/) | Medium |
| [0209-minimum-size-subarray-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0209-minimum-size-subarray-sum/) | Medium |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
| [0713-subarray-product-less-than-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0713-subarray-product-less-than-k/) | Medium |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [1004-max-consecutive-ones-iii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1004-max-consecutive-ones-iii/) | Medium |
## Sliding Window
| Problem Name | Difficulty |
| ------- | ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0003-longest-substring-without-repeating-characters/) | Medium |
| [0030-substring-with-concatenation-of-all-words](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0030-substring-with-concatenation-of-all-words/) | Hard |
| [0076-minimum-window-substring](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0076-minimum-window-substring/) | Hard |
| [0209-minimum-size-subarray-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0209-minimum-size-subarray-sum/) | Medium |
| [0424-longest-repeating-character-replacement](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0424-longest-repeating-character-replacement/) | Medium |
| [0438-find-all-anagrams-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0438-find-all-anagrams-in-a-string/) | Medium |
| [0567-permutation-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0567-permutation-in-string/) | Medium |
| [0713-subarray-product-less-than-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0713-subarray-product-less-than-k/) | Medium |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [0904-fruit-into-baskets](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0904-fruit-into-baskets/) | Medium |
| [1004-max-consecutive-ones-iii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1004-max-consecutive-ones-iii/) | Medium |
## Prefix Sum
| Problem Name | Difficulty |
| ------- | ------- |
| [0209-minimum-size-subarray-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0209-minimum-size-subarray-sum/) | Medium |
| [0525-contiguous-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0525-contiguous-array/) | Medium |
| [0560-subarray-sum-equals-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0560-subarray-sum-equals-k/) | Medium |
| [0713-subarray-product-less-than-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0713-subarray-product-less-than-k/) | Medium |
| [0724-find-pivot-index](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0724-find-pivot-index/) | Easy |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [0974-subarray-sums-divisible-by-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0974-subarray-sums-divisible-by-k/) | Medium |
| [1004-max-consecutive-ones-iii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1004-max-consecutive-ones-iii/) | Medium |
## Quicksort
| Problem Name | Difficulty |
| ------- | ------- |
| [0056-merge-intervals](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0056-merge-intervals/) | Medium |
| [0075-sort-colors](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0075-sort-colors/) | Medium |
## Bubble Sort
| Problem Name | Difficulty |
| ------- | ------- |
| [0075-sort-colors](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0075-sort-colors/) | Medium |
## String
| Problem Name | Difficulty |
| ------- | ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0003-longest-substring-without-repeating-characters/) | Medium |
| [0020-valid-parentheses](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0020-valid-parentheses/) | Easy |
| [0030-substring-with-concatenation-of-all-words](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0030-substring-with-concatenation-of-all-words/) | Hard |
| [0071-simplify-path](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0071-simplify-path/) | Medium |
| [0076-minimum-window-substring](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0076-minimum-window-substring/) | Hard |
| [0387-first-unique-character-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0387-first-unique-character-in-a-string/) | Easy |
| [0402-remove-k-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0402-remove-k-digits/) | Medium |
| [0409-longest-palindrome](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0409-longest-palindrome/) | Easy |
| [0424-longest-repeating-character-replacement](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0424-longest-repeating-character-replacement/) | Medium |
| [0438-find-all-anagrams-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0438-find-all-anagrams-in-a-string/) | Medium |
| [0567-permutation-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0567-permutation-in-string/) | Medium |
| [0844-backspace-string-compare](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0844-backspace-string-compare/) | Easy |
| [1047-remove-all-adjacent-duplicates-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1047-remove-all-adjacent-duplicates-in-string/) | Easy |
| [1189-maximum-number-of-balloons](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1189-maximum-number-of-balloons/) | Easy |
| [1209-remove-all-adjacent-duplicates-in-string-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1209-remove-all-adjacent-duplicates-in-string-ii/) | Medium |
## Stack
| Problem Name | Difficulty |
| ------- | ------- |
| [0020-valid-parentheses](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0020-valid-parentheses/) | Easy |
| [0071-simplify-path](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0071-simplify-path/) | Medium |
| [0143-reorder-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0143-reorder-list/) | Medium |
| [0234-palindrome-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0234-palindrome-linked-list/) | Easy |
| [0402-remove-k-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0402-remove-k-digits/) | Medium |
| [0503-next-greater-element-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0503-next-greater-element-ii/) | Medium |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [0739-daily-temperatures](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0739-daily-temperatures/) | Medium |
| [0844-backspace-string-compare](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0844-backspace-string-compare/) | Easy |
| [1047-remove-all-adjacent-duplicates-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1047-remove-all-adjacent-duplicates-in-string/) | Easy |
| [1209-remove-all-adjacent-duplicates-in-string-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1209-remove-all-adjacent-duplicates-in-string-ii/) | Medium |
| [2487-remove-nodes-from-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2487-remove-nodes-from-linked-list/) | Medium |
## Simulation
| Problem Name | Difficulty |
| ------- | ------- |
| [0844-backspace-string-compare](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0844-backspace-string-compare/) | Easy |
## Greedy
| Problem Name | Difficulty |
| ------- | ------- |
| [0402-remove-k-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0402-remove-k-digits/) | Medium |
| [0409-longest-palindrome](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0409-longest-palindrome/) | Easy |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2897-apply-operations-on-array-to-maximize-sum-of-squares/) | Hard |
| [3723-maximize-sum-of-squares-of-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3723-maximize-sum-of-squares-of-digits/) | Medium |
| [3727-maximum-alternating-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3727-maximum-alternating-sum-of-squares/) | Medium |
## Monotonic Stack
| Problem Name | Difficulty |
| ------- | ------- |
| [0402-remove-k-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0402-remove-k-digits/) | Medium |
| [0503-next-greater-element-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0503-next-greater-element-ii/) | Medium |
| [0581-shortest-unsorted-continuous-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0581-shortest-unsorted-continuous-subarray/) | Medium |
| [0739-daily-temperatures](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0739-daily-temperatures/) | Medium |
| [2487-remove-nodes-from-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2487-remove-nodes-from-linked-list/) | Medium |
## Hash Table
| Problem Name | Difficulty |
| ------- | ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0003-longest-substring-without-repeating-characters/) | Medium |
| [0030-substring-with-concatenation-of-all-words](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0030-substring-with-concatenation-of-all-words/) | Hard |
| [0076-minimum-window-substring](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0076-minimum-window-substring/) | Hard |
| [0141-linked-list-cycle](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0141-linked-list-cycle/) | Easy |
| [0142-linked-list-cycle-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0142-linked-list-cycle-ii/) | Medium |
| [0202-happy-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0202-happy-number/) | Easy |
| [0387-first-unique-character-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0387-first-unique-character-in-a-string/) | Easy |
| [0409-longest-palindrome](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0409-longest-palindrome/) | Easy |
| [0424-longest-repeating-character-replacement](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0424-longest-repeating-character-replacement/) | Medium |
| [0438-find-all-anagrams-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0438-find-all-anagrams-in-a-string/) | Medium |
| [0457-circular-array-loop](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0457-circular-array-loop/) | Medium |
| [0525-contiguous-array](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0525-contiguous-array/) | Medium |
| [0560-subarray-sum-equals-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0560-subarray-sum-equals-k/) | Medium |
| [0567-permutation-in-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0567-permutation-in-string/) | Medium |
| [0904-fruit-into-baskets](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0904-fruit-into-baskets/) | Medium |
| [0974-subarray-sums-divisible-by-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0974-subarray-sums-divisible-by-k/) | Medium |
| [1189-maximum-number-of-balloons](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1189-maximum-number-of-balloons/) | Easy |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2897-apply-operations-on-array-to-maximize-sum-of-squares/) | Hard |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2913-subarrays-distinct-element-sum-of-squares-i/) | Easy |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2916-subarrays-distinct-element-sum-of-squares-ii/) | Hard |
| [3551-minimum-swaps-to-sort-by-digit-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3551-minimum-swaps-to-sort-by-digit-sum/) | Medium |
## Floyd's Cycle Finding Algorithm
| Problem Name | Difficulty |
| ------- | ------- |
| [0141-linked-list-cycle](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0141-linked-list-cycle/) | Easy |
| [0142-linked-list-cycle-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0142-linked-list-cycle-ii/) | Medium |
| [0202-happy-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0202-happy-number/) | Easy |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
| [0457-circular-array-loop](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0457-circular-array-loop/) | Medium |
## Math
| Problem Name | Difficulty |
| ------- | ------- |
| [0202-happy-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0202-happy-number/) | Easy |
| [3723-maximize-sum-of-squares-of-digits](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/3723-maximize-sum-of-squares-of-digits/) | Medium |
## Bit Manipulation
| Problem Name | Difficulty |
| ------- | ------- |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
| [2897-apply-operations-on-array-to-maximize-sum-of-squares](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2897-apply-operations-on-array-to-maximize-sum-of-squares/) | Hard |
## Pigeonhole Principle
| Problem Name | Difficulty |
| ------- | ------- |
| [0287-find-the-duplicate-number](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0287-find-the-duplicate-number/) | Medium |
## Recursion
| Problem Name | Difficulty |
| ------- | ------- |
| [0024-swap-nodes-in-pairs](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0024-swap-nodes-in-pairs/) | Medium |
| [0025-reverse-nodes-in-k-group](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0025-reverse-nodes-in-k-group/) | Hard |
| [0143-reorder-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0143-reorder-list/) | Medium |
| [0206-reverse-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0206-reverse-linked-list/) | Easy |
| [0234-palindrome-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0234-palindrome-linked-list/) | Easy |
| [2487-remove-nodes-from-linked-list](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2487-remove-nodes-from-linked-list/) | Medium |
## Divide and Conquer
| Problem Name | Difficulty |
| ------- | ------- |
| [0053-maximum-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0053-maximum-subarray/) | Medium |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
| [0918-maximum-sum-circular-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0918-maximum-sum-circular-subarray/) | Medium |
## Dynamic Programming
| Problem Name | Difficulty |
| ------- | ------- |
| [0053-maximum-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0053-maximum-subarray/) | Medium |
| [0152-maximum-product-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0152-maximum-product-subarray/) | Medium |
| [0918-maximum-sum-circular-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0918-maximum-sum-circular-subarray/) | Medium |
| [1186-maximum-subarray-sum-with-one-deletion](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1186-maximum-subarray-sum-with-one-deletion/) | Medium |
| [1749-maximum-absolute-sum-of-any-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1749-maximum-absolute-sum-of-any-subarray/) | Medium |
## Queue
| Problem Name | Difficulty |
| ------- | ------- |
| [0387-first-unique-character-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0387-first-unique-character-in-a-string/) | Easy |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [0918-maximum-sum-circular-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0918-maximum-sum-circular-subarray/) | Medium |
## Monotonic Queue
| Problem Name | Difficulty |
| ------- | ------- |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
| [0918-maximum-sum-circular-subarray](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0918-maximum-sum-circular-subarray/) | Medium |
## Heap (Priority Queue)
| Problem Name | Difficulty |
| ------- | ------- |
| [0862-shortest-subarray-with-sum-at-least-k](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0862-shortest-subarray-with-sum-at-least-k/) | Hard |
## Binary Indexed Tree
| Problem Name | Difficulty |
| ------- | ------- |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2913-subarrays-distinct-element-sum-of-squares-i/) | Easy |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2916-subarrays-distinct-element-sum-of-squares-ii/) | Hard |
## Segment Tree
| Problem Name | Difficulty |
| ------- | ------- |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2913-subarrays-distinct-element-sum-of-squares-i/) | Easy |
| [2916-subarrays-distinct-element-sum-of-squares-ii](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2916-subarrays-distinct-element-sum-of-squares-ii/) | Hard |
## Merge Sort
| Problem Name | Difficulty |
| ------- | ------- |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
## Ordered Set
| Problem Name | Difficulty |
| ------- | ------- |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
## Treap
| Problem Name | Difficulty |
| ------- | ------- |
| [0327-count-of-range-sum](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0327-count-of-range-sum/) | Hard |
## Sweep Line
| Problem Name | Difficulty |
| ------- | ------- |
| [0986-interval-list-intersections](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0986-interval-list-intersections/) | Medium |
## Enumeration
| Problem Name | Difficulty |
| ------- | ------- |
| [2778-sum-of-squares-of-special-elements](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/2778-sum-of-squares-of-special-elements/) | Easy |
## Bracket Sequences
| Problem Name | Difficulty |
| ------- | ------- |
| [0020-valid-parentheses](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0020-valid-parentheses/) | Easy |
## Counting
| Problem Name | Difficulty |
| ------- | ------- |
| [0387-first-unique-character-in-a-string](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/0387-first-unique-character-in-a-string/) | Easy |
| [1189-maximum-number-of-balloons](https://github.com/ArvindBuilds/DrGViswanathan-Challenge/tree/main/1189-maximum-number-of-balloons/) | Easy |
<!---LeetCode Topics End-->