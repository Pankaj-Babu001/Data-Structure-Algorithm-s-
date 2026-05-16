# 💡 Approach — Binary Search for Minimum Element

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 60%](https://img.shields.io/badge/Acceptance-60%25-blue?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** In a sorted rotated array, the number of right rotations is exactly equal to the **index of the minimum element**. Since the array was originally sorted, we can find this index in $O(\log N)$ using Binary Search.

---

## 🔩 Step-by-Step Breakdown
1. **Sorted Check:** If `arr[0] <= arr[n-1]`, the array is not rotated (return `0`).
2. **Binary Search:**
   - Initialize `low = 0`, `high = n-1`.
   - Calculate `mid = low + (high - low) / 2`.
   - If `arr[mid] > arr[high]`: The minimum element must be in the right half (set `low = mid + 1`).
   - Else: The minimum element is in the left half or is `mid` itself (set `high = mid`).
3. **Loop End:** When `low == high`, `low` points to the minimum element's index.
4. **Result:** Return `low`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Sorted{"arr[0] <= arr[n-1]?"}
    Sorted -->|Yes| Zero[Return 0]
    Sorted -->|No| Init["Init low=0, high=n-1"]
    Init --> Loop{"low < high"}
    Loop --> Mid["mid = low + high-low/2"]
    Mid --> Right{"arr[mid] > arr[high]?"}
    Right -->|Yes| MoveLow["low = mid + 1"]
    Right -->|No| MoveHigh["high = mid"]
    MoveLow --> Loop
    MoveHigh --> Loop
    Loop -->|Done| End("[Return low]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(\log N)$ - Standard Binary Search approach. |
| **Space Complexity** | $O(1)$ - No auxiliary space used. |

---

> *"The pivot point is the key; find the smallest, and the rotation is revealed."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../12_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../14_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
