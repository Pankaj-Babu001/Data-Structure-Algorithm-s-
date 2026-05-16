# 💡 Approach — Three Pointers on Sorted Arrays

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** In three sorted arrays, the only way to potentially decrease the difference between the `max` and `min` element of a triplet is to increment the pointer pointing to the current **minimum**. Increasing the minimum reduces the gap, whereas increasing the maximum or middle value would only expand it.

---

## 🔩 Step-by-Step Breakdown
1. **Sort All:** Sort all three input arrays `a`, `b`, and `c` in ascending order.
2. **Pointers:** Initialize three pointers `i`, `j`, `k` at the start of each array.
3. **Loop:** Iterate while all pointers are within bounds.
4. **Range Check:**
   - Calculate `currDiff = max(a[i], b[j], c[k]) - min(a[i], b[j], c[k])`.
   - Update `minDiff` and the result triplet if `currDiff` is smaller.
   - If `currDiff == minDiff`, update only if the `sum` is smaller.
5. **Progress:** Increment the pointer that currently points to the minimum value among `a[i], b[j], c[k]`.
6. **Final Format:** Sort the final triplet in descending order before returning.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Sort[Sort a, b, c]
    Sort --> Init["Init i=0, j=0, k=0, minDiff=INF"]
    Init --> Loop{i, j, k in bounds?}
    Loop --> Calc["Get a, b, c \n currDiff = max-min \n currSum = a+b+c"]
    Calc --> Better{"currDiff < minDiff?"}
    Better -->|Yes| Update[Update minDiff, minSum, res]
    Better -->|No| Tie{"currDiff == minDiff AND \n currSum < minSum?"}
    Tie -->|Yes| Update
    Update --> Move[Increment pointer of min element]
    Tie -->|No| Move
    Move --> Loop
    Loop -->|Done| EndSort[Sort res descending]
    EndSort --> Finish("[Return res]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - Dominated by sorting the arrays. |
| **Space Complexity** | $O(1)$ - Only constant extra space for pointers. |

---

> *"To close the gap, you must lift the floor, not raise the ceiling."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../09_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../11_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
