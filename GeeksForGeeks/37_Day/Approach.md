# 💡 Approach — Sliding Window (Fixed Diversity)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 34.85%](https://img.shields.io/badge/Acceptance-34.85%25-blue?style=for-the-badge)
![Topics: Strings](https://img.shields.io/badge/Topics-Strings-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To maintain exactly $K$ distinct characters, we use a sliding window with a frequency tracker. If the diversity exceeds $K$, we contract the left edge. The maximum window size observed while diversity is exactly $K$ gives our result.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** 
   - `left = 0`, `maxLen = -1`, `distinctCount = 0`.
   - Frequency array `count[26]` for lowercase English letters.
2. **Expand Right Boundary:**
   - Iterate with `right` from $0$ to $n-1$.
   - For each character `s[right]`:
     - If `count[s[right]] == 0`, increment `distinctCount`.
     - `count[s[right]]++`.
3. **Contract Left Boundary:**
   - If `distinctCount > k`:
     - While `distinctCount > k`:
       - `count[s[left]]--`.
       - If `count[s[left]] == 0`, decrement `distinctCount`.
       - `left++`.
4. **Evaluate:**
   - If `distinctCount == k`, update `maxLen = max(maxLen, right - left + 1)`.
5. **Return:** The `maxLen` found (initial `-1` covers "not found" cases).

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["l=0, maxLen=-1, count[26], d=0"]
    Init --> Loop["For r = 0 to n-1"]
    Loop --> Add["If count[s[r]] == 0 then d++ \n count[s[r]]++"]
    Add --> CheckGreater{"d > k?"}
    CheckGreater -->|Yes| Shrink["count[s[l]]-- \n If count[s[l]] == 0 then d-- \n l++"]
    Shrink --> CheckGreater
    CheckGreater -->|No| CheckEqual{"d == k?"}
    CheckEqual -->|Yes| Update["maxLen = max(maxLen, r-l+1)"]
    CheckEqual -->|No| Next["r++"]
    Update --> Next
    Next --> Loop
    Loop -->|Done| End([Return maxLen])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each character is processed at most twice (once by `right`, once by `left`). |
| **Space Complexity** | $O(1)$ - Frequency array of size 26 is constant space. |

---

> *"The length of the journey is dictated by the variety of stops we allow along the way."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../36_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../38_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
