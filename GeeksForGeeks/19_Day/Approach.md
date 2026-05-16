# 💡 Approach — Sorting & Sliding Window

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To minimize the difference between the largest and smallest packets, the selected packets should be as "close" as possible on the number line. In a sorted array, the minimum difference for $M$ packets will always occur in a contiguous subarray of size $M$.

---

## 🔩 Step-by-Step Breakdown
1. **Sort the Array:** Sort the chocolate packets in ascending order.
2. **Initialize:** Set `minDiff = LLONG_MAX`.
3. **Sliding Window:**
   - Iterate through the sorted array from index $i = 0$ to $n - m$.
   - For each index $i$, the window of $m$ packets ends at $i + m - 1$.
   - Calculate `diff = arr[i + m - 1] - arr[i]`.
   - Update `minDiff` with the minimum of itself and `diff`.
4. **Result:** Return the found `minDiff`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Sort[Sort arr in ascending order]
    Sort --> Init["minDiff = infinity, i = 0"]
    Init --> Loop{"i <= n - m"}
    Loop --> Calc["diff = arr[i + m - 1] - arr[i]"]
    Calc --> Update["minDiff = min minDiff, diff"]
    Update --> Inc["i++"]
    Inc --> Loop
    Loop -->|Done| End("[Return minDiff]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - Dominated by sorting the array. Sliding window is $O(N)$. |
| **Space Complexity** | $O(1)$ - Constant space (ignoring sorting recursion stack). |

---

> *"The sweetest distribution is the one where everyone feels equally favored."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../18_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../20_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
