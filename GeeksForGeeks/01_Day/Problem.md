# [01. Count Subset With Target Sum II](https://www.geeksforgeeks.org/problems/count-the-subset-with-sum-equal-to-k/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 45%](https://img.shields.io/badge/Acceptance-45%25-blue?style=for-the-badge)
![Submissions: 50K+](https://img.shields.io/badge/Submissions-50K%2B-brightgreen?style=for-the-badge)
![Topics: Meet in the Middle](https://img.shields.io/badge/Topics-Meet%20in%20the%20Middle-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` and an integer `k`, find the count of subsets whose sum is equal to `k`.

**Note:** It is guaranteed that the number of valid subsets will fit within a 32-bit integer.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [1, 3, 2]`, `k = 3`
> **Output:** `2`
> **Explanation:** The two subsets whose sum is equal to `k` are `[1, 2]` and `[3]`.

**Example 2:**
> **Input:** `arr[] = [4, 2, 3, 1, 2]`, `k = 4`
> **Output:** `3`
> **Explanation:** The three subsets whose sum is equal to `k` are `[4]`, `[2, 2]` and `[3, 1]`.

---

## 📐 Constraints
- $1 \le arr.size() \le 40$
- $-10^7 \le arr[i], k \le 10^7$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(2^{N/2} \cdot \log(2^{N/2}))$ | $O(2^{N/2})$ |

---

## 🏷️ Topic Tags
- `Meet in the Middle`
- `Recursion`
- `Bitmasking`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../../../README.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../02_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
