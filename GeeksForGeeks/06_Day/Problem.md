# [06. Max Circular Subarray Sum](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 55%](https://img.shields.io/badge/Acceptance-55%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Kadane's Algorithm](https://img.shields.io/badge/Topics-Kadane's%20Algorithm-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given a circular array `arr[]` of integers. Find the maximum possible sum of a non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning.

Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [8, -8, 9, -9, 10, -11, 12]`
> **Output:** `22`
> **Explanation:** The subarray is `[12, 8, -8, 9, -9, 10]`, which wraps around and gives the maximum sum of 22.

**Example 2:**
> **Input:** `arr[] = [10, -3, -4, 7, 6, 5, -4, -1]`
> **Output:** `23`

**Example 3:**
> **Input:** `arr[] = [5, -2, 3, 4]`
> **Output:** `12`

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $-10^4 \le arr[i] \le 10^4$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Kadane's Algorithm`
- `Dynamic Programming`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../05_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../07_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
