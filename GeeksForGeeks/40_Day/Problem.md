# [40. Pythagorean Triplet](https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 24.77%](https://img.shields.io/badge/Acceptance-24.77%25-blue?style=for-the-badge)
![Submissions: 200K+](https://img.shields.io/badge/Submissions-200K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]`, determine if there exists a triplet $(a, b, c)$ such that $a^2 + b^2 = c^2$. The elements $a$, $b$, and $c$ must be at different indices in the array.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [3, 2, 4, 6, 5]`
> **Output:** `true`
> **Explanation:** $3^2 + 4^2 = 5^2$ ($9 + 16 = 25$).

**Example 2:**
> **Input:** `arr[] = [3, 8, 5]`
> **Output:** `false`
> **Explanation:** No Pythagorean triplet exists.

**Example 3:**
> **Input:** `arr[] = [1, 1, 1]`
> **Output:** `false`

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^3$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(V^2)$ where $V = \max(arr[i])$ | $O(V)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Mathematical`
- `Hashing`
- `Two Pointers`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../39_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../41_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
