# [19. Chocolate Distribution Problem](https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 200K+](https://img.shields.io/badge/Submissions-200K%2B-brightgreen?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]` where each value represents the number of chocolates in a packet and `m` students. Distribute the packets such that:
1. Each student gets exactly one packet.
2. The difference between the maximum and minimum number of chocolates given to students is **minimized**.

## 📌 Examples

**Example 1:**
> **Input:** `arr = [3, 4, 1, 9, 56, 7, 9, 12], m = 5`
> **Output:** `6`
> **Explanation:** Choosing packets `[3, 4, 7, 9, 9]`. Difference = $9 - 3 = 6$.

**Example 2:**
> **Input:** `arr = [7, 3, 2, 4, 9, 12, 56], m = 3`
> **Output:** `2`
> **Explanation:** Choosing packets `[2, 3, 4]`. Difference = $4 - 2 = 2$.

---

## 📐 Constraints
- $1 \le m \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../18_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../20_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
