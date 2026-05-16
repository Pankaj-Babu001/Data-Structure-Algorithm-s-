# [66. Print Diagonally (Anti-Diagonals)](https://www.geeksforgeeks.org/problems/print-diagonally4331/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 60%](https://img.shields.io/badge/Acceptance-60%25-blue?style=for-the-badge)
![Submissions: 50K+](https://img.shields.io/badge/Submissions-50K%2B-brightgreen?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a $N \times N$ square matrix, return all its elements as per the **anti-diagonal** traversal order from top-left to bottom-right. 

In an anti-diagonal traversal, we visit:
1. All anti-diagonals starting from the top row elements.
2. All anti-diagonals starting from the last column elements (excluding the first row element).

## 📌 Examples

**Example 1:**
> **Input:** `N = 2, mat = [[1, 2], [3, 4]]`
> **Output:** `[1, 2, 3, 4]`
> **Explanation:** 
> - Diag 1: `(0,0)` -> 1
> - Diag 2: `(0,1), (1,0)` -> 2, 3
> - Diag 3: `(1,1)` -> 4

**Example 2:**
> **Input:** `N = 3, mat = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]`
> **Output:** `[1, 2, 4, 3, 5, 7, 6, 8, 9]`

---

## 📐 Constraints
- $1 \le N \le 10^3$
- $0 \le mat[i][j] \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N^2)$ | $O(N^2)$ |

---

## 🏷️ Topic Tags
- `Matrix`
- `Traversal`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../65_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../67_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
