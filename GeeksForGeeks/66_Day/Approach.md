# 💡 Approach — Index-Sum Constant Traversal (Anti-Diagonals)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 60%](https://img.shields.io/badge/Acceptance-60%25-blue?style=for-the-badge)
![Topics: Matrix](https://img.shields.io/badge/Topics-Matrix-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** In a square matrix, all elements belonging to the same anti-diagonal share a constant index sum $(i + j)$. By iterating through the starting points along the first row $(0, j)$ and the last column $(i, N-1)$, we can systematically extract these diagonals in $O(N^2)$ time by following the vector direction $\vec{d} = (1, -1)$ until we hit a boundary.

---

## 🔩 Step-by-Step Breakdown
1. **Identify Entry Points:**
   - The anti-diagonals start from the first row and the last column.
   - Total number of anti-diagonals is $2N - 1$.
2. **Phase 1: Top Row Starts:**
   - Iterate through each column $J$ in `row 0` (from $J=0$ to $N-1$).
   - For each $J$, set `currRow = 0` and `currCol = J`.
   - Traverse while indices are valid: `currRow++` and `currCol--`.
3. **Phase 2: Last Column Starts:**
   - Iterate through each row $I$ in `column N-1` (from $I=1$ to $N-1$).
   - For each $I$, set `currRow = I` and `currCol = N-1`.
   - Traverse while indices are valid: `currRow++` and `currCol--`.
4. **Result Storage:** Flatten these elements into a single 1D vector.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Phase1["Phase 1: Start from row 0, col j=0..N-1"]
    Phase1 --> Loop1["For j from 0 to N-1"]
    Loop1 --> Sub1["r = 0, c = j \n While (r < N and c >= 0): \n   Add mat[r][c] \n   r++, c--"]
    Sub1 --> Loop1
    Loop1 --> Phase2["Phase 2: Start from row i=1..N-1, col N-1"]
    Phase2 --> Loop2["For i from 1 to N-1"]
    Loop2 --> Sub2["r = i, c = N-1 \n While (r < N and c >= 0): \n   Add mat[r][c] \n   r++, c--"]
    Sub2 --> Loop2
    Loop2 --> End([Return Result Vector])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N^2)$ - Every element in the matrix is visited exactly once. |
| **Space Complexity** | $O(N^2)$ - To store the result vector of size $N^2$. |

---

> *"Diagonals are just horizontal lines that chose to take the scenic route across the grid."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../65_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../67_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
