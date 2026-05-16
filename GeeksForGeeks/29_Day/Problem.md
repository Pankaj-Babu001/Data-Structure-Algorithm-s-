# [29. Longest Subarray with Majority Greater than K](https://www.geeksforgeeks.org/problems/longest-subarray-with-majority-greater-than-k/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 52.63%](https://img.shields.io/badge/Acceptance-52.63%25-blue?style=for-the-badge)
![Submissions: 28K+](https://img.shields.io/badge/Submissions-28K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` and an integer `k`, find the length of the **longest contiguous subarray** where the count of elements **strictly greater than** `k` is more than the count of elements **less than or equal to** `k`.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [1, 2, 3, 4, 1], k = 2`
> **Output:** `3`
> **Explanation:** The subarrays `[2, 3, 4]` or `[3, 4, 1]` satisfy the condition (2 elements > 2, 1 element <= 2).

**Example 2:**
> **Input:** `arr[] = [6, 5, 3, 4], k = 2`
> **Output:** `4`
> **Explanation:** All 4 elements are > 2, so the entire array satisfies the condition.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^6$
- $1 \le arr[i] \le 10^6$
- $0 \le k \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Prefix Sum`
- `Binary Search`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../28_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../30_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
