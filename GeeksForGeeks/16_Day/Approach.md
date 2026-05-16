# 💡 Approach — Binary Search on Answer + Difference Array

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 62.86%](https://img.shields.io/badge/Acceptance-62.86%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** "Maximize the minimum" problems are almost always solved by **Binary Search on the Answer**. If we can achieve a minimum height $H$, we can achieve any height $< H$. We use a **Difference Array** to greedily apply watering in $O(N)$ during the check.

---

## 🔩 Step-by-Step Breakdown
1. **Binary Search Range:** The answer lies between the current minimum height and `max(arr) + k`.
2. **Greedy Check Function:**
   - Iterate through flowers from left to right.
   - Maintain a `currentWater` effect using a difference array to track when watering windows end.
   - If `arr[i] + currentWater < target`:
     - We must water the next $W$ flowers starting from $i$ to cover this deficiency.
     - Calculate `needed = target - (arr[i] + currentWater)`.
     - If `needed > k_remaining`, return `false`.
     - Update `currentWater`, `k_remaining`, and record the end of this effect at `i + W`.
3. **Optimized Updates:** Use a difference array `diff[i+w] -= needed` to handle range additions efficiently.
4. **Result:** The maximum `target` that returns `true`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["low = min_h, high = max_h + k"]
    Init --> Loop{"low <= high"}
    Loop --> Mid["mid = low + high-low / 2"]
    Mid --> Check[Greedy Check with Difference Array]
    Check -->|Possible| Save["ans = mid \n low = mid + 1"]
    Check -->|Impossible| High["high = mid - 1"]
    Save --> Loop
    High --> Loop
    Loop -->|Done| End("[Return ans]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log(\text{MaxHeight}))$ - Binary search over possible heights with linear greedy pass. |
| **Space Complexity** | $O(N)$ - Difference array to manage watering effects. |

---

> *"The growth of one flower is a local event; the growth of a row is a strategic campaign."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../15_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../17_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
