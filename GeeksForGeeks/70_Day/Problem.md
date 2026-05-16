# [70. Stable Marriage Problem](https://www.geeksforgeeks.org/problems/stable-marriage-problem/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 71.79%](https://img.shields.io/badge/Acceptance-71.79%25-blue?style=for-the-badge)
![Submissions: 1K+](https://img.shields.io/badge/Submissions-1K%2B-brightgreen?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given two $N \times N$ matrices representing the preference lists of $N$ men and $N$ women. Each person ranks all individuals of the opposite gender in order of preference.

A matching is **stable** if there is no pair $(M, W)$ such that both prefer each other over their current partners. Find a stable matching and return an array where the $i$-th element is the woman matched with the $i$-th man.

## 📌 Examples

**Example 1:**
> **Input:** `n = 2, men = [[0, 1], [0, 1]], women = [[0, 1], [0, 1]]`
> **Output:** `[0, 1]`
> **Explanation:** Man 0 and Woman 0 both rank each other as first choice.

**Example 2:**
> **Input:** `n = 3, men = [[0, 1, 2], [0, 1, 2], [0, 1, 2]], women = [[2, 1, 0], [2, 1, 0], [2, 1, 0]]`
> **Output:** `[2, 1, 0]`

---

## 📐 Constraints
- $2 \le N \le 1000$
- All preference lists contain all individuals from $0$ to $N-1$.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N^2)$ | $O(N^2)$ |

---

## 🏷️ Topic Tags
- `Greedy`
- `Gale-Shapley`
- `Matching`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../69_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../71_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
