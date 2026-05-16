# [09. Maximize Number of 1's](https://www.geeksforgeeks.org/problems/maximize-number-of-1s0905/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a binary array `arr[]` and an integer `k`, find the maximum number of consecutive `1`s that can be obtained by flipping at most `k` `0`s to `1`s.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [1, 0, 1], k = 1`
> **Output:** `3`
> **Explanation:** Flip the 0 at index 1 to get `[1, 1, 1]`.

**Example 2:**
> **Input:** `arr[] = [1, 0, 0, 1, 0, 1, 0, 1], k = 2`
> **Output:** `5`
> **Explanation:** Flip 0s at indices 4 and 6 to get `[1, 1, 1, 1, 1]` from index 3 to 7.

**Example 3:**
> **Input:** `arr[] = [1, 1], k = 2`
> **Output:** `2`

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $0 \le k \le arr.size()$
- $0 \le arr[i] \le 1$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sliding Window`
- `Two Pointers`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../08_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../10_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
