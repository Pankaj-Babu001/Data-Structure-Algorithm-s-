# [16. Max min Height](https://www.geeksforgeeks.org/problems/max-min-height1333/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 62.86%](https://img.shields.io/badge/Acceptance-62.86%25-blue?style=for-the-badge)
![Submissions: 30K+](https://img.shields.io/badge/Submissions-30K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a garden with `n` flowers represented by an array `arr[]` where `arr[i]` is the height of the `i`-th flower. You water them for `k` days. In one day, you can water `w` continuous flowers, increasing their height by 1 unit. Maximize the minimum height of all flowers after `k` days.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [2, 3, 4, 5, 1], k = 2, w = 2`
> **Output:** `2`
> **Explanation:** On Day 1, water last two flowers: `[2, 3, 4, 6, 2]`. On Day 2, water last two flowers: `[2, 3, 4, 7, 3]`. The minimum height is 2.

**Example 2:**
> **Input:** `arr[] = [5, 8], k = 5, w = 1`
> **Output:** `9`
> **Explanation:** Water first flower 4 times and second flower 1 time.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le w \le arr.size()$
- $1 \le k \le 10^5$
- $1 \le arr[i] \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log(\max(arr) + k))$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Binary Search`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../15_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../17_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
