# [07. Stock Buy and Sell – Max one Transaction Allowed](https://www.geeksforgeeks.org/problems/buy-stock-2/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 200K+](https://img.shields.io/badge/Submissions-200K%2B-brightgreen?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `prices[]` representing the stock prices on different days, find the maximum profit possible by buying and selling the stocks on different days with **at most one transaction** (1 buy + 1 sell).

**Note:** You must buy before you sell.

## 📌 Examples

**Example 1:**
> **Input:** `prices[] = [7, 10, 1, 3, 6, 9, 2]`
> **Output:** `8`
> **Explanation:** Buy on day 2 (price 1) and sell on day 5 (price 9). Profit = $9 - 1 = 8$.

**Example 2:**
> **Input:** `prices[] = [7, 6, 4, 3, 1]`
> **Output:** `0`
> **Explanation:** Prices are strictly decreasing; no profit possible.

---

## 📐 Constraints
- $1 \le prices.size() \le 10^5$
- $0 \le prices[i] \le 10^4$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Dynamic Programming`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../06_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../08_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
