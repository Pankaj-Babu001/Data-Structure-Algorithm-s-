# [57. Minimum Height Roots](https://www.geeksforgeeks.org/problems/minimum-height-roots/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 68.59%](https://img.shields.io/badge/Acceptance-68.59%25-blue?style=for-the-badge)
![Submissions: 1K+](https://img.shields.io/badge/Submissions-1K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an undirected graph with tree characteristics (connected and acyclic) with `V` vertices. Your task is to find all vertices that, when chosen as the root, result in the **minimum possible height** of the tree.

**Note:** The height is the maximum number of edges on the path from the root to any leaf.

## 📌 Examples

**Example 1:**
> **Input:** `V = 5, E = 4, edges = [[0, 2], [1, 2], [2, 3], [3, 4]]`
> **Output:** `[2, 3]`
> **Explanation:** Rooting at 2 or 3 gives height 2.

**Example 2:**
> **Input:** `V = 4, E = 3, edges = [[0, 1], [0, 2], [0, 3]]`
> **Output:** `[0]`
> **Explanation:** Only root 0 gives the minimum height (1).

---

## 📐 Constraints
- $1 \le V \le 10^5$
- $0 \le E \le V-1$
- $0 \le \text{edges}[i][0], \text{edges}[i][1] \le V-1$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(V)$ | $O(V)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `Breadth-First Search`
- `Centroid Finding`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../56_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../58_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
