# [53. Number of BST From Array](https://www.geeksforgeeks.org/problems/number-of-bst-from-array/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 72.07%](https://img.shields.io/badge/Acceptance-72.07%25-blue?style=for-the-badge)
![Submissions: 11K+](https://img.shields.io/badge/Submissions-11K%2B-brightgreen?style=for-the-badge)
![Topics: BST](https://img.shields.io/badge/Topics-BST-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an integer array `arr[]` containing distinct elements. Your task is to return an array where the $i^{th}$ element denotes the number of unique BSTs formed when `arr[i]` is chosen as the root of a tree containing all elements in `arr`.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [2, 1, 3]`
> **Output:** `[1, 2, 2]`
> **Explanation:**
> - Root 2: Left = {1}, Right = {3}. Ways = $C_1 \times C_1 = 1 \times 1 = 1$.
> - Root 1: Left = {}, Right = {2, 3}. Ways = $C_0 \times C_2 = 1 \times 2 = 2$.
> - Root 3: Left = {1, 2}, Right = {}. Ways = $C_2 \times C_0 = 2 \times 1 = 2$.

**Example 2:**
> **Input:** `arr[] = [2, 1]`
> **Output:** `[1, 1]`

---

## 📐 Constraints
- $1 \le arr.size() \le 6$
- $1 \le arr[i] \le 15$
- Elements are distinct.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N^2)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `BST`
- `Combinatorics`
- `Dynamic Programming`
- `Catalan Numbers`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../52_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../54_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
