# [10. Happiest Triplet](https://www.geeksforgeeks.org/problems/happiest-triplet2921/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 20K+](https://img.shields.io/badge/Submissions-20K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given three arrays `a[]`, `b[]`, and `c[]` of the same size, find a triplet `(x, y, z)` such that one element is chosen from each array and the difference between the `maximum` and `minimum` of the triplet is minimized. 

If multiple triplets have the same minimum difference, choose the one with the **smallest sum**. Return the triplet in **decreasing order**.

## 📌 Examples

**Example 1:**
> **Input:** `a[] = [5, 2, 8]`, `b[] = [10, 7, 12]`, `c[] = [9, 14, 6]`
> **Output:** `[7, 6, 5]`
> **Explanation:** The triplet `[5, 7, 6]` has a difference of $7 - 5 = 2$, which is the minimum. Sorted: `[7, 6, 5]`.

**Example 2:**
> **Input:** `a[] = [15, 12, 18, 9]`, `b[] = [10, 17, 13, 8]`, `c[] = [14, 16, 11, 5]`
> **Output:** `[11, 10, 9]`

---

## 📐 Constraints
- $1 \le a.size(), b.size(), c.size() \le 10^5$
- $1 \le a[i], b[i], c[i] \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Two Pointers`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../09_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../11_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
