# [18. The Painter's Partition Problem-II](https://www.geeksforgeeks.org/problems/painters-partition-problem-140625/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` where each element denotes the length of a board, and an integer `k` representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board. Each painter can only paint a **contiguous sequence** of boards. Determine the minimum amount of time required to paint all boards.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [5, 10, 30, 20, 15], k = 3`
> **Output:** `35`
> **Explanation:** Optimal assignment: `[5, 10]`, `[30]`, `[20, 15]`. Max time = 35.

**Example 2:**
> **Input:** `arr[] = [10, 20, 30, 40], k = 2`
> **Output:** `60`
> **Explanation:** Assignment: `[10, 20, 30]`, `[40]`. Max time = 60.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^4$
- $1 \le k \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log(\sum arr))$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Binary Search`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../17_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../19_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
