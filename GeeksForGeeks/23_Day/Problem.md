# [23. Missing Element in Range](https://www.geeksforgeeks.org/problems/missing-element-in-range/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55.45%](https://img.shields.io/badge/Acceptance-55.45%25-blue?style=for-the-badge)
![Submissions: 22K+](https://img.shields.io/badge/Submissions-22K%2B-brightgreen?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` of integers and a range `[low, high]`, find all numbers within that range that are not present in the array. Return the missing numbers in sorted order.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [10, 12, 11, 15], low = 10, high = 15`
> **Output:** `[13, 14]`
> **Explanation:** 13 and 14 lie in the range but are missing from the array.

**Example 2:**
> **Input:** `arr[] = [1, 4, 11, 51, 15], low = 50, high = 55`
> **Output:** `[50, 52, 53, 54, 55]`
> **Explanation:** 51 is present; others in range [50, 55] are missing.

---

## 📐 Constraints
- $1 \le arr.size(), low, high \le 10^5$
- $1 \le arr[i] \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N + (high - low))$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Hash`
- `Sorting`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../22_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../24_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
