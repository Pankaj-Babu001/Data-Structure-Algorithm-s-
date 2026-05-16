# 💡 Approach — Two Pointers (In-place Swap)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 45.51%](https://img.shields.io/badge/Acceptance-45.51%25-blue?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A single pointer can track the "correct" position of the next non-zero element. By swapping non-zeroes into this position, all zeroes are naturally bubbled to the end while maintaining the relative order of other elements.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Use a pointer `j = 0` to represent the index where the next non-zero element should be placed.
2. **Iterate:** Use a pointer `i` to traverse the array from $0$ to $n-1$.
3. **Swap on Non-zero:**
   - Whenever `arr[i]` is non-zero:
     - Swap `arr[i]` and `arr[j]`.
     - Increment `j`.
4. **Completion:** By the time `i` reaches the end, all non-zero elements have been moved to the front (indices $0$ to $j-1$), and all zeroes have been pushed to the remaining positions ($j$ to $n-1$).

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["j = 0"]
    Init --> Loop["For i = 0 to n-1"]
    Loop --> Check{"arr[i] != 0?"}
    Check -->|Yes| Swap["Swap(arr[i], arr[j]) \n j++"]
    Check -->|No| Next[Continue]
    Swap --> Next
    Next --> Loop
    Loop -->|Done| End([End])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the array. |
| **Space Complexity** | $O(1)$ - In-place modification with constant extra space. |

---

> *"Progress is moving forward while ensuring nothing valuable is left behind."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../32_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../34_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
