# [17. All numbers with specific difference](https://www.geeksforgeeks.org/problems/all-numbers-with-specific-difference1923/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 36.73%](https://img.shields.io/badge/Acceptance-36.73%25-blue?style=for-the-badge)
![Submissions: 6K+](https://img.shields.io/badge/Submissions-6K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a positive number `n` and a number `d`. Find the count of positive numbers $k \le n$ such that the difference between the number and the sum of its digits is greater than or equal to `d`.
Equation: $k - \text{sumDigits}(k) \ge d$

## 📌 Examples

**Example 1:**
> **Input:** `n = 13, d = 2`
> **Output:** `4`
> **Explanation:** The numbers are 10, 11, 12, 13. All satisfy $k - \text{sumDigits}(k) \ge 2$. For example, $10 - 1 = 9 \ge 2$.

**Example 2:**
> **Input:** `n = 14, d = 3`
> **Output:** `5`
> **Explanation:** The numbers are 10, 11, 12, 13, 14.

---

## 📐 Constraints
- $1 \le n \le 10^9$
- $1 \le d \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(\log^2 N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Binary Search`
- `Mathematical`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../16_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../18_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
