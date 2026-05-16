# 💡 Approach — Sliding Window Maximum using Deque

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|
</div>

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 35%](https://img.shields.io/badge/Acceptance-35%25-blue?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

> [!TIP]
> **Core Insight:** To find the maximum in $O(1)$ during a sliding window, maintain a **Monotonic Deque** that stores indices of elements in decreasing order. When a new element comes, remove all smaller elements from the back of the deque because they can never be the maximum again.

## 🔩 Step-by-Step Breakdown
1. **Initialize Deque:** Create a `deque<int>` to store indices. The elements at these indices in `arr` will be maintained in descending order.
2. **Slide the Window:** Iterate through the array with index `i`.
3. **Remove Out-of-Range:** If `dq.front() == i - k`, the current maximum index is outside the window. Pop it from the front.
4. **Maintain Monotonicity:** While `dq` is not empty and `arr[i] >= arr[dq.back()]`, the elements at `dq.back()` are smaller and appear earlier than `arr[i]`. They are useless; pop them from the back.
5. **Push Current:** Add the current index `i` to the back of the deque.
6. **Capture Result:** Once the first window is formed ($i \ge k-1$), the index at `dq.front()` points to the maximum element of the current window.

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init[Init res, deque dq]
    Init --> Loop{"For i = 0 to N-1"}
    Loop --> Range{"dq.front == i - k?"}
    Range -->|Yes| PopF[dq.pop_front]
    Range -->|No| Mono{"While arr[i] >= arr[dq.back]"}
    PopF --> Mono
    Mono -->|Yes| PopB[dq.pop_back]
    PopB --> Mono
    Mono -->|No| Push[dq.push_back i]
    Push --> Window{"i >= k - 1?"}
    Window -->|Yes| Res["res.push arr[dq.front]"]
    Res --> Next[Next i]
    Window -->|No| Next
    Next --> Loop
    Loop -->|End| Finish("[Return res]")
```

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each element is pushed and popped at most once. |
| **Space Complexity** | $O(K)$ - Deque stores at most $K$ indices. |

> *"In a sliding window, only the giants at the front truly matter."*
---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../04_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../06_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
