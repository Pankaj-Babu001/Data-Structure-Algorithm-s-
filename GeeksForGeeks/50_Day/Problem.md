# [50. Distribute Candies in a Binary Tree](https://www.geeksforgeeks.org/problems/distribute-candies-in-a-binary-tree/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 63.24%](https://img.shields.io/badge/Acceptance-63.24%25-blue?style=for-the-badge)
![Submissions: 38K+](https://img.shields.io/badge/Submissions-38K%2B-brightgreen?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given the root of a binary tree with `n` nodes, where each node contains some number of candies. The total number of candies across all nodes is exactly `n`. In one move, you can transfer one candy between two adjacent nodes (parent and child).

Find the **minimum number of moves** required to ensure that every node in the tree has exactly one candy.

## 📌 Examples

**Example 1:**
> **Input:** `root = [5, 0, 0, N, N, 0, 0]`
> **Output:** `6`
> **Explanation:** 
> The root has 5 candies and needs to distribute 4 to its descendants.
> Moves: 1 to left, 1 to right, then 2 more through the right to its children. Total moves = 6.

**Example 2:**
> **Input:** `root = [2, 0, 0, N, N, 3, 0]`
> **Output:** `4`

---

## 📐 Constraints
- $1 \le n \le 3 \times 10^3$
- $0 \le \text{Node.data} \le n$
- The sum of all node data is exactly $n$.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(H)$ |

---

## 🏷️ Topic Tags
- `Tree`
- `Greedy`
- `Depth-First Search`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../49_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../51_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
