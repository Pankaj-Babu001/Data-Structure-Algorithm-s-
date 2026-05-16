# 💡 Approach — Subset Sum Partitioning (Dynamic Programming)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 36.76%](https://img.shields.io/badge/Acceptance-36.76%25-blue?style=for-the-badge)
![Topics: DP](https://img.shields.io/badge/Topics-DP-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The problem of partitioning an array into two subsets with a specific difference $D$ can be mathematically converted into finding the number of subsets with a target sum $T = (TotalSum + D) / 2$. This transformation turns a partition problem into a classic 0/1 Knapsack-style "Subset Sum Count" problem.

---

## 🔩 Step-by-Step Breakdown
1. **Mathematical Reduction:**
   - $S1 + S2 = \text{TotalSum}$
   - $S1 - S2 = \text{diff}$
   - Adding both: $2 \times S1 = \text{TotalSum} + \text{diff} \rightarrow S1 = (\text{TotalSum} + \text{diff}) / 2$.
2. **Handle Edge Cases:**
   - If $(\text{TotalSum} + \text{diff})$ is odd, no integer solution for $S1$ exists. Return 0.
   - If $\text{TotalSum} < \text{diff}$, return 0.
3. **Dynamic Programming (Subset Sum):**
   - Goal: Count subsets that sum to `target = S1`.
   - `dp[j]` = number of ways to form sum `j`.
   - Initialize `dp[0] = 1`.
4. **Iterative Transition:**
   - For each element `x` in `arr`:
     - Update `dp` from `target` down to `x`: `dp[j] = (dp[j] + dp[j-x]) % MOD`.
5. **Final Result:** Return `dp[target]`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Sum["Calculate TotalSum"]
    Sum --> Logic{"(Sum + diff) is EVEN \n AND Sum >= diff?"}
    Logic -->|No| Zero[Return 0]
    Logic -->|Yes| Target["target = (Sum + diff) / 2"]
    Target --> Init["dp[target + 1] = {0} \n dp[0] = 1"]
    Init --> Loop["For each element 'num' in arr"]
    Loop --> Inner["For j = target down to num"]
    Inner --> Update["dp[j] = (dp[j] + dp[j - num]) % MOD"]
    Update --> Inner
    Inner -->|Done| Loop
    Loop -->|Done| End(["Return dp[target]"])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \times \text{target})$ - $N$ elements, each updating a target range. |
| **Space Complexity** | $O(\text{target})$ - Single row DP array optimization. |

---

> *"Breaking a difference into a sum is the first step to solving it with DP."*

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
