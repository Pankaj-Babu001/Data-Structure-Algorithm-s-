# [30. Isomorphic Strings](https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 34.21%](https://img.shields.io/badge/Acceptance-34.21%25-blue?style=for-the-badge)
![Submissions: 218K+](https://img.shields.io/badge/Submissions-218K%2B-brightgreen?style=for-the-badge)
![Topics: Strings](https://img.shields.io/badge/Topics-Strings-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given two strings `s1` and `s2` of equal length, check if they are **isomorphic** to each other. Two strings are isomorphic if the characters in `s1` can be replaced to get `s2`.

Each character must be completely mapped to another character while maintaining the order. A character can map to itself, but no two characters can map to the same character.

## 📌 Examples

**Example 1:**
> **Input:** `s1 = "aab"`, `s2 = "xxy"`
> **Output:** `true`
> **Explanation:** `a` maps to `x`, and `b` maps to `y`.

**Example 2:**
> **Input:** `s1 = "aab"`, `s2 = "xyz"`
> **Output:** `false`
> **Explanation:** The character `a` in `s1` maps to both `x` and `y` in `s2`, which is not allowed.

**Example 3:**
> **Input:** `s1 = "abc"`, `s2 = "xxz"`
> **Output:** `false`
> **Explanation:** Both `a` and `b` map to the same character `x`.

---

## 📐 Constraints
- $1 \le s1.size(), s2.size() \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Strings`
- `Hashing`
- `Two-Way Mapping`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../29_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../31_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
