# 💡 Approach — Two-Pointer Sweep Line

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 33.28%](https://img.shields.io/badge/Acceptance-33.28%25-blue?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Overlap happens when an interval starts before another one ends. By splitting start and end times into two sorted arrays, we can simulate a "sweep line" that moves across time and counts how many intervals are active.

---

## 🔩 Step-by-Step Breakdown
1. **Extraction:** Create two separate arrays: `start_times` and `end_times`.
2. **Sorting:** Sort both arrays in ascending order.
3. **Simultaneous Traversal:** Use two pointers $i$ (for starts) and $j$ (for ends).
4. **Condition:**
   - If `start_times[i] <= end_times[j]`: An interval starts (or overlaps at the boundary). Increment `current_overlap` and update `max_overlap`.
   - Else: An interval has ended. Decrement `current_overlap` and move the end pointer $j$.
5. **Result:** The `max_overlap` recorded during the process is the answer.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Extract[Extract & Sort Start and End times]
    Extract --> Init["i=0, j=0, current=0, maxOverlap=0"]
    Init --> Loop{"i < n AND j < n"}
    Loop --> Cond{"start[i] <= end[j]?"}
    Cond -->|Yes| StartInc["current++ \n maxOverlap = max maxOverlap, current \n i++"]
    Cond -->|No| EndInc["current-- \n j++"]
    StartInc --> Loop
    EndInc --> Loop
    Loop -->|Done| End("[Return maxOverlap]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - Dominated by sorting both arrays. |
| **Space Complexity** | $O(N)$ - To store separate start and end times. |

---

> *"Time is a line, and overlaps are its intersections. By sorting the moments, we clarify the chaos."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../20_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../22_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
