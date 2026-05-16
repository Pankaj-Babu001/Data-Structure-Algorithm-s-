# [37. Longest K unique characters substring](https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 34.85%](https://img.shields.io/badge/Acceptance-34.85%25-blue?style=for-the-badge)
![Submissions: 180K+](https://img.shields.io/badge/Submissions-180K%2B-brightgreen?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a string `s` and an integer `k`, find the length of the **longest substring** that contains exactly `k` distinct characters. If no such substring exists, return `-1`.

## 📌 Examples

**Example 1:**
> **Input:** `s = "aabacbebebe", k = 3`
> **Output:** `7`
> **Explanation:** The longest substring with exactly 3 unique characters is `"cbebebe"` (contains 'c', 'b', 'e').

**Example 2:**
> **Input:** `s = "aaaa", k = 2`
> **Output:** `-1`
> **Explanation:** There's no substring with 2 distinct characters.

---

## 📐 Constraints
- $1 \le s.length() \le 10^5$
- $1 \le k \le 26$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Strings`
- `Sliding Window`
- `Hashing`
- `Two Pointers`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../36_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../38_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
