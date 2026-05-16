# 💡 Approach — Greedy Rightmost Digit Tracking

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 48.67%](https://img.shields.io/badge/Acceptance-48.67%25-blue?style=for-the-badge)
![Topics: Greedy](https://img.shields.io/badge/Topics-Greedy-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To maximize the lexicographical value, we should replace the earliest possible digit with the largest available digit from its right. If multiple instances of the same maximum digit exist, picking the rightmost one is crucial to keep the smaller digit at a lower significance position.

---

## 🔩 Step-by-Step Breakdown
1. **Rightmost Index Mapping:**
   - Create an array `lastPos[10]` to store the rightmost occurrence of each digit (0-9).
   - Traverse the string once to fill this array.
2. **Identify Optimal Swap:**
   - Traverse the string from left to right (index `i`).
   - For each digit `s[i]`:
     - Scan digits from 9 down to `s[i] + 1`.
     - Check if any such higher digit exists at an index `j > i` (using `lastPos`).
     - The first (highest) such digit we find is our best candidate.
3. **Execute and Break:**
   - Perform the swap `s[i]` with `s[lastPos[highDigit]]`.
   - Since only one swap is allowed, terminate immediately after the first successful swap.
4. **Return:** The modified (or original) string.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Map["lastPos[10] = {-1} \n Fill lastPos with rightmost indices"]
    Map --> LoopI["For i = 0 to n-1"]
    LoopI --> LoopD["For d = 9 down to s[i]-'0'+1"]
    LoopD --> Check{"lastPos[d] > i?"}
    Check -->|Yes| Swap["Swap(s[i], s[lastPos[d]])"]
    Swap --> Done([Return s])
    Check -->|No| NextD["d--"]
    NextD --> LoopD
    LoopD -->|Done| NextI["i++"]
    NextI --> LoopI
    LoopI -->|Done| Done
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - One pass for `lastPos`, another pass for finding the swap (inner loop is $O(10)$). |
| **Space Complexity** | $O(1)$ - Fixed-size array for digits 0-9. |

---

> *"Greatness is achieved by moving the right pieces at the right time."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../40_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../42_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
