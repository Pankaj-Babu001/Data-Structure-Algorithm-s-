# [60. Articulation Point - II](https://www.geeksforgeeks.org/problems/articulation-point2616/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 45%](https://img.shields.io/badge/Acceptance-45%25-blue?style=for-the-badge)
![Submissions: 40K+](https://img.shields.io/badge/Submissions-40K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an undirected graph with `V` vertices and `E` edges, find all the **Articulation Points** (Cut Vertices) in the graph. 

An **Articulation Point** is a vertex whose removal (along with its connected edges) increases the number of connected components in the graph. If no such point exists, return `{-1}`.

## 📌 Examples

**Example 1:**
> **Input:** `V = 5, edges = [[0, 1], [1, 4], [4, 3], [4, 2], [2, 3]]`
> **Output:** `[1, 4]`
> **Explanation:** Removing 1 splits the graph into {0} and {4,3,2}. Removing 4 splits it into {0,1}, {3}, and {2}.

**Example 2:**
> **Input:** `V = 4, edges = [[0, 1], [0, 2]]`
> **Output:** `[0]`

---

## 📐 Constraints
- $1 \le V, E \le 10^4$
- $0 \le u, v < V$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(V + E)$ | $O(V + E)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `Tarjan's Algorithm`
- `DFS`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../59_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../61_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
