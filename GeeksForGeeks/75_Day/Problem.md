# [75. Toeplitz Matrix](https://www.geeksforgeeks.org/problems/toeplitz-matrix/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 49.05%](https://img.shields.io/badge/Acceptance-49.05%25-blue?style=for-the-badge)
![Submissions: 43K+](https://img.shields.io/badge/Submissions-43K%2B-brightgreen?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
A **Toeplitz matrix** (also known as a diagonal-constant matrix) is a matrix in which every descending diagonal from left to right contains the same element.

Given a rectangular matrix `mat`, determine whether it is a Toeplitz matrix or not.

## 📌 Examples

**Example 1:**
> **Input:** 
> ```
> mat = [[6, 7, 8],
>        [4, 6, 7],
>        [1, 4, 6]]
> ```
> **Output:** `true`
> **Explanation:** 
> - Diagonal 1: 6 → 6 → 6
> - Diagonal 2: 7 → 7
> - Diagonal 3: 4 → 4
> - All are constant.

**Example 2:**
> **Input:** 
> ```
> mat = [[6, 3, 8],
>        [4, 9, 7],
>        [1, 4, 6]]
> ```
> **Output:** `false`
> **Explanation:** The primary diagonal elements are [6, 9, 6], which are not identical.

---

## 📐 Constraints
- $1 \le mat.size(), mat[0].size() \le 40$
- $0 \le mat[i][j] \le 100$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times M)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Matrix`
- `Traversal`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../74_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../76_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
