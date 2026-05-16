# [31. Number of Submatrix Have Sum X](https://www.geeksforgeeks.org/problems/number-of-submatrix-have-sum-k/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 80.35%](https://img.shields.io/badge/Acceptance-80.35%25-blue?style=for-the-badge)
![Submissions: 2K+](https://img.shields.io/badge/Submissions-2K%2B-brightgreen?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a matrix `mat[][]` of size `n × m` and an integer `x`, count the total number of **square submatrices** whose elements sum exactly to `x`.

## 📌 Examples

**Example 1:**
> **Input:**
> `mat[][] = [[2, 4, 7, 8, 10], [3, 1, 1, 1, 1], [9, 11, 1, 2, 1], [12, -17, 1, 1, 1]]`
> `x = 10`
> **Output:** `3`
> **Explanation:** There are 3 square submatrices with sum 10.

**Example 2:**
> **Input:**
> `mat[][] = [[3, 3, 5, 3], [2, 2, 2, 6], [11, 2, 2, 4]]`
> `x = 1`
> **Output:** `0`

---

## 📐 Constraints
- $1 \le n, m \le 100$
- $-10^3 \le mat[i][j] \le 10^3$
- $-10^9 \le x \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \cdot M \cdot \min(N, M))$ | $O(N \cdot M)$ |

---

## 🏷️ Topic Tags
- `Matrix`
- `Prefix Sum`
- `Dynamic Programming`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../30_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../32_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
