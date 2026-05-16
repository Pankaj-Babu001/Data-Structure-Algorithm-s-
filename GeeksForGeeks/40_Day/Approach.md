# 💡 Approach — Frequency Array Optimization ($O(V^2)$)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 24.77%](https://img.shields.io/badge/Acceptance-24.77%25-blue?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** While $N$ can be as large as $10^5$, the element values are limited to $1000$. By using a frequency array of size $1001$, we can check all possible pairs of *values* instead of *indices*. This reduces the complexity from $O(N^2)$ to $O(V^2)$, where $V$ is the maximum value in the array.

---

## 🔩 Step-by-Step Breakdown
1. **Count Frequencies:**
   - Create a frequency array `freq[1001]` and count occurrences of each element in `arr`.
2. **Iterate Values:**
   - Use two nested loops to pick two values $i$ and $j$ from $1$ to $1000$.
   - **Condition Check:**
     - If `freq[i] > 0` and `freq[j] > 0`:
       - Calculate `sumSq = i*i + j*j`.
       - Check if `sqrt(sumSq)` is an integer $k$.
       - If $k \le 1000$ and `freq[k] > 0`:
         - Ensure distinct indices:
           - If $i == j$, we need `freq[i] >= 2`.
           - If $i == k$ or $j == k$, we need appropriate counts. (Usually $k > i$ and $k > j$ for triplets, so this is rarely an issue unless elements are 0).
3. **Return:** `true` if any triplet is found, else `false`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Freq["freq[1001] = {0} \n Count each arr[x]"]
    Freq --> LoopI["For i = 1 to 1000"]
    LoopI --> LoopJ["For j = i to 1000"]
    LoopJ --> CheckIJ["freq[i] > 0 AND freq[j] > 0?"]
    CheckIJ -->|Yes| Sum["sumSq = i*i + j*j \n k = sqrt(sumSq)"]
    Sum --> ValidK["k is integer AND k <= 1000?"]
    ValidK -->|Yes| FreqK["freq[k] > 0?"]
    FreqK -->|Yes| SameVal{"i == j?"}
    SameVal -->|Yes| Freq2["freq[i] >= 2?"]
    SameVal -->|No| Found([Return true])
    Freq2 -->|Yes| Found
    Freq2 -->|No| NextJ
    CheckIJ -->|No| NextJ
    ValidK -->|No| NextJ
    FreqK -->|No| NextJ
    NextJ --> LoopJ
    LoopJ -->|Done| NextI["i++"]
    NextI --> LoopI
    LoopI -->|Done| NotFound([Return false])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N + V^2)$ - $O(N)$ to fill frequencies, $O(V^2)$ to check pairs. |
| **Space Complexity** | $O(V)$ - Frequency array of size 1001. |

---

> *"Constraints are not walls, but guides to a more efficient path."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../39_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../41_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
