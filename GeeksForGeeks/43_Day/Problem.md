# [43. Sum of subarray minimums](https://www.geeksforgeeks.org/problems/sum-of-subarray-minimum/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 46.92%](https://img.shields.io/badge/Acceptance-46.92%25-blue?style=for-the-badge)
![Submissions: 30K+](https://img.shields.io/badge/Submissions-30K%2B-brightgreen?style=for-the-badge)
![Topics: Monotonic Stack](https://img.shields.io/badge/Topics-Monotonic%20Stack-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` of positive integers, calculate the total sum of the **minimum elements** of every possible contiguous subarray. 

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [10, 20]`
> **Output:** `40`
> **Explanation:** 
> Subarrays: `[10]` (min 10), `[20]` (min 20), `[10, 20]` (min 10).
> Total sum = $10 + 20 + 10 = 40$.

**Example 2:**
> **Input:** `arr[] = [1, 2, 3, 4]`
> **Output:** `20`
> **Explanation:** The sum of minimums across all possible subarrays is 20.

**Example 3:**
> **Input:** `arr[] = [3, 1, 2, 4]`
> **Output:** `17`

---

## 📐 Constraints
- $1 \le arr.size() \le 3 \times 10^4$
- $1 \le arr[i] \le 10^3$

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
- `Mathematical`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../42_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../44_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
