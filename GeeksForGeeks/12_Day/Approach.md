# 💡 Approach — Modified Kadane's with Max/Min Tracking

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** In maximum product problems, we must track both the **maximum product** (largest positive) and the **minimum product** (most negative) because a negative number can multiply with a previous minimum to flip into a new maximum.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Set `maxSoFar`, `minSoFar`, and `result` to `arr[0]`.
2. **Loop:** Iterate through the array starting from index 1.
3. **Swap on Negative:** If the current element is negative, swap `maxSoFar` and `minSoFar` because multiplying by a negative number flips the signs.
4. **Update Pointers:**
   - `maxSoFar = max(curr, maxSoFar * curr)`
   - `minSoFar = min(curr, minSoFar * curr)`
5. **Global Update:** Update `result` with the maximum of itself and `maxSoFar`.
6. **Return Result:** The global maximum found.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init maxSoFar, minSoFar, result = arr[0]"]
    Init --> Loop{"i = 1 to n-1"}
    Loop --> Neg{"arr[i] < 0?"}
    Neg -->|Yes| Swap[Swap maxSoFar, minSoFar]
    Swap --> Calc
    Neg -->|No| Calc["maxSoFar = max curr, maxSoFar * curr \n minSoFar = min curr, minSoFar * curr"]
    Calc --> Update["result = max result, maxSoFar"]
    Update --> Loop
    Loop -->|Done| End("[Return result]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the array. |
| **Space Complexity** | $O(1)$ - Constant auxiliary space. |

---

> *"In the world of products, two negatives don't just cancel out; they might create a giant."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../11_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../13_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
