# [48. K Sum Paths](https://www.geeksforgeeks.org/problems/k-sum-paths/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 44.73%](https://img.shields.io/badge/Acceptance-44.73%25-blue?style=for-the-badge)
![Submissions: 138K+](https://img.shields.io/badge/Submissions-138K%2B-brightgreen?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given the root of a binary tree and an integer `k`, determine the number of **downward-only paths** where the sum of node values in the path equals `k`.

A path can start and end at any node within the tree but must always move downward (from parent to child).

## 📌 Examples

**Example 1:**
> **Input:** `root = [8, 4, 5, 3, 2, N, 2, 3, -2, N, 1]`, `k = 7`
> **Output:** `3`
> **Explanation:** The paths that sum to 7 are:
> 1. `[4, 3]`
> 2. `[5, 2]`
> 3. `[4, 2, 1]`

**Example 2:**
> **Input:** `root = [1, 2, 3]`, `k = 3`
> **Output:** `2`
> **Explanation:** Paths summing to 3: `[1, 2]` and `[3]`.

---

## 📐 Constraints
- $1 \le \text{number of nodes} \le 10^4$
- $-100 \le \text{node value} \le 100$
- $-10^9 \le k \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(H)$ |

---

## 🏷️ Topic Tags
- `Tree`
- `Backtracking`
- `Hashing`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../47_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../49_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
