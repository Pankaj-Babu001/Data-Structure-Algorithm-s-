# 💡 Approach — 2D Prefix Sum & Sliding Window

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 80.35%](https://img.shields.io/badge/Acceptance-80.35%25-blue?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To efficiently calculate the sum of any submatrix, use a 2D prefix sum. This allows us to find the sum of any square of size $k$ in $O(1)$ time, reducing the total complexity from $O(N^4)$ to $O(N^3)$.

---

## 🔩 Step-by-Step Breakdown
1. **Build 2D Prefix Sum:**
   - Create a 2D array `pre[n+1][m+1]`.
   - `pre[i][j]` stores the sum of all elements in the rectangle from $(0,0)$ to $(i-1, j-1)$.
   - Formula: `pre[i][j] = mat[i-1][j-1] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1]`.
2. **Submatrix Sum Query:**
   - The sum of a square with top-left $(r1, c1)$ and side $k$ (bottom-right $(r1+k-1, c1+k-1)$) is:
   - `sum = pre[r2+1][c2+1] - pre[r1][c2+1] - pre[r2+1][c1] + pre[r1][c1]`.
3. **Iterative Search:**
   - Loop through all possible side lengths $k$ from $1$ to $min(n, m)$.
   - Loop through all possible top-left corners $(i, j)$ such that $i+k \le n$ and $j+k \le m$.
   - Calculate the sum using the $O(1)$ query and compare with $x$.
4. **Return Result:** Total count of squares meeting the criteria.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Precompute[Build 2D Prefix Sum Array]
    Precompute --> LoopK["For k = 1 to min(n, m)"]
    LoopK --> LoopI["For i = 0 to n-k"]
    LoopI --> LoopJ["For j = 0 to m-k"]
    LoopJ --> Calc["Sum = getSum(i, j, i+k-1, j+k-1)"]
    Calc --> Check{"Sum == x?"}
    Check -->|Yes| Inc[count++]
    Check -->|No| LoopJ
    Inc --> LoopJ
    LoopJ -->|Done| LoopI
    LoopI -->|Done| LoopK
    LoopK -->|Done| End([Return count])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \cdot M \cdot \min(N, M))$ - Precomputing takes $O(NM)$, searching takes $O(N^2 M)$. |
| **Space Complexity** | $O(N \cdot M)$ - Space for the 2D prefix sum array. |

---

> *"In the geometry of numbers, the area of a square is fixed, but its sum reveals its hidden depth."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../30_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../32_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
