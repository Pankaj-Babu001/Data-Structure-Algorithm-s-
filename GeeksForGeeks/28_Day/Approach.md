# 💡 Approach — Difference Array & Hashing

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 48.22%](https://img.shields.io/badge/Acceptance-48.22%25-blue?style=for-the-badge)
![Topics: Prefix Sum](https://img.shields.io/badge/Topics-Prefix%20Sum-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** If $\sum a1[i..j] = \sum a2[i..j]$, then $\sum (a1[i..j] - a2[i..j]) = 0$. By working with the difference of the two arrays, we transform the problem into finding the **longest subarray with sum zero**.

---

## 🔩 Step-by-Step Breakdown
1. **Define Difference:** Let `diff[k] = a1[k] - a2[k]`. We need the longest $[i, j]$ where $\sum_{k=i}^{j} diff[k] = 0$.
2. **Prefix Sum Hashing:**
   - Maintain a running `prefixSum` of the `diff` values.
   - Use a hash map to store the **first occurrence** of each `prefixSum`.
3. **Traverse:**
   - If `prefixSum == 0`: The entire span from start to current index $i$ has sum zero. `maxLen = i + 1`.
   - If `prefixSum` has been seen before at index $j$: The subarray between $j$ and $i$ has sum zero. `maxLen = max(maxLen, i - j)`.
   - If `prefixSum` is new: Store it with the current index: `map[prefixSum] = i`.
4. **Result:** The `maxLen` found is the answer.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["prefixSum = 0, maxLen = 0, mp = {}"]
    Init --> Loop["For i = 0 to n-1"]
    Loop --> Calc["prefixSum += (a1[i] - a2[i])"]
    Calc --> Case1{prefixSum == 0?}
    Case1 -->|Yes| Update1["maxLen = i + 1"]
    Case1 -->|No| Case2{prefixSum in mp?}
    Case2 -->|Yes| Update2["maxLen = max maxLen, i - mp[prefixSum]"]
    Case2 -->|No| Store["mp[prefixSum] = i"]
    Update1 --> Loop
    Update2 --> Loop
    Store --> Loop
    Loop -->|Done| End([Return maxLen])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the arrays with $O(1)$ average hash map lookups. |
| **Space Complexity** | $O(N)$ - To store the first occurrence of prefix sums in the hash map. |

---

> *"The balance of two arrays is found in the stillness of their difference."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../27_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../29_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
