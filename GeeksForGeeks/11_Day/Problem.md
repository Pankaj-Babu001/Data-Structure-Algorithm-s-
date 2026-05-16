# [11. Max sum in the configuration](https://www.geeksforgeeks.org/problems/max-sum-in-the-configuration/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an integer array `arr[]`, find the maximum value of the sum of `i * arr[i]` for all `0 <= i <= n-1`. The only operation allowed is to rotate the array (clockwise or counter-clockwise) any number of times.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [3, 1, 2, 8]`
> **Output:** `29`
> **Explanation:** After rotating, one configuration is `[3, 1, 2, 8]` itself. Sum = $0\times3 + 1\times1 + 2\times2 + 3\times8 = 29$, which is the maximum.

**Example 2:**
> **Input:** `arr[] = [1, 2, 3]`
> **Output:** `8`
> **Explanation:** Rotation `[3, 1, 2]` gives $0\times3 + 1\times1 + 2\times2 = 5$. Rotation `[2, 3, 1]` gives $0\times2 + 1\times3 + 2\times1 = 5$. Rotation `[1, 2, 3]` gives $0\times1 + 1\times2 + 2\times3 = 8$.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Mathematical`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../10_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../12_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
