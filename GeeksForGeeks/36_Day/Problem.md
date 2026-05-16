# [36. Max Xor Subarray of size K](https://www.geeksforgeeks.org/problems/max-xor-subarray-of-size-k/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55.42%](https://img.shields.io/badge/Acceptance-55.42%25-blue?style=for-the-badge)
![Submissions: 15K+](https://img.shields.io/badge/Submissions-15K%2B-brightgreen?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array of integers `arr[]` and a positive integer `k`, find the **maximum XOR sum** among all possible contiguous subarrays of size exactly `k`.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [2, 5, 8, 1, 1, 3], k = 3`
> **Output:** `15`
> **Explanation:** The subarray `[2, 5, 8]` has XOR sum $2 \oplus 5 \oplus 8 = 15$, which is the maximum possible.

**Example 2:**
> **Input:** `arr[] = [1, 2, 4, 5, 6], k = 2`
> **Output:** `6`
> **Explanation:** The subarray `[2, 4]` has XOR sum $2 \oplus 4 = 6$.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^6$
- $0 \le arr[i] \le 10^6$
- $1 \le k \le arr.size()$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sliding Window`
- `Bit Manipulation`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../35_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../37_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
