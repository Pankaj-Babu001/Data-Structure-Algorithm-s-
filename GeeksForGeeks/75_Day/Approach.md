# 💡 Approach — Diagonal Invariance Check

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 49.05%](https://img.shields.io/badge/Acceptance-49.05%25-blue?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A Toeplitz matrix is characterized by the property that all elements on any given top-left to bottom-right diagonal are identical. Mathematically, this means $mat[i][j]$ must equal $mat[i-1][j-1]$ for all indices where both are valid. A single $O(N \times M)$ pass comparing each element to its upper-left neighbor is sufficient to validate this property.

---

## 🔩 Step-by-Step Breakdown
1. **Define the Property:**
   - For every element $mat[i][j]$ (where $i > 0$ and $j > 0$), it must match its top-left neighbor $mat[i-1][j-1]$.
2. **Iterative Verification:**
   - Start a nested loop from the second row ($i=1$) and second column ($j=1$).
   - For each cell $(i, j)$:
     - Compare $mat[i][j]$ with $mat[i-1][j-1]$.
     - If they are **not equal**, the matrix is not Toeplitz. Return `false` immediately.
3. **Success Condition:**
   - If the loops complete without any mismatch, return `true`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> LoopR["For i = 1 to Rows-1"]
    LoopR --> LoopC["For j = 1 to Cols-1"]
    LoopC --> Cond{"mat[i][j] == \n mat[i-1][j-1]?"}
    Cond -->|No| Fail[Return false]
    Cond -->|Yes| NextC[Next j]
    NextC --> LoopC
    LoopC -->|Done| NextR[Next i]
    NextR --> LoopR
    LoopR -->|Done| Success[Return true]
    Fail --> End([End])
    Success --> End
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \times M)$ - Every cell in the matrix is visited once. |
| **Space Complexity** | $O(1)$ - Constant space usage. |

---

> *"The beauty of a Toeplitz matrix lies in the predictability of its descent."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../74_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../76_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
