# 💡 Approach — Sliding Window / Two Pointers

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Maintaining a window `[left, right]` where the count of `0`s never exceeds `k` allows us to find the longest subarray of "effectively" consecutive `1`s in linear time. As `right` expands, `left` only moves forward when the window becomes invalid.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Start with `left = 0`, `zeros = 0`, and `maxLen = 0`.
2. **Expand:** Move the `right` pointer from `0` to $N-1$.
3. **Count Zeros:** If `arr[right] == 0`, increment the `zeros` count.
4. **Shrink:** While `zeros > k`, move the `left` pointer forward. If `arr[left]` was a `0`, decrement the `zeros` count before incrementing `left`.
5. **Update Max:** At each step, calculate the current window size `right - left + 1` and update `maxLen`.
6. **Return:** After the loop, `maxLen` holds the maximum consecutive `1`s.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init left=0, zeros=0, maxLen=0"]
    Init --> Loop{"For right = 0 to N-1"}
    Loop --> Zero{"arr[right] == 0?"}
    Zero -->|Yes| IncZ["zeros++"]
    Zero -->|No| CheckValid
    IncZ --> CheckValid
    CheckValid{zeros > k?}
    CheckValid -->|Yes| Shrink["If arr[left]==0 zeros-- \n left++"]
    Shrink --> CheckValid
    CheckValid -->|No| Max["maxLen = max maxLen, right-left+1"]
    Max --> Next["right++"]
    Next --> Loop
    Loop -->|Done| End("[Return maxLen]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each element is visited at most twice. |
| **Space Complexity** | $O(1)$ - No extra space used besides variables. |

---

> *"The window slides, the zeros flip, and the longest sequence emerges from the chaos."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../08_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../10_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
