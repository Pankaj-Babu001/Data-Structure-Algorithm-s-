# [15. Equalize the Towers](https://www.geeksforgeeks.org/problems/equalize-the-towers1832/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 20K+](https://img.shields.io/badge/Submissions-20K%2B-brightgreen?style=for-the-badge)
![Topics: Ternary Search](https://img.shields.io/badge/Topics-Ternary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an array `heights[]` of tower heights and an array `cost[]` where `cost[i]` is the cost to change the height of tower `i` by 1 unit. Find the minimum cost to make all towers the same height.

## 📌 Examples

**Example 1:**
> **Input:** `heights[] = [1, 2, 3]`, `cost[] = [10, 100, 1000]`
> **Output:** `120`
> **Explanation:** Equalizing all towers to height `3` costs: $|1-3|\times 10 + |2-3|\times 100 + |3-3|\times 1000 = 20 + 100 + 0 = 120$. This is the minimum.

**Example 2:**
> **Input:** `heights[] = [7, 1, 5]`, `cost[] = [1, 1, 1]`
> **Output:** `6`
> **Explanation:** Setting all towers to height `5` costs: $|7-5|\times 1 + |1-5|\times 1 + |5-5|\times 1 = 2 + 4 + 0 = 6$.

---

## 📐 Constraints
- $1 \le heights.size() = cost.size() \le 10^5$
- $1 \le heights[i] \le 10^4$
- $1 \le cost[i] \le 10^3$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log(\max(H)))$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Ternary Search`
- `Mathematical`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../14_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../16_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
