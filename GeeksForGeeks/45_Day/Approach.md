# 💡 Approach — Backtracking (IP Restoration)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 38.71%](https://img.shields.io/badge/Acceptance-38.71%25-blue?style=for-the-badge)
![Topics: Backtracking](https://img.shields.io/badge/Topics-Backtracking-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Restoring an IP address from a raw string is a problem of splitting the string into 4 valid numeric segments. Each segment must be between 0 and 255 and cannot have leading zeros unless it's exactly "0". Backtracking allows us to explore all possible split points efficiently.

---

## 🔩 Step-by-Step Breakdown
1. **Initial Filter:**
   - If the string length is less than 4 or greater than 12, it's impossible to form a valid IP. Return an empty list.
2. **Backtracking Function:**
   - `solve(index, partCount, currentIP)`:
     - **Base Case:** If `partCount == 4`:
       - If `index == n`, add `currentIP` (removing trailing dot) to results.
       - Return.
     - **Recursive Step:**
       - Try taking 1, 2, or 3 digits starting from `index`.
       - For each length $L \in \{1, 2, 3\}$:
         - Extract substring `seg`.
         - **Validate Segment:**
           - If `seg` starts with '0' and length > 1: Invalid (Leading zero).
           - Convert `seg` to integer. If value > 255: Invalid.
         - If valid, recurse: `solve(index + L, partCount + 1, currentIP + seg + ".")`.
3. **Result:** Collect all valid strings found in the recursion.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> CheckLen{"4 <= len <= 12?"}
    CheckLen -->|No| Empty([Return empty])
    CheckLen -->|Yes| Solve["solve(index=0, count=0, ip='')"]
    Solve --> Base{"count == 4?"}
    Base -->|Yes| EndString{"index == n?"}
    EndString -->|Yes| Add[Add to Results]
    EndString -->|No| Backtrack[Return]
    Base -->|No| Loop["For len = 1 to 3"]
    Loop --> Seg["seg = s.substr(index, len)"]
    Seg --> Valid{"Valid segment?"}
    Valid -->|Yes| Recurse["solve(index+len, count+1, ip+seg+'.')"]
    Valid -->|No| NextLen["len++"]
    Recurse --> NextLen
    NextLen --> Loop
    Loop -->|Done| Backtrack
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(1)$ - The total number of valid IPs is small. Max states explored $\approx 3^4 = 81$. |
| **Space Complexity** | $O(1)$ - Recursion depth is capped at 4. |

---

> *"Identity is defined by where the dots are placed, not just the numbers themselves."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../44_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../46_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
