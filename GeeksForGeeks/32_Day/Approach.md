# 💡 Approach — Two Pointers Technique

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 18.01%](https://img.shields.io/badge/Acceptance-18.01%25-blue?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Since both arrays are already sorted, we can navigate the "sum space" using two pointers starting from opposite ends (smallest of $arr1$ and largest of $arr2$). This allows us to narrow down the closest sum in linear time without checking all $N \times M$ pairs.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Pointers:**
   - Set `i = 0` (pointing to the start of `arr1`).
   - Set `j = m - 1` (pointing to the end of `arr2`).
2. **Track Minimum:**
   - Maintain `minDiff` initialized to a large value.
   - Maintain `res1` and `res2` to store the closest pair found.
3. **Converge:**
   - While `i < n` and `j >= 0`:
     - Calculate `currentSum = arr1[i] + arr2[j]`.
     - Calculate `currentDiff = abs(currentSum - x)`.
     - If `currentDiff < minDiff`: Update `minDiff`, `res1 = arr1[i]`, and `res2 = arr2[j]`.
     - If `currentSum < x`: We need a larger sum to get closer to $x$, so move `i` forward (`i++`).
     - If `currentSum > x`: We need a smaller sum, so move `j` backward (`j--`).
     - If `currentSum == x`: Break early (exact match found).
4. **Return:** The pair `[res1, res2]`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["i = 0, j = m-1, minDiff = inf"]
    Init --> Loop{"i < n AND j >= 0"}
    Loop --> Sum["currentSum = arr1[i] + arr2[j]"]
    Sum --> CheckDiff{"abs(sum-x) < minDiff?"}
    CheckDiff -->|Yes| Update["minDiff = abs(sum-x) \n res = [arr1[i], arr2[j]]"]
    CheckDiff -->|No| CompareX{"currentSum > x?"}
    Update --> CompareX
    CompareX -->|Yes| DecJ["j--"]
    CompareX -->|No| IncI["i++"]
    DecJ --> Loop
    IncI --> Loop
    Loop -->|Done| End([Return res])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N + M)$ - We traverse both arrays at most once. |
| **Space Complexity** | $O(1)$ - Only a few variables for pointers and minimum tracking. |

---

> *"Efficiency is finding the shortest distance between two points in a sorted world."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../31_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../33_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
