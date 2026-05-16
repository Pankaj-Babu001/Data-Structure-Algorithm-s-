# 💡 Approach — Binary Search on Answer

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The required eating speed `s` follows a monotonic property: if speed `s` allows Koko to finish on time, any speed greater than `s` also works. This allows us to perform **Binary Search** over the range of possible speeds $[1, \max(arr)]$.

---

## 🔩 Step-by-Step Breakdown
1. **Define Range:** The minimum speed is $1$, and the maximum speed needed is the size of the largest pile $\max(arr)$.
2. **Binary Search:**
   - Calculate `mid` (the candidate speed).
   - Calculate total `hours` required: $\sum \lceil pile[i] / mid \rceil$.
   - If `hours <= k`: This speed is viable. Store it and try a smaller speed (`high = mid - 1`).
   - Else: This speed is too slow. Try a faster speed (`low = mid + 1`).
3. **Optimized Ceiling:** Use `(pile + mid - 1) / mid` for integer-based ceiling calculation.
4. **Result:** The stored minimum viable speed.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["low = 1, high = max pile"]
    Init --> Loop{"low <= high"}
    Loop --> Mid["mid = low + high-low / 2"]
    Mid --> Hours[Calculate total hours for speed mid]
    Hours --> Valid{"hours <= k?"}
    Valid -->|Yes| Save["ans = mid \n high = mid - 1"]
    Valid -->|No| Faster["low = mid + 1"]
    Save --> Loop
    Faster --> Loop
    Loop -->|Done| End("[Return ans]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log(\max(arr)))$ - Binary search over speed range multiplied by linear pass for hour calculation. |
| **Space Complexity** | $O(1)$ - Constant space usage. |

---

> *"Find the rhythm that finishes the feast just in time."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../13_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../15_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
