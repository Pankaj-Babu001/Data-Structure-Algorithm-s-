# 💡 Approach — Two-Pointer Intersection (Distinct Elements)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 47.82%](https://img.shields.io/badge/Acceptance-47.82%25-blue?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** When dealing with two sorted arrays, the two-pointer technique allows us to find common elements in linear time. By checking the last added element in the result vector, we can effectively filter out duplicates without the overhead of a hash set. This maintains $O(N+M)$ time and $O(1)$ auxiliary space.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Pointers:**
   - `i = 0` for array `a`.
   - `j = 0` for array `b`.
2. **Iterative Comparison:**
   - While both `i < a.size()` and `j < b.size()`:
     - **Match Case (`a[i] == b[j]`):**
       - Check if `result` is empty or `result.back() != a[i]` to ensure distinctness.
       - If distinct, add `a[i]` to `result`.
       - Increment both `i` and `j`.
     - **Less Case (`a[i] < b[j]`):**
       - Increment `i` to find a larger value in `a`.
     - **Greater Case (`a[i] > b[j]`):**
       - Increment `j` to find a larger value in `b`.
3. **Termination:** The loop ends when one array is fully traversed.
4. **Final Result:** Return the `result` vector containing distinct intersection elements.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["i = 0, j = 0 \n result = []"]
    Init --> Loop{"i < N and j < M?"}
    Loop -->|No| End([Return result])
    Loop -->|Yes| Compare{"Compare a[i] and b[j]"}
    Compare -->|Equal| Match["Distinct check: \n result.back() != a[i]?"]
    Match -->|Yes| Push["Add a[i] to result \n i++, j++"]
    Match -->|No| Skip["i++, j++"]
    Compare -->|a[i] < b[j]| IncI["i++"]
    Compare -->|a[i] > b[j]| IncJ["j++"]
    Push --> Loop
    Skip --> Loop
    IncI --> Loop
    IncJ --> Loop
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N + M)$ - Single pass through both arrays. |
| **Space Complexity** | $O(1)$ - Excluding the output vector. |

---

> *"Sorted data is like a paved road; the traversal is smooth and efficient."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../71_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../73_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
