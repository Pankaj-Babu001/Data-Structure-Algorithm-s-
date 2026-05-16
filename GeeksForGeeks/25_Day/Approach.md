# 💡 Approach — Bucket Sort (Counting Strategy)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 53.4%](https://img.shields.io/badge/Acceptance-53.4%25-blue?style=for-the-badge)
![Topics: Counting Sort](https://img.shields.io/badge/Topics-Counting%20Sort-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The H-index cannot exceed the total number of papers $N$. By clamping all citation counts $> N$ to $N$, we can use a frequency array (buckets) to count papers in linear time, avoiding the $O(N \log N)$ cost of sorting.

---

## 🔩 Step-by-Step Breakdown
1. **Frequency Mapping:**
   - Create a `count` array of size $N+1$.
   - For each citation $C$, if $C \ge N$, increment `count[N]`. Otherwise, increment `count[C]`.
2. **Reverse Accumulation:**
   - Initialize `totalPapers = 0`.
   - Traverse the `count` array from $H = N$ down to $0$.
   - Add `count[H]` to `totalPapers`.
3. **Threshold Check:**
   - The first $H$ where `totalPapers >= H` is the researcher's H-index.
4. **Return:** Return $H$.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["n = citations.size \n count = array size n+1"]
    Init --> Fill["For each c: \n count[min c, n]++"]
    Fill --> Traverse["TotalPapers = 0 \n H = n"]
    Traverse --> Loop{"H >= 0"}
    Loop --> Add["TotalPapers += count[H]"]
    Add --> Check{"TotalPapers >= H?"}
    Check -->|Yes| End("[Return H]")
    Check -->|No| Next["H--"]
    Next --> Loop
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - One pass to build the frequency array, another to find the index. |
| **Space Complexity** | $O(N)$ - To store the count array of size $N+1$. |

---

> *"An author's impact is not just in the volume of their voice, but in the echo that reaches the height of their ambition."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../24_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../26_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
