# [05. Maximum of all subarrays of size k](https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 35%](https://img.shields.io/badge/Acceptance-35%25-blue?style=for-the-badge)
![Submissions: 200K+](https://img.shields.io/badge/Submissions-200K%2B-brightgreen?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` of positive integers and an integer `k`, find the maximum value for each contiguous subarray of size `k`. Return an array of maximum values corresponding to each contiguous subarray.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3`
> **Output:** `[3, 3, 4, 5, 5, 5, 6]`

**Example 2:**
> **Input:** `arr[] = [5, 1, 3, 4, 2], k = 1`
> **Output:** `[5, 1, 3, 4, 2]`

---

## 📐 Constraints
- $1 \le arr.size() \le 10^6$
- $1 \le k \le arr.size()$
- $0 \le arr[i] \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(K)$ |

---

## 🏷️ Topic Tags
- `Sliding Window`
- `Deque`
- `Arrays`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../04_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../06_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
