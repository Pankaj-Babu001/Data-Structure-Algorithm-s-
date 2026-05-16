# [55. Length of Longest Cycle in a Graph](https://www.geeksforgeeks.org/problems/length-of-longest-cycle-in-a-graph/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 51.24%](https://img.shields.io/badge/Acceptance-51.24%25-blue?style=for-the-badge)
![Submissions: 1K+](https://img.shields.io/badge/Submissions-1K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a directed graph with `V` vertices and `E` edges. Each vertex has at most one outgoing edge. Find the length of the **longest cycle** present in the graph. If no cycle exists, return `-1`.

## 📌 Examples

**Example 1:**
> **Input:** `V = 7, edges = [[0, 5], [1, 0], [2, 4], [3, 1], [4, 6], [5, 6], [6, 3]]`
> **Output:** `5`
> **Explanation:** The longest cycle is `0 -> 5 -> 6 -> 3 -> 1 -> 0`.

**Example 2:**
> **Input:** `V = 8, edges = [[0, 1], [1, 2], [2, 3], [3, 0], [4, 1], [5, 4], [6, 2], [7, 6]]`
> **Output:** `4`
> **Explanation:** The longest cycle is `0 -> 1 -> 2 -> 3 -> 0`.

---

## 📐 Constraints
- $1 \le V, E \le 10^4$
- $0 \le \text{edges}[i][0], \text{edges}[i][1] < V$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(V)$ | $O(V)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `DFS`
- `Cycle Detection`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../54_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../56_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
