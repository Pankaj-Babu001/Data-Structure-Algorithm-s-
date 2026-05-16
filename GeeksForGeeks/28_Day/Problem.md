# [28. Longest Span in two Binary Arrays](https://www.geeksforgeeks.org/problems/longest-span-with-same-sum-in-two-binary-arrays5142/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 48.22%](https://img.shields.io/badge/Acceptance-48.22%25-blue?style=for-the-badge)
![Submissions: 29K+](https://img.shields.io/badge/Submissions-29K%2B-brightgreen?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given two binary arrays `a1[]` and `a2[]` of equal length $N$, find the length of the **longest common span** $[i, j]$ such that the sum of elements in `a1[i...j]` is equal to the sum of elements in `a2[i...j]`.

## 📌 Examples

**Example 1:**
> **Input:** `a1[] = [0, 1, 0, 0, 0, 0], a2[] = [1, 0, 1, 0, 0, 1]`
> **Output:** `4`
> **Explanation:** The longest common span is from index 1 to 4: `a1[1..4] = [1, 0, 0, 0]` (sum 1), `a2[1..4] = [0, 1, 0, 0]` (sum 1).

**Example 2:**
> **Input:** `a1[] = [0, 1, 0, 1, 1, 1, 1], a2[] = [1, 1, 1, 1, 1, 0, 1]`
> **Output:** `6`
> **Explanation:** The longest span is from index 1 to 6.

---

## 📐 Constraints
- $1 \le a1.size() = a2.size() \le 10^6$
- $0 \le a1[i], a2[i] \le 1$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Prefix Sum`
- `Hash Map`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../27_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../29_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
