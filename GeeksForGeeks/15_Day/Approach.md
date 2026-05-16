# 💡 Approach — Ternary Search on Convex Cost Function

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Ternary Search](https://img.shields.io/badge/Topics-Ternary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The total cost function $f(h) = \sum |height_i - h| \times cost_i$ is **convex** (U-shaped). This allows us to use **Ternary Search** to find the minimum cost by evaluating midpoints and narrowing the search space to the optimal target height.

---

## 🔩 Step-by-Step Breakdown
1. **Range:** The optimal height must lie between `min(heights)` and `max(heights)`.
2. **Ternary Search:**
   - Define midpoints $m1$ and $m2$ at $1/3$ and $2/3$ of the current range.
   - Calculate total costs $C1$ and $C2$ for heights $m1$ and $m2$.
   - If $C1 < C2$: The minimum is closer to $m1$ or the left; set `high = m2`.
   - Else: The minimum is closer to $m2$ or the right; set `low = m1`.
3. **Refinement:** Continue until the range is small (e.g., size 3), then evaluate the remaining points linearly to find the absolute minimum.
4. **Result:** The minimum cost found.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["low = min height, high = max height"]
    Init --> Loop{"high - low > 2"}
    Loop --> Mids["m1 = low + range/3 \n m2 = high - range/3"]
    Mids --> Costs["C1 = calcCost m1 \n C2 = calcCost m2"]
    Costs --> Comp{"C1 < C2?"}
    Comp -->|Yes| Left["high = m2"]
    Comp -->|No| Right["low = m1"]
    Left --> Loop
    Right --> Loop
    Loop -->|Done| Sweep[Evaluate costs for remaining points in range]
    Sweep --> End("[Return min cost]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log_3(\max(H)))$ - Linear cost calculation at each ternary search step. |
| **Space Complexity** | $O(1)$ - Constant space usage. |

---

> *"In a field of towers, the shortest path to balance is found by narrowing the middle."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../14_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../16_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
