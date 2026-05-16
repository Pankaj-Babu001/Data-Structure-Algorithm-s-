# [26. Count Subarrays with given XOR](https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 58.86%](https://img.shields.io/badge/Acceptance-58.86%25-blue?style=for-the-badge)
![Submissions: 84K+](https://img.shields.io/badge/Submissions-84K%2B-brightgreen?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array of integers `arr[]` and a number `k`, count the number of contiguous subarrays whose elements, when XORed together, result in `k`.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [4, 2, 2, 6, 4], k = 6`
> **Output:** `4`
> **Explanation:** The subarrays are `[4, 2]`, `[4, 2, 2, 6, 4]`, `[2, 2, 6]`, and `[6]`.

**Example 2:**
> **Input:** `arr[] = [5, 6, 7, 8, 9], k = 5`
> **Output:** `2`
> **Explanation:** The subarrays are `[5]` and `[5, 6, 7, 8, 9]`.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $0 \le arr[i], k \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Prefix XOR`
- `Hash Map`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../25_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../27_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
