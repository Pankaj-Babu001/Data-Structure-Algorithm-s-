# [61. Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 36.76%](https://img.shields.io/badge/Acceptance-36.76%25-blue?style=for-the-badge)
![Submissions: 228K+](https://img.shields.io/badge/Submissions-228K%2B-brightgreen?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` and an integer `diff`, count the number of ways to partition the array into two subsets `S1` and `S2` such that:
- `S1 + S2 = TotalSum(arr)`
- `S1 - S2 = diff`

Return the number of such partitions modulo $10^9 + 7$.

## 📌 Examples

**Example 1:**
> **Input:** `arr = [5, 2, 6, 4], diff = 3`
> **Output:** `1`
> **Explanation:** Only partition is `[6, 4]` and `[5, 2]`. Difference: `(10) - (7) = 3`.

**Example 2:**
> **Input:** `arr = [1, 1, 1, 1], diff = 0`
> **Output:** `6`
> **Explanation:** We can choose any 2 ones to form a subset of sum 2. $\binom{4}{2} = 6$.

---

## 📐 Constraints
- $1 \le \text{arr.size()} \le 50$
- $0 \le \text{diff} \le 50$
- $0 \le \text{arr[i]} \le 6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times \text{target})$ | $O(\text{target})$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Dynamic Programming`
- `Subsets`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../60_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../62_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
