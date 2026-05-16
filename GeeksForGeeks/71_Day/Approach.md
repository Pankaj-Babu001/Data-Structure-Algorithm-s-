# 💡 Approach — Two-Pointer Optimization (Single Pass)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 54.25%](https://img.shields.io/badge/Acceptance-54.25%25-blue?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To segregate binary elements in a single pass, the two-pointer technique is the most efficient. By maintaining a `left` pointer for zeros and a `right` pointer for ones, we can greedily narrow down the middle while swapping misplaced elements. This ensures $O(N)$ time with minimal $O(1)$ auxiliary space.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Pointers:**
   - `left = 0` (pointing to the start of the array).
   - `right = N - 1` (pointing to the end of the array).
2. **Narrow the Search:**
   - While `left < right`:
     - Move `left` forward as long as `arr[left]` is already $0$.
     - Move `right` backward as long as `arr[right]` is already $1$.
3. **Swap Misplaced Elements:**
   - If `left < right` after movement, it means `arr[left]` is $1$ and `arr[right]` is $0$.
   - Swap them: `arr[left] = 0`, `arr[right] = 1`.
   - Increment `left` and decrement `right`.
4. **Termination:** The loop continues until the pointers meet, at which point all $0$s are on the left and $1$s are on the right.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["left = 0, right = N - 1"]
    Init --> Loop{"left < right?"}
    Loop -->|Yes| MoveLeft["While arr[left] == 0: left++"]
    MoveLeft --> MoveRight["While arr[right] == 1: right--"]
    MoveRight --> Check{"left < right?"}
    Check -->|Yes| Swap["arr[left] = 0 \n arr[right] = 1 \n left++, right--"]
    Swap --> Loop
    Check -->|No| Loop
    Loop -->|No| End([End])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each element is visited at most once by either pointer. |
| **Space Complexity** | $O(1)$ - In-place transformation using only two variables. |

---

> *"Sorting is just the art of putting things where they belong, one swap at a time."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../70_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../72_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
