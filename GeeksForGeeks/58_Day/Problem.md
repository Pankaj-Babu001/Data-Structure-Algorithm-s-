# [58. Number of Ways to Arrive at Destination](https://www.geeksforgeeks.org/problems/number-of-ways-to-arrive-at-destination/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 25K+](https://img.shields.io/badge/Submissions-25K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an undirected weighted graph with `V` vertices. Each edge `[u, v, time]` represents a road between `u` and `v` that takes `time` minutes. Find the number of ways you can travel from node `0` to node `V - 1` in the **minimum possible time**.

Return the count modulo $10^9 + 7$.

## 📌 Examples

**Example 1:**
> **Input:** `V = 4, edges = [[0, 1, 2], [1, 2, 3], [0, 3, 5], [1, 3, 3], [2, 3, 4]]`
> **Output:** `2`
> **Explanation:** 
> - Path 1: 0 -> 3 (Time: 5)
> - Path 2: 0 -> 1 -> 3 (Time: 2+3 = 5)
> Shortest time is 5. Total ways: 2.

**Example 2:**
> **Input:** `V = 6, edges = [[0, 2, 3], [0, 4, 2], [0, 5, 7], [2, 3, 1], [2, 5, 5], [5, 3, 3], [5, 1, 4], [1, 4, 1], [4, 5, 5]]`
> **Output:** `4`

---

## 📐 Constraints
- $1 \le V \le 200$
- $V - 1 \le \text{edges.size()} \le V \times (V - 1) / 2$
- $1 \le \text{time}_i \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(E \log V)$ | $O(V + E)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `Shortest Path`
- `Dijkstra`
- `Dynamic Programming`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../57_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../59_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
