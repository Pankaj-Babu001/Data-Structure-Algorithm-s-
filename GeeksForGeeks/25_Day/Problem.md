# [25. Find H-Index](https://www.geeksforgeeks.org/problems/find-h-index--165609/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 53.4%](https://img.shields.io/badge/Acceptance-53.4%25-blue?style=for-the-badge)
![Submissions: 68K+](https://img.shields.io/badge/Submissions-68K%2B-brightgreen?style=for-the-badge)
![Topics: Counting Sort](https://img.shields.io/badge/Topics-Counting%20Sort-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `citations[]` where `citations[i]` represents the number of citations for the $i$-th paper. Calculate the **H-index**, defined as the maximum value $H$ such that the researcher has at least $H$ papers with citation counts $\ge H$.

## 📌 Examples

**Example 1:**
> **Input:** `citations[] = [3, 0, 5, 3, 0]`
> **Output:** `3`
> **Explanation:** There are 3 papers with citation counts of 3, 5, and 3, all having $\ge 3$ citations.

**Example 2:**
> **Input:** `citations[] = [5, 1, 2, 4, 1]`
> **Output:** `2`
> **Explanation:** There are 3 papers (5, 2, 4) with 2 or more citations, but only 2 papers (5, 4) with 3 or more citations. Max $H = 2$.

---

## 📐 Constraints
- $1 \le citations.size() \le 10^6$
- $0 \le citations[i] \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Bucket Sort`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../24_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../26_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
