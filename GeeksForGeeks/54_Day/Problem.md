# [54. Rotten Oranges](https://www.geeksforgeeks.org/problems/rotten-oranges2536/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 46.02%](https://img.shields.io/badge/Acceptance-46.02%25-blue?style=for-the-badge)
![Submissions: 201K+](https://img.shields.io/badge/Submissions-201K%2B-brightgreen?style=for-the-badge)
![Topics: BFS](https://img.shields.io/badge/Topics-BFS-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a grid `mat[][]` representing a warehouse of oranges:
- `0`: Empty cell
- `1`: Fresh orange
- `2`: Rotten orange

A rotten orange rots any adjacent fresh orange (Up, Down, Left, Right) in 1 unit of time. Determine the **minimum time** required so that all oranges become rotten. If it's impossible for some oranges to rot, return `-1`.

## 📌 Examples

**Example 1:**
> **Input:** `mat = [[2, 1, 0, 2, 1], [1, 0, 1, 2, 1], [1, 0, 0, 2, 1]]`
> **Output:** `2`
> **Explanation:** All fresh oranges are reachable within 2 units of time.

**Example 2:**
> **Input:** `mat = [[2, 1, 0, 2, 1], [0, 0, 1, 2, 1], [1, 0, 0, 2, 1]]`
> **Output:** `-1`
> **Explanation:** The orange at `(2, 0)` is isolated and can never be rotted.

---

## 📐 Constraints
- $1 \le mat.size(), mat[0].size() \le 500$
- $mat[i][j] \in \{0, 1, 2\}$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times M)$ | $O(N \times M)$ |

---

## 🏷️ Topic Tags
- `Matrix`
- `Breadth-First Search`
- `Multi-source BFS`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../53_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../55_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
