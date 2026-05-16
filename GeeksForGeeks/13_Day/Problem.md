# [13. Find Kth Rotation](https://www.geeksforgeeks.org/problems/find-kth-rotation5407/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 60%](https://img.shields.io/badge/Acceptance-60%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an increasing sorted rotated array `arr[]` of distinct integers. The array is right-rotated `k` times. Find the value of `k`.

Rotating an array `[2, 4, 6, 9]` by `2` times results in `[6, 9, 2, 4]`.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [5, 1, 2, 3, 4]`
> **Output:** `1`
> **Explanation:** The original sorted array was `[1, 2, 3, 4, 5]`. It was rotated 1 time to the right.

**Example 2:**
> **Input:** `arr[] = [1, 2, 3, 4, 5]`
> **Output:** `0`
> **Explanation:** The array is not rotated.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^7$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(\log N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Binary Search`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../12_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../14_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
