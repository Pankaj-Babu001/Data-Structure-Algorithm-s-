# [62. Minimum Cost to Connect All Houses](https://www.geeksforgeeks.org/problems/minimum-cost-to-connect-all-houses-in-a-city/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 64.58%](https://img.shields.io/badge/Acceptance-64.58%25-blue?style=for-the-badge)
![Submissions: 20K+](https://img.shields.io/badge/Submissions-20K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given a 2D array `houses[][]` representing coordinates `(x, y)` of `n` houses. The cost of connecting two houses is the **Manhattan Distance** between them: $|x_i - x_j| + |y_i - y_j|$. 

Find the **minimum cost** to connect all houses such that there is a path between any two houses.

## 📌 Examples

**Example 1:**
> **Input:** `n = 5, houses = [[0, 7], [0, 9], [20, 7], [30, 7], [40, 70]]`
> **Output:** `105`
> **Explanation:** Connect houses in a chain (1-2, 1-3, 3-4, 4-5) to minimize distance.

**Example 2:**
> **Input:** `n = 4, houses = [[0, 0], [1, 1], [1, 3], [3, 0]]`
> **Output:** `7`

---

## 📐 Constraints
- $1 \le n \le 1000$
- $0 \le x_i, y_i \le 1000$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N^2)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Graphs`
- `Minimum Spanning Tree`
- `Prim's Algorithm`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../61_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../63_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
