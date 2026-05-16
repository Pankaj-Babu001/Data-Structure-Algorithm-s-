# [68. Target Sum](https://www.geeksforgeeks.org/problems/target-sum-1626326450/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 31.52%](https://img.shields.io/badge/Acceptance-31.52%25-blue?style=for-the-badge)
![Submissions: 37K+](https://img.shields.io/badge/Submissions-37K%2B-brightgreen?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array of integers `arr[]` and an integer `target`, you need to build an expression by adding either a `+` or a `-` before each integer in `arr[]`. 

Find the number of different ways to assign these symbols such that the evaluation of the expression equals the given `target`.

## 📌 Examples

**Example 1:**
> **Input:** `arr = [1, 1, 1, 1, 1], target = 3`
> **Output:** `5`
> **Explanation:** There are 5 ways to get sum 3:
> - `-1+1+1+1+1`
> - `+1-1+1+1+1`
> - `+1+1-1+1+1`
> - `+1+1+1-1+1`
> - `+1+1+1+1-1`

**Example 2:**
> **Input:** `arr = [1, 2, 3], target = 2`
> **Output:** `1`
> **Explanation:** Only way is `+1-2+3 = 2`.

---

## 📐 Constraints
- $1 \le \text{arr.size()} \le 50$
- $1 \le arr[i] \le 20$
- $0 \le \sum(arr) \le 1000$
- $-1000 \le \text{target} \le 1000$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \times \text{Sum})$ | $O(\text{Sum})$ |

---

## 🏷️ Topic Tags
- `Dynamic Programming`
- `Subset Sum`
- `Combinatorics`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../67_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../69_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
