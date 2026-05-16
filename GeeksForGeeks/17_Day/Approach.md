# 💡 Approach — Binary Search on Monotonic Difference Function

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 36.73%](https://img.shields.io/badge/Acceptance-36.73%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The function $f(x) = x - \text{sumDigits}(x)$ is **non-decreasing**. If a number $x$ satisfies $f(x) \ge d$, then any number $y > x$ will also satisfy it. This allows us to use **Binary Search** to find the smallest such $x$.

---

## 🔩 Step-by-Step Breakdown
1. **Define Function:** Let $f(x) = x - \text{sumDigits}(x)$.
2. **Binary Search Range:** The search space is $[1, n]$.
3. **Execution:**
   - Calculate `mid`.
   - If $f(mid) \ge d$:
     - This `mid` is a potential candidate.
     - Try to find an even smaller $x$ by searching in the left half (`high = mid - 1`).
   - Else:
     - $f(mid)$ is too small. Search in the right half (`low = mid + 1`).
4. **Final Count:** Once the smallest $x$ is found, the count of numbers in $[x, n]$ is $n - x + 1$.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["low = 1, high = n, ans = -1"]
    Init --> Loop{"low <= high"}
    Loop --> Mid["mid = low + high-low / 2"]
    Mid --> Calc["diff = mid - sumDigits mid"]
    Calc --> Cond{"diff >= d?"}
    Cond -->|Yes| Save["ans = mid \n high = mid - 1"]
    Cond -->|No| Move["low = mid + 1"]
    Save --> Loop
    Move --> Loop
    Loop -->|Done| Result{"ans == -1?"}
    Result -->|Yes| Zero[Return 0]
    Result -->|No| Count["Return n - ans + 1"]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(\log^2 N)$ - Binary search ($O(\log N)$) multiplied by digit summation ($O(\log N)$). |
| **Space Complexity** | $O(1)$ - Constant auxiliary space. |

---

> *"The gap between a number and its digits only grows as the number reaches for the stars."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../16_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../18_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
