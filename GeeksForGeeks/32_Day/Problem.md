# [32. Find the closest pair from two arrays](https://www.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 18.01%](https://img.shields.io/badge/Acceptance-18.01%25-blue?style=for-the-badge)
![Submissions: 69K+](https://img.shields.io/badge/Submissions-69K%2B-brightgreen?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given two sorted arrays `arr1[]` and `arr2[]` and an integer `x`, find a pair of elements (one from each array) such that their sum is as close to `x` as possible. If there are multiple pairs with the same minimum difference, return any one of them.

## 📌 Examples

**Example 1:**
> **Input:** `arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 32`
> **Output:** `[1, 30]`
> **Explanation:** The sum `1 + 30 = 31` is the closest to 32 (difference of 1).

**Example 2:**
> **Input:** `arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 50`
> **Output:** `[7, 40]`
> **Explanation:** The sum `7 + 40 = 47` is the closest to 50 (difference of 3).

---

## 📐 Constraints
- $1 \le arr1.size(), arr2.size() \le 10^5$
- $1 \le arr1[i], arr2[i] \le 10^9$
- $1 \le x \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N + M)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Two Pointers`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../31_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../33_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
