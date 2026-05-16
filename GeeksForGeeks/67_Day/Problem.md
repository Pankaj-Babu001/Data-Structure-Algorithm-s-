# [67. Gray Code](https://www.geeksforgeeks.org/problems/gray-code-1611215248/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 60.49%](https://img.shields.io/badge/Acceptance-60.49%25-blue?style=for-the-badge)
![Submissions: 15K+](https://img.shields.io/badge/Submissions-15K%2B-brightgreen?style=for-the-badge)
![Topics: Bit Manipulation](https://img.shields.io/badge/Topics-Bit%20Manipulation-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an integer `n`, generate bit patterns from `0` to $2^n - 1$ such that successive patterns differ by exactly one bit. This sequence is known as the **Gray Code**. 

The sequence must begin with `0`.

## 📌 Examples

**Example 1:**
> **Input:** `n = 2`
> **Output:** `["00", "01", "11", "10"]`
> **Explanation:** 
> - 00 and 01 differ by 1 bit.
> - 01 and 11 differ by 1 bit.
> - 11 and 10 differ by 1 bit.

**Example 2:**
> **Input:** `n = 3`
> **Output:** `["000", "001", "011", "010", "110", "111", "101", "100"]`

---

## 📐 Constraints
- $1 \le n \le 16$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times 2^N)$ | $O(N \times 2^N)$ |

---

## 🏷️ Topic Tags
- `Bit Manipulation`
- `Recursion`
- `Strings`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../66_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../68_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
