# [45. Generate IP Addresses](https://www.geeksforgeeks.org/problems/generate-ip-addresses/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 38.71%](https://img.shields.io/badge/Acceptance-38.71%25-blue?style=for-the-badge)
![Submissions: 43K+](https://img.shields.io/badge/Submissions-43K%2B-brightgreen?style=for-the-badge)
![Topics: Backtracking](https://img.shields.io/badge/Topics-Backtracking-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a string `s` containing only digits, restore it by returning all possible valid IP address combinations. A valid IP address must be in the form `A.B.C.D`, where $A, B, C, D \in [0, 255]$.

**Key Rules:**
- Each segment cannot have a leading zero unless the segment is exactly "0".
- For example, `1.1.2.11` and `0.11.21.1` are valid.
- `01.1.2.11` and `00.11.21.1` are invalid.

## 📌 Examples

**Example 1:**
> **Input:** `s = "255678166"`
> **Output:** `["25.56.78.166", "255.6.78.166", "255.67.8.166", "255.67.81.66"]`
> **Explanation:** These are all valid ways to split the digits.

**Example 2:**
> **Input:** `s = "25505011535"`
> **Output:** `[]`
> **Explanation:** No valid IP address can be formed.

---

## 📐 Constraints
- $1 \le s.length() \le 16$
- String contains only digits '0'-'9'.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(1)$ | $O(1)$ |
*(Note: Since the depth and branching factor are strictly bounded by IP rules, the complexity is constant relative to large $N$, but technically $O(3^4)$).*

---

## 🏷️ Topic Tags
- `Strings`
- `Backtracking`
- `Recursion`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../44_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../46_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
