# [56. Course Schedule I](https://www.geeksforgeeks.org/problems/course-schedule-i/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 80.45%](https://img.shields.io/badge/Acceptance-80.45%25-blue?style=for-the-badge)
![Submissions: 4K+](https://img.shields.io/badge/Submissions-4K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
There are a total of `n` courses you have to take, labeled from `0` to `n - 1`. You are given a 2D array `prerequisites[][]` where `prerequisites[i] = [x, y]` indicates that to take course `x`, you must first take course `y`.

Determine if it is possible for you to finish all courses. Return `true` if you can, and `false` otherwise.

## 📌 Examples

**Example 1:**
> **Input:** `n = 4, prerequisites = [[2, 0], [2, 1], [3, 2]]`
> **Output:** `true`
> **Explanation:** 
> - To take 2, finish 0 and 1.
> - To take 3, finish 2.
> - Possible order: `[0, 1, 2, 3]`.

**Example 2:**
> **Input:** `n = 3, prerequisites = [[0, 1], [1, 2], [2, 0]]`
> **Output:** `false`
> **Explanation:** There is a circular dependency: `0 -> 1 -> 2 -> 0`.

---

## 📐 Constraints
- $1 \le n \le 10^4$
- $0 \le \text{prerequisites.size()} \le 10^5$
- $0 \le \text{prerequisites}[i][0], \text{prerequisites}[i][1] < n$
- All prerequisite pairs are unique.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(V + E)$ | $O(V + E)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `Topological Sort`
- `Breadth-First Search`
- `Cycle Detection`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../55_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../57_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
