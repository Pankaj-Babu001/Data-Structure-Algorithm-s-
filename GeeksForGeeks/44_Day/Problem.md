# [44. Minimum Number of K Consecutive Bit Flips](https://www.geeksforgeeks.org/problems/minimum-number-of-k-consecutive-bit-flips--171650/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 58.52%](https://img.shields.io/badge/Acceptance-58.52%25-blue?style=for-the-badge)
![Submissions: 13K+](https://img.shields.io/badge/Submissions-13K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given a binary array `arr[]` and an integer `k`. In one operation, you can select a contiguous subarray of length `k` and flip all its bits (0 to 1, and 1 to 0).

Find the **minimum number of operations** required to make the entire array consist only of 1s. If it is impossible, return `-1`.

## 📌 Examples

**Example 1:**
> **Input:** `arr = [1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1]`, `k = 2`
> **Output:** `4` 
> **Explanation:** 4 operations on subarrays of length 2 can convert all 0s to 1s.

**Example 2:**
> **Input:** `arr = [0, 0, 1, 1, 1, 0, 0]`, `k = 3`
> **Output:** `-1`
> **Explanation:** It is not possible to convert all elements to 1s using a flip size of 3.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^6$
- $1 \le k \le arr.size()$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Greedy`
- `Sliding Window`
- `Difference Array`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../43_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../45_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
