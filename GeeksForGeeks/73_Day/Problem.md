# [73. Sorted subsequence of size 3](https://www.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 25.95%](https://img.shields.io/badge/Acceptance-25.95%25-blue?style=for-the-badge)
![Submissions: 85K+](https://img.shields.io/badge/Submissions-85K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]`, find any subsequence of three elements such that `arr[i] < arr[j] < arr[k]` where `i < j < k`. 

If such a subsequence exists, return the three elements as an array. Otherwise, return an empty array.

## 📌 Examples

**Example 1:**
> **Input:** `arr = [12, 11, 10, 5, 6, 2, 30]`
> **Output:** `[5, 6, 30]` (Valid)
> **Explanation:** 5 < 6 < 30 and they appear in sequence.

**Example 2:**
> **Input:** `arr = [4, 3, 2, 1]`
> **Output:** `[]`
> **Explanation:** No such subsequence exists.

---

## 📐 Constraints
- $1 \le \text{arr.size()} \le 10^5$
- $1 \le arr[i] \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Dynamic Programming`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../72_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../74_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
