# [21. Maximum number of overlapping Intervals](https://www.geeksforgeeks.org/problems/intersecting-intervals/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 33.28%](https://img.shields.io/badge/Acceptance-33.28%25-blue?style=for-the-badge)
![Submissions: 6K+](https://img.shields.io/badge/Submissions-6K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an array of intervals `arr[][]`, where each interval is represented by two integers `[start, end]` (inclusive). Return the maximum number of intervals that overlap at any single point in time.

## 📌 Examples

**Example 1:**
> **Input:** `arr[][] = [[1, 2], [2, 4], [3, 6]]`
> **Output:** `2`
> **Explanation:** At time $t=2$, intervals $[1, 2]$ and $[2, 4]$ overlap. At $t=3$ or $t=4$, $[2, 4]$ and $[3, 6]$ overlap. Max is 2.

**Example 2:**
> **Input:** `arr[][] = [[1, 8], [2, 5], [5, 6], [3, 7]]`
> **Output:** `4`
> **Explanation:** All four intervals overlap at $t=5$.

---

## 📐 Constraints
- $2 \le arr.size() \le 2 \times 10^4$
- $1 \le arr[i][0] < arr[i][1] \le 4 \times 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Prefix Sum`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../20_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../22_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
