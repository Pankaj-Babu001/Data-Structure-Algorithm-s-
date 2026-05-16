# 💡 Approach — Monotonic Stack (Next Smaller Element)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 65.4%](https://img.shields.io/badge/Acceptance-65.4%25-blue?style=for-the-badge)
![Topics: Monotonic Stack](https://img.shields.io/badge/Topics-Monotonic%20Stack-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A subarray starting at index $i$ is valid only if every subsequent element is $\ge arr[i]$. The first element smaller than $arr[i]$ to its right acts as a "hard boundary." Therefore, the count of such subarrays is exactly the distance to the **Next Smaller Element**.

---

## 🔩 Step-by-Step Breakdown
1. **The Goal:** For every index $i$, find the first index $j > i$ such that $arr[j] < arr[i]$.
2. **Reverse Traversal:**
   - Iterate through the array from $n-1$ down to $0$.
3. **Maintain Monotonicity:**
   - Use a stack to store indices of elements encountered so far.
   - For current element `arr[i]`:
     - Pop indices from the stack as long as the elements at those indices are $\ge arr[i]$.
4. **Identify Boundary:**
   - If the stack is empty after popping, the "Next Smaller" is effectively at index $n$.
   - Otherwise, the top of the stack is the index of the Next Smaller Element.
5. **Count Subarrays:**
   - Number of valid subarrays starting at $i$ is `nextSmallerIndex - i`.
   - Accumulate this into the total answer.
6. **Update Stack:** Push current index $i$ onto the stack.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["ans = 0, stack = {}"]
    Init --> Loop["For i = n-1 down to 0"]
    Loop --> Pop["While stack not empty AND arr[top] >= arr[i]: \n Pop stack"]
    Pop --> Check{"stack empty?"}
    Check -->|Yes| BoundN["nextSmaller = n"]
    Check -->|No| BoundTop["nextSmaller = stack.top"]
    BoundN --> Calc["ans += (nextSmaller - i)"]
    BoundTop --> Calc
    Calc --> Push["Push i to stack"]
    Push --> Next["i--"]
    Next --> Loop
    Loop -->|Done| End([Return ans])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each element is pushed and popped exactly once. |
| **Space Complexity** | $O(N)$ - In the worst case, the stack stores all $N$ indices. |

---

> *"The first crack in a foundation determines the limit of the structure above it."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../41_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../43_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
