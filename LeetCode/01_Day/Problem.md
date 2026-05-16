# [368. Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/description/)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 43.1%](https://img.shields.io/badge/Acceptance-43.1%25-orange?style=for-the-badge)
![Submissions: N/A](https://img.shields.io/badge/Submissions-N/A-lightgrey?style=for-the-badge)
![Topic: Dynamic Programming](https://img.shields.io/badge/Topic-Dynamic%20Programming-blue?style=for-the-badge)
![Topic: Math](https://img.shields.io/badge/Topic-Math-blueviolet?style=for-the-badge)
![Topic: Sorting](https://img.shields.io/badge/Topic-Sorting-yellow?style=for-the-badge)

---

## 🧩 Problem Description

## Problem Statement

Given a set of **distinct** positive integers `nums`, return the largest subset `answer` such that every pair `(answer[i], answer[j])` of elements in this subset satisfies:
- `answer[i] % answer[j] == 0`, or
- `answer[j] % answer[i] == 0`

If there are multiple solutions, return any of them.

---

---

## 📌 Examples

### Example 1
> **Input**: `nums = [1, 2, 3]`  
> **Output**: `[1, 2]`  
> **Explanation**: `[1, 3]` is also a valid answer.

### Example 2
> **Input**: `nums = [1, 2, 4, 8]`  
> **Output**: `[1, 2, 4, 8]`

---

---

## 📐 Constraints

- $1 \le \text{nums.length} \le 1000$
- $1 \le \text{nums}[i] \le 2 \times 10^9$
- All the integers in `nums` are **unique**.

---

<div align="center">

---

## 🏷️ Topic Tags

`Dynamic Programming` &nbsp; `Math` &nbsp; `Sorting`

---
<div align="center">
<h2>Happy Coding! 🚀</h2>

<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../02_Day/Problem.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
