# 💡 Approach — Arithmetic Progression of Segment Subarrays

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 53.02%](https://img.shields.io/badge/Acceptance-53.02%25-blue?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A strictly increasing segment of length $L$ contributes exactly $\frac{L(L-1)}{2}$ subarrays of length $\ge 2$. By identifying maximal contiguous increasing segments in a single $O(N)$ pass, we can compute the total count using simple combinatorial math without explicitly enumerating the subarrays.

---

## 🔩 Step-by-Step Breakdown
1. **Identify Segments:**
   - Traverse the array and track the length of the current strictly increasing segment (`currentLen`).
2. **Transition Condition:**
   - If `arr[i] > arr[i-1]`, increment `currentLen`.
   - If `arr[i] <= arr[i-1]`, the segment has ended.
3. **Calculate Contributions:**
   - For a segment of length $L$, the number of valid subarrays (size $\ge 2$) is the sum of choices:
     - Subarrays of size 2: $L-1$
     - Subarrays of size 3: $L-2$
     - ...
     - Subarrays of size L: $1$
   - Total = $\sum_{k=1}^{L-1} k = \frac{L(L-1)}{2}$.
4. **Iterative Update:**
   - Whenever a segment ends, add $\frac{L(L-1)}{2}$ to the total and reset `currentLen` to 1.
5. **Handle Final Segment:**
   - Ensure the last segment's contribution is added after the loop finishes.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["ans = 0, L = 1"]
    Init --> Loop["For i = 1 to N-1"]
    Loop --> Cond{"arr[i] > arr[i-1]?"}
    Cond -->|Yes| IncL["L++"]
    Cond -->|No| Calc["ans += L*(L-1)/2 \n L = 1"]
    IncL --> Loop
    Calc --> Loop
    Loop -->|Done| FinalCalc["ans += L*(L-1)/2"]
    FinalCalc --> End([Return ans])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single linear scan of the array. |
| **Space Complexity** | $O(1)$ - No extra space used besides counters. |

---

> *"Sequences are just data points until you find the rhythm of their growth."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../73_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../75_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
