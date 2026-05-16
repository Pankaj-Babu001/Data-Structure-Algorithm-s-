# 💡 Approach — Track Minimum Price

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To maximize profit with one transaction, you must buy at the lowest point seen *before* the current day. By tracking the `minPrice` as you iterate, you can calculate the potential profit at every step and keep the maximum.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Set `minPrice` to infinity and `maxProfit` to 0.
2. **Iterate:** Traverse the array of prices day by day.
3. **Update Buy Point:** If the current price is lower than `minPrice`, update `minPrice`. This represents the best potential day to buy so far.
4. **Calculate Sell Profit:** If the current price is higher than `minPrice`, calculate `price - minPrice`. This is the profit if we sell today.
5. **Global Maximum:** Update `maxProfit` if the current potential profit is higher than any previously recorded.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init minPrice = INF, maxProfit = 0"]
    Init --> Loop{For each price in prices}
    Loop --> Buy{"price < minPrice?"}
    Buy -->|Yes| UpdateMin["minPrice = price"]
    Buy -->|No| CalcProfit["profit = price - minPrice"]
    CalcProfit --> UpdateMax["maxProfit = max maxProfit, profit"]
    UpdateMin --> Next[Next day]
    UpdateMax --> Next
    Next --> Loop
    Loop -->|Done| End("[Return maxProfit]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the prices array. |
| **Space Complexity** | $O(1)$ - Only two variables maintained. |

---

> *"The best time to buy was yesterday, but the second best time is when the price hits a new low."*

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
