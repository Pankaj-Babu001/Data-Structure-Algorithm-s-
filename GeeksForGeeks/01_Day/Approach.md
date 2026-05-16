# 💡 Approach — Meet in the Middle

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 45%](https://img.shields.io/badge/Acceptance-45%25-blue?style=for-the-badge)
![Topics: Meet in the Middle](https://img.shields.io/badge/Topics-Meet%20in%20the%20Middle-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** When $N$ is up to $40$, $O(2^N)$ is too slow ($\approx 10^{12}$), but $O(2^{N/2})$ is feasible ($\approx 10^6$). Split the array into two halves, compute subset sums for both, and use binary search to "meet in the middle".

---

## 🔩 Step-by-Step Breakdown
1. **Divide and Conquer:** Split the input array of size $N$ into two halves: $L$ (size $N/2$) and $R$ (size $N - N/2$).
2. **Generate Sums:** Use recursion or bitmasking to generate all possible $2^{|L|}$ subset sums for the left half and $2^{|R|}$ for the right half.
3. **Sort for Efficiency:** Sort the `rightSums` array to enable fast searching.
4. **Binary Search Match:** For each sum $S_L$ in the `leftSums`, calculate the required target $T = k - S_L$. Use `std::equal_range` to find the frequency of $T$ in `rightSums`.
5. **Accumulate:** Add the frequency to the total count of valid subsets.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Split[Split Array into Two Halves: L and R]
    Split --> GenL[Generate all Subset Sums for L]
    Split --> GenR[Generate all Subset Sums for R]
    GenR --> SortR[Sort rightSums Array]
    GenL --> LoopL[Iterate through each S_L in leftSums]
    SortR --> Match["Search for target = k - S_L in rightSums"]
    LoopL --> Match
    Match -->|Found| Inc["TotalCount += Frequency of Target"]
    Inc --> NextL[Next S_L]
    NextL --> LoopL
    LoopL -->|Done| End("[Return TotalCount]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(2^{N/2} \cdot \log(2^{N/2}))$ - Sorting and searching in the split space. |
| **Space Complexity** | $O(2^{N/2})$ - To store subset sums of both halves. |

---

> *"Divide and conquer, then search and unite — that's the secret to tackling the exponential."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../../../README.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="..\02_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
