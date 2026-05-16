# 💡 Approach — Subset Sum Reduction (Dynamic Programming)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 31.52%](https://img.shields.io/badge/Acceptance-31.52%25-blue?style=for-the-badge)
![Topics: DP](https://img.shields.io/badge/Topics-DP-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Assigning `+` or `-` to each element in an array to reach a `target` is mathematically equivalent to partitioning the array into two subsets $P$ (positive) and $M$ (negative). By solving the system of equations $\{P - M = Target, P + M = TotalSum\}$, we find that the problem reduces to counting subsets with sum $P = (TotalSum + Target) / 2$.

---

## 🔩 Step-by-Step Breakdown
1. **Mathematical Transformation:**
   - Let $P$ be the sum of elements assigned `+` and $M$ be the sum of elements assigned `-`.
   - $P + M = \sum(arr)$
   - $P - M = \text{target}$
   - $2P = \sum(arr) + \text{target} \implies P = \frac{\sum(arr) + \text{target}}{2}$.
2. **Handle Edge Cases:**
   - If $(\sum(arr) + \text{target})$ is odd, no integer solution for $P$ exists. Return 0.
   - If $\sum(arr) < |\text{target}|$, it's impossible. Return 0.
3. **Dynamic Programming (Subset Sum):**
   - Goal: Count subsets that sum to `targetSum = P`.
   - Use a 1D `dp` array where `dp[j]` stores the number of ways to reach sum `j`.
   - Initialize `dp[0] = 1`.
4. **Iterative Transition:**
   - For each element `x` in `arr`:
     - Update `dp` from `targetSum` down to `x`: `dp[j] = dp[j] + dp[j-x]`.
5. **Final Result:** Return `dp[targetSum]`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Sum["Calculate TotalSum"]
    Sum --> Logic{"(Sum + target) is EVEN \n AND Sum >= |target|?"}
    Logic -->|No| Zero[Return 0]
    Logic -->|Yes| P["P = (Sum + target) / 2"]
    P --> Init["dp[P + 1] = {0} \n dp[0] = 1"]
    Init --> Loop["For each x in arr"]
    Loop --> Inner["For j = P down to x"]
    Inner --> Update["dp[j] += dp[j - x]"]
    Update --> Inner
    Inner -->|Done| Loop
    Loop -->|Done| End([Return dp[P]])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \times \text{targetSum})$ - Standard subset sum counting. |
| **Space Complexity** | $O(\text{targetSum})$ - Optimized with 1D space. |

---

> *"The power of signs (+) and (-) is just a partition of unity."*

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
