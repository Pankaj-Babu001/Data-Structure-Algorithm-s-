# 💡 Approach — Custom Sorting with Greedy Concatenation

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 37.82%](https://img.shields.io/badge/Acceptance-37.82%25-blue?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** This is a greedy problem where local decisions lead to the global maximum. To decide between two numbers $A$ and $B$, simply check if $A+B$ is larger than $B+A$. This custom comparison ensures that the most significant digits appear earlier in the final string.

---

## 🔩 Step-by-Step Breakdown
1. **Conversion:** Convert all integers into strings to facilitate concatenation.
2. **Custom Sort:** Use a custom comparator:
   - For strings $S_1$ and $S_2$, compare $S_1 + S_2$ with $S_2 + S_1$.
   - Sort the array of strings in descending order based on this rule.
3. **Zero Case:** If the highest value string is `"0"`, the entire result is `"0"` (avoids strings like `"000"`).
4. **Result:** Concatenate all strings in the sorted order and return.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Convert[Convert ints to strings]
    Convert --> Sort["Sort strings using S1+S2 > S2+S1"]
    Sort --> CheckZero{"nums[0] == '0'?"}
    CheckZero -->|Yes| Zero[Return '0']
    CheckZero -->|No| Join[Concatenate all strings]
    Join --> End("[Return final string]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N \cdot K)$ - Sorting takes $O(N \log N)$ comparisons, each costing $O(K)$ for string concatenation. |
| **Space Complexity** | $O(N \cdot K)$ - Space to store integers as strings. |

---

> *"The largest whole is built by choosing the greatest parts at every step."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../23_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../25_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
