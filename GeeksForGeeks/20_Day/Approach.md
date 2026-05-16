# 💡 Approach — Sorting & Overlap Check

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 65.12%](https://img.shields.io/badge/Acceptance-65.12%25-blue?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** If we sort meetings by their start times, we only need to compare each meeting with the one that immediately preceded it to detect any overlaps.

---

## 🔩 Step-by-Step Breakdown
1. **Sort:** Sort all meetings based on their starting times.
2. **Iterate:** Traverse the sorted meetings starting from the second one (index 1).
3. **Compare:** For each meeting $i$, check if its start time $arr[i][0]$ is strictly less than the end time of the previous meeting $arr[i-1][1]$.
4. **Conclusion:**
   - If $arr[i][0] < arr[i-1][1]$, return `false` (overlap detected).
   - If the loop finishes without returning, return `true`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Sort[Sort arr by start time]
    Sort --> Loop{"i = 1 to n-1"}
    Loop --> Overlap{"arr[i].start < arr[i-1].end?"}
    Overlap -->|Yes| Fail[Return false]
    Overlap -->|No| Inc["i++"]
    Inc --> Loop
    Loop -->|Done| Success[Return true]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - Dominated by sorting. Overlap check is $O(N)$. |
| **Space Complexity** | $O(1)$ - Constant space (excluding sort stack). |

---

> *"Punctuality is not just being on time, it's making sure your time doesn't steal from another."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../19_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../21_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
