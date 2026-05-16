# 💡 Approach — Transformation & Earliest Prefix

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 52.63%](https://img.shields.io/badge/Acceptance-52.63%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Transform the problem by assigning $+1$ to elements $> k$ and $-1$ to elements $\le k$. A subarray satisfies the condition if its sum is strictly positive ($\ge 1$).

---

## 🔩 Step-by-Step Breakdown
1. **Transformation:**
   - For each $arr[i]$, let $v_i = 1$ if $arr[i] > k$, else $v_i = -1$.
2. **Prefix Sum Accumulation:**
   - Maintain a running `prefixSum`.
   - Goal: Find the longest $[j, i]$ such that $prefixSum[i] - prefixSum[j-1] > 0$.
3. **Optimized Search:**
   - If `prefixSum > 0`: The entire range $[0..i]$ is valid. `maxLen = i + 1`.
   - If `prefixSum <= 0`: We need the earliest index $j$ where $prefixSum[j] = prefixSum - 1$. 
   - Since the prefix sum changes by exactly $\pm 1$ at each step, we only need to store the first time we hit a new negative minimum.
4. **Earliest Index Store:**
   - Use a vector `store` where `store[abs(val)]` is the earliest index reaching prefix sum `val`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["prefixSum = 0, ans = 0, store = [-1]"]
    Init --> Loop["For i = 0 to n-1"]
    Loop --> Trans["val = (arr[i] > k ? 1 : -1) \n prefixSum += val"]
    Trans --> CheckPos{prefixSum > 0?}
    CheckPos -->|Yes| UpdateMax["ans = i + 1"]
    CheckPos -->|No| CheckStore{"prefixSum-1 seen?"}
    CheckStore -->|Yes| UpdateWindow["ans = max(ans, i - store[1-prefixSum])"]
    CheckStore -->|No| CheckMin{prefixSum < newMin?}
    CheckMin -->|Yes| Push["store.push_back(i)"]
    UpdateMax --> Loop
    UpdateWindow --> Loop
    Push --> Loop
    Loop -->|Done| End([Return ans])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the array. |
| **Space Complexity** | $O(N)$ - To store earliest indices for prefix sums. |

---

> *"When weights are balanced against a threshold, the longest path is found by identifying the first tilt."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../28_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../30_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
