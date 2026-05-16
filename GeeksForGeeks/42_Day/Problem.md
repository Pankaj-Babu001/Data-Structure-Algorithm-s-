# [42. Subarrays with First Element Minimum](https://www.geeksforgeeks.org/problems/subarrays-with-first-element-minimum/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 65.4%](https://img.shields.io/badge/Acceptance-65.4%25-blue?style=for-the-badge)
![Submissions: 15K+](https://img.shields.io/badge/Submissions-15K%2B-brightgreen?style=for-the-badge)
![Topics: Stack](https://img.shields.io/badge/Topics-Stack-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an integer array `arr[]`, count the number of subarrays where the first element is the **minimum** element of that subarray.

A subarray is valid if its first element is not greater than any other element within that contiguous part of the array.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [1, 2, 1]`
> **Output:** `5`
> **Explanation:** 
> Valid subarrays are: `[1]`, `[1, 2]`, `[1, 2, 1]`, `[2]`, `[1]`.
> Note: `[2, 1]` is invalid because the first element (2) is not the minimum.

**Example 2:**
> **Input:** `arr[] = [1, 3, 5, 2]`
> **Output:** `8`
> **Explanation:** 
> Valid subarrays are: `[1]`, `[1, 3]`, `[1, 3, 5]`, `[1, 3, 5, 2]`, `[3]`, `[3, 5]`, `[5]`, `[2]`.

---

## 📐 Constraints
- $1 \le arr.size() \le 5 \times 10^4$
- $1 \le arr[i] \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Stack`
- `Monotonic Stack`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../41_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../43_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
