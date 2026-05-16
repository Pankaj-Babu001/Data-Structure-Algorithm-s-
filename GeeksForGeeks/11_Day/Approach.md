# 💡 Approach — Mathematics & Prefix Sum Logic

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
> **Core Insight:** Instead of recalculating the sum from scratch for every rotation ($O(N^2)$), we can derive the sum of a rotation from the previous one in $O(1)$.
> Formula: $S_{k} = S_{k-1} + \text{TotalSum} - n \times arr[n-k]$

---

## 🔩 Step-by-Step Breakdown
1. **Calculate Total Sum:** Find the sum of all elements in the array (`totalSum`).
2. **Initial Value:** Calculate the initial sum $S_0 = \sum_{i=0}^{n-1} (i \times arr[i])$.
3. **Iterate Rotations:** For each rotation $k$ from $1$ to $n-1$:
   - The element $arr[n-k]$ moves from the last position to the first.
   - Use the formula to update the current sum.
   - Keep track of the maximum sum found.
4. **Return Result:** The maximum sum across all configurations.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init totalSum=0, currVal=0"]
    Init --> Loop1{"i = 0 to n-1"}
    Loop1 --> Calc1["totalSum += arr[i] \n currVal += i * arr[i]"]
    Calc1 --> Loop1
    Loop1 -->|Done| MaxInit["maxVal = currVal"]
    MaxInit --> Loop2{"i = 1 to n-1"}
    Loop2 --> Calc2["currVal = currVal + totalSum - n * arr[n-i]"]
    Calc2 --> Update["maxVal = max maxVal, currVal"]
    Update --> Loop2
    Loop2 -->|Done| End("[Return maxVal]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Two linear passes through the array. |
| **Space Complexity** | $O(1)$ - Only constant extra space for variables. |

---

> *"A single rotation changes the view, but the math remains constant."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../10_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../12_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
