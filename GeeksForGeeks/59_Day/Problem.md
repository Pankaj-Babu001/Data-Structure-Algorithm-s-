# [59. Chocolates Pickup](https://www.geeksforgeeks.org/problems/chocolates-pickup/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 70%](https://img.shields.io/badge/Acceptance-70%25-blue?style=for-the-badge)
![Submissions: 30K+](https://img.shields.io/badge/Submissions-30K%2B-brightgreen?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given a 2D matrix `grid[][]` of size `n*m`. Two robots are collecting chocolates:
- **Robot 1** starts at `(0, 0)`.
- **Robot 2** starts at `(0, m-1)`.

From a cell `(i, j)`, a robot can move to `(i+1, j-1)`, `(i+1, j)`, or `(i+1, j+1)`. Both robots must move until they reach the bottom row. If both robots land on the same cell, the chocolates are collected **only once**. Determine the maximum total chocolates both robots can collect.

## 📌 Examples

**Example 1:**
> **Input:** `grid = [[4, 1, 2], [3, 6, 1], [1, 6, 6], [3, 1, 2]]`
> **Output:** `32`
> **Explanation:** 
> - Robot 1: `(0,0) -> (1,0) -> (2,1) -> (3,0)` = 16
> - Robot 2: `(0,2) -> (1,1) -> (2,2) -> (3,2)` = 16
> Total = 32.

---

## 📐 Constraints
- $2 \le n, m \le 70$
- $0 \le grid[i][j] \le 100$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times M^2)$ | $O(N \times M^2)$ |

---

## 🏷️ Topic Tags
- `Matrix`
- `Dynamic Programming`
- `3D DP`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../58_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../60_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
