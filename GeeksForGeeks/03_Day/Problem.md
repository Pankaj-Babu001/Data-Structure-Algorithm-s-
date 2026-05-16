# [03. Interleave the First Half of the Queue with Second Half](https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|
</div>

---
## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 62.41%](https://img.shields.io/badge/Acceptance-62.41%25-blue?style=for-the-badge)
![Submissions: 30K+](https://img.shields.io/badge/Submissions-30K%2B-brightgreen?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

---
## 🧩 Problem Description
Given a queue `q[]` of even size. Your task is to rearrange the queue by interleaving its first half with the second half.

Interleaving is the process of mixing two sequences by alternating their elements while preserving their relative order. For example, if the first half is $[a, b]$ and the second half is $[c, d]$, the interleaved result is $[a, c, b, d]$.

## 📌 Examples

**Example 1:**
> **Input:** `q[] = [2, 4, 3, 1]`
> **Output:** `[2, 3, 4, 1]`
> **Explanation:** First half: `[2, 4]`, Second half: `[3, 1]`. Interleaved: `[2, 3, 4, 1]`.

**Example 2:**
> **Input:** `q[] = [3, 5]`
> **Output:** `[3, 5]`
> **Explanation:** First half: `[3]`, Second half: `[5]`. Interleaved: `[3, 5]`.

---

## 📐 Constraints
- $1 \le queue.size() \le 10^3$
- $1 \le queue[i] \le 10^5$
- The size of the queue is always even.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Queue`
- `Stack`
- `Data Structures`
- `Algorithms`

---
<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../02_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../04_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
