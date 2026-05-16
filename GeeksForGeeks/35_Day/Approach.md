# 💡 Approach — Sliding Window (Variable Size)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 47.98%](https://img.shields.io/badge/Acceptance-47.98%25-blue?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** This is a classic sliding window problem. By maintaining a frequency map of elements in the current window and shrinking the left boundary whenever the distinct count exceeds two, we can identify the maximum valid range in a single $O(N)$ pass.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** 
   - `left = 0`, `maxLen = 0`.
   - Use a hash map (or a frequency array) to track counts of elements in the window.
2. **Expand Window:**
   - Iterate with `right` from $0$ to $n-1$.
   - Add `arr[right]` to the frequency map.
3. **Shrink Window:**
   - If the map size exceeds 2:
     - While map size > 2:
       - Decrease frequency of `arr[left]`.
       - If frequency of `arr[left]` becomes 0, remove it from the map.
       - Increment `left`.
4. **Update:**
   - Calculate current window size: `right - left + 1`.
   - Update `maxLen = max(maxLen, currentSize)`.
5. **Return:** The `maxLen` found.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["left = 0, maxLen = 0, map = {}"]
    Init --> Loop["For right = 0 to n-1"]
    Loop --> Add["map[arr[right]]++"]
    Add --> CheckSize{"map.size > 2?"}
    CheckSize -->|Yes| Shrink["map[arr[left]]-- \n If map[arr[left]] == 0 remove key \n left++"]
    Shrink --> CheckSize
    CheckSize -->|No| Update["maxLen = max(maxLen, right-left+1)"]
    Update --> Next["right++"]
    Next --> Loop
    Loop -->|Done| End([Return maxLen])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each element is added and removed from the window at most once. |
| **Space Complexity** | $O(1)$ - The hash map stores at most 3 elements at any given time. |

---

> *"The width of the view is constrained by the diversity of its elements."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../34_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../36_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
