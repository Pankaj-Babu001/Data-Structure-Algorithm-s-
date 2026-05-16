# 💡 Approach — Largest Divisible Subset

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 43.1%](https://img.shields.io/badge/Acceptance-43.1%25-orange?style=for-the-badge)
![Submissions: N/A](https://img.shields.io/badge/Submissions-N/A-lightgrey?style=for-the-badge)
![Topic: Dynamic Programming](https://img.shields.io/badge/Topic-Dynamic%20Programming-blue?style=for-the-badge)
![Topic: Math](https://img.shields.io/badge/Topic-Math-blueviolet?style=for-the-badge)
![Topic: Sorting](https://img.shields.io/badge/Topic-Sorting-yellow?style=for-the-badge)

---



## 🔩 Step-by-Step Breakdown

*(No algorithmic breakdown provided)*

---

### Logic Deep Dive
The problem asks for a subset where every pair is divisible. This property is **transitive**: if $a \mid b$ and $b \mid c$, then $a \mid c$. 

### 1. Sorting
By sorting the array $A$ in ascending order, we ensure that for any $i > j$, $A[i] \ge A[j]$. Thus, we only need to check if $A[i] \pmod{A[j]} == 0$.

### 2. Dynamic Programming
We define `dp[i]` as the size of the largest divisible subset ending with the element at index `i`.
- **Base Case**: `dp[i] = 1` for all $i$ (each element is a subset of size 1).
- **Transition**: For each $i$, iterate through all $j < i$. If $A[i] \pmod{A[j]} == 0$, then `dp[i] = max(dp[i], dp[j] + 1)`.

### 3. Reconstruction
To return the actual subset, we maintain a `parent` array where `parent[i]` stores the index `j` that was used to update `dp[i]`. After filling the DP table, we start from the index with the maximum `dp` value and follow the `parent` pointers.

---

### Visualization
```mermaid
graph TD
    Start[Start: Sort nums] --> LoopI[Iterate i from 0 to N-1]
    LoopI --> LoopJ[Iterate j from 0 to i-1]
    LoopJ --> Check{nums[i] % nums[j] == 0?}
    Check -- Yes --> UpdateDP[dp[i] = max dp[i], dp[j] + 1]
    UpdateDP --> LoopJ
    Check -- No --> LoopJ
    LoopJ -- Done --> LoopI
    LoopI -- Done --> FindMax[Find max dp value index]
    FindMax --> Reconstruct[Backtrack using parent pointers]
    Reconstruct --> End[Return subset]
```

### Premium Visualization Placeholder
![Largest Divisible Subset Visualization](https://via.placeholder.com/800x400/1e1e1e/ffffff?text=Largest+Divisible+Subset+DP+Table+and+Backtracking)

---

---

## 📊 Complexity Analysis

- **Time Complexity**: $O(N^2)$
  - Sorting takes $O(N \log N)$.
  - Nested loops for DP take $O(N^2)$.
  - Reconstruction takes $O(N)$.
- **Space Complexity**: $O(N)$
  - $O(N)$ for the `dp` and `parent` arrays.

---

> "The largest part of any journey is the first step, but the most important part is the one that follows logic."  
> — *Technical Wisdom*

---

<div align="center">
<h2>Happy Coding! 🚀</h2>

<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../02_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
