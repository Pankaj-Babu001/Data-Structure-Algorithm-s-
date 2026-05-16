# 💡 Approach — Prefix-Min and Suffix-Max (Three-Pointer Strategy)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 25.95%](https://img.shields.io/badge/Acceptance-25.95%25-blue?style=for-the-badge)
![Topics: Arrays](https://img.shields.io/badge/Topics-Arrays-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To find a sorted subsequence of size 3 in $O(N)$ time, we need to identify a "middle" element $arr[j]$ that has at least one smaller element to its left and at least one larger element to its right. Pre-calculating prefix minimums and suffix maximums allows us to check these conditions for each index in constant time.

---

## 🔩 Step-by-Step Breakdown
1. **Precompute Prefix Minimums:**
   - Create an array `leftMin` where `leftMin[i]` stores the smallest element found in `arr[0...i]`.
   - This identifies the best candidate for the first element $arr[i]$ in our $i < j < k$ chain.
2. **Precompute Suffix Maximums:**
   - Create an array `rightMax` where `rightMax[i]` stores the largest element found in `arr[i...N-1]`.
   - This identifies the best candidate for the third element $arr[k]$ in our $i < j < k$ chain.
3. **Find the Pivot:**
   - Iterate through the array from $j = 1$ to $N-2$.
   - For each $j$, check if `leftMin[j-1] < arr[j]` AND `arr[j] < rightMax[j+1]`.
4. **Result:** If the condition is met, return `{leftMin[j-1], arr[j], rightMax[j+1]}`. Otherwise, return an empty array.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Prefix["Build leftMin[]: \n leftMin[i] = min(arr[0..i])"]
    Prefix --> Suffix["Build rightMax[]: \n rightMax[i] = max(arr[i..N-1])"]
    Suffix --> Loop["For j from 1 to N-2"]
    Loop --> Cond{"leftMin[j-1] < arr[j] \n AND \n arr[j] < rightMax[j+1]?"}
    Cond -->|Yes| Found["Return {leftMin[j-1], arr[j], rightMax[j+1]}"]
    Cond -->|No| Next[j++]
    Next --> Loop
    Loop -->|Done| Empty["Return empty array"]
    Found --> End([End])
    Empty --> End
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Three linear passes over the array. |
| **Space Complexity** | $O(N)$ - Auxiliary storage for `leftMin` and `rightMax`. |

---

> *"The middle element is the bridge that connects the small past to the large future."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../72_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../74_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
