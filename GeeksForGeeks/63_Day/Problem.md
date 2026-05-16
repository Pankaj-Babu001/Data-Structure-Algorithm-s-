# [63. Buy Stock with Transaction Fee](https://www.geeksforgeeks.org/problems/buy-stock-with-transaction-fee/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55%](https://img.shields.io/badge/Acceptance-55%25-blue?style=for-the-badge)
![Submissions: 50K+](https://img.shields.io/badge/Submissions-50K%2B-brightgreen?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given an array `prices[]` where `prices[i]` is the price of a stock on the $i$-th day, and an integer `fee` representing a transaction fee. You may complete as many transactions as you like (buy one and sell one share of the stock multiple times), but you must pay the transaction fee for each transaction.

**Note:** You must sell the stock before you can buy again.

## 📌 Examples

**Example 1:**
> **Input:** `prices = [6, 1, 7, 2, 8, 4], fee = 2`
> **Output:** `8`
> **Explanation:** 
> - Buy on day 2 (price 1), sell on day 3 (price 7). Profit: `7 - 1 - 2 = 4`.
> - Buy on day 4 (price 2), sell on day 5 (price 8). Profit: `8 - 2 - 2 = 4`.
> Total Profit: 8.

**Example 2:**
> **Input:** `prices = [7, 1, 5, 3, 6, 4], fee = 1`
> **Output:** `5`

---

## 📐 Constraints
- $1 \le prices.size() \le 10^6$
- $1 \le prices[i] \le 10^6$
- $0 \le fee \le 10^6$

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
<a href="../62_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../64_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
