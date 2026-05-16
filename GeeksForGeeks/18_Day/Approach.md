# 💡 Approach — Binary Search on Answer

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** This is a classic **"Minimize the Maximum"** problem. If we can finish the job in time $T$, we can definitely finish it in any time $> T$. This monotonicity allows us to Binary Search for the minimum viable $T$.

---

## 🔩 Step-by-Step Breakdown
1. **Define Search Space:**
   - `low = max(arr)` (The largest single board requires at least its own length).
   - `high = sum(arr)` (Worst case: 1 painter does everything).
2. **Binary Search:**
   - Pick `mid` as the potential maximum time.
   - Check if $k$ painters can cover all boards such that no painter exceeds `mid` units.
   - If viable: `ans = mid`, search for a smaller time (`high = mid - 1`).
   - Else: Too restrictive, increase time (`low = mid + 1`).
3. **Greedy Verification:**
   - Iterate through boards. Accumulate lengths until the limit `mid` is exceeded.
   - When exceeded, increment painter count and start fresh with the current board.
4. **Result:** The smallest $T$ where $k$ painters are sufficient.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["low = max arr, high = sum arr, ans = high"]
    Init --> Loop{"low <= high"}
    Loop --> Mid["mid = low + high-low / 2"]
    Mid --> Possible{Can paint within mid time with k painters?}
    Possible -->|Yes| Save["ans = mid \n high = mid - 1"]
    Possible -->|No| More["low = mid + 1"]
    Save --> Loop
    More --> Loop
    Loop -->|Done| End("[Return ans]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log(\sum arr))$ - Linear pass inside binary search. |
| **Space Complexity** | $O(1)$ - Constant space usage. |

---

> *"A painter's patience is finite, but a division of labor is infinite."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../17_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../19_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
