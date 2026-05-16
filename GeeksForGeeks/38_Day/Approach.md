# 💡 Approach — Sliding Window (Minimum Substring)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 19.34%](https://img.shields.io/badge/Acceptance-19.34%25-blue?style=for-the-badge)
![Topics: Strings](https://img.shields.io/badge/Topics-Strings-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To find the smallest window, we first expand the window to find a valid one, then greedily shrink it from the left while maintaining the "validity" (containing all characters of $P$). This "expand-then-shrink" strategy ensures we find the global minimum in linear time.

---

## 🔩 Step-by-Step Breakdown
1. **Frequency Mapping:**
   - Precompute frequencies of all characters in `p` into `targetFreq[256]`.
   - Use `currentFreq[256]` to track characters in the current sliding window.
2. **Expand Window:**
   - Iterate with `right` through string `s`.
   - Update `currentFreq[s[right]]`. If this character helps satisfy a requirement in `p`, increment a `matchCount`.
3. **Shrink Window:**
   - Once `matchCount == p.length()` (window is valid):
     - Check if the current window `[left, right]` is smaller than the recorded `minLen`. Update if so.
     - Try to remove `s[left]` from the window.
     - If removing `s[left]` makes the window invalid (it was a required character), decrement `matchCount`.
     - Increment `left`.
4. **Result:** Extract the substring using the recorded `startIndex` and `minLen`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Target["targetFreq = count(p) \n currentFreq = {}, count = 0"]
    Target --> Loop["For r = 0 to n-1"]
    Loop --> Add["currentFreq[s[r]]++ \n If currentFreq[s[r]] <= targetFreq[s[r]] then count++"]
    Add --> Valid{"count == p.len?"}
    Valid -->|No| Loop
    Valid -->|Yes| Update["If r-l+1 < minLen update minLen, startIdx"]
    Update --> Shrink["currentFreq[s[l]]-- \n If currentFreq[s[l]] < targetFreq[s[l]] then count-- \n l++"]
    Shrink --> Valid
    Loop -->|Done| End([Return s.substr or empty])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each character in `s` is visited twice at most. |
| **Space Complexity** | $O(1)$ - Fixed-size frequency arrays (ASCII 256). |

---

> *"The essence of a search is to cast a wide net and then tighten the strings until only the vital remains."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../37_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../39_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
