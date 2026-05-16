# [20. Meeting Rooms](https://www.geeksforgeeks.org/problems/attend-all-meetings/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 65.12%](https://img.shields.io/badge/Acceptance-65.12%25-blue?style=for-the-badge)
![Submissions: 31K+](https://img.shields.io/badge/Submissions-31K%2B-brightgreen?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a 2D array `arr[][]` where `arr[i][0]` is the start time and `arr[i][1]` is the end time of the `i`-th meeting. Determine if it is possible for one person to attend all meetings. A person can attend a meeting if its start time is greater than or equal to the previous meeting's end time.

## 📌 Examples

**Example 1:**
> **Input:** `arr[][] = [[1, 4], [10, 15], [7, 10]]`
> **Output:** `true`
> **Explanation:** After sorting: `[1, 4], [7, 10], [10, 15]`. No overlaps exist.

**Example 2:**
> **Input:** `arr[][] = [[2, 4], [9, 12], [6, 10]]`
> **Output:** `false`
> **Explanation:** After sorting: `[2, 4], [6, 10], [9, 12]`. The second and third meetings overlap ($9 < 10$).

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $0 \le arr[i][j] \le 2 \times 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../19_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../21_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
