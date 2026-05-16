# 💡 Approach — Interleave First Half of the Queue with Second Half

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 62.41%](https://img.shields.io/badge/Acceptance-62.41%25-blue?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

---
> [!TIP]
> **Core Insight:** A queue's FIFO property can be manipulated using a stack's LIFO property. To interleave, we need the first half in a stack (temporarily reversed) and then repositioned so we can alternate between the stack top and the queue front.

---
## 🔩 Step-by-Step Breakdown
1. **Move First Half to Stack:** Pop $N/2$ elements from the queue and push them into an auxiliary stack.
2. **Reverse into Queue:** Enqueue stack elements back to the queue. (This puts the first half at the back, but reversed).
3. **Reposition Second Half:** Dequeue $N/2$ elements (the second half) and enqueue them back to the rear. Now the reversed first half is at the front.
4. **Prepare for Interleaving:** Pop $N/2$ elements (reversed first half) and push them back into the stack. Now the stack top is the original first element!
5. **Interleave:** Alternately pop from the stack (First Half) and the queue (Second Half), pushing each into the rear of the queue.

---
## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> S1[Pop N/2 to Stack]
    S1 --> S2[Push Stack back to Queue]
    S2 --> S3[Move current front N/2 to Back]
    S3 --> S4[Pop current front N/2 to Stack]
    S4 --> Interleave{Interleave Stack & Queue}
    Interleave --> Loop[Push s.top, Pop s, Push q.front, Pop q]
    Loop --> Interleave
    Interleave -->|Done| End("[Finish]")
```
---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Multiple passes over the halves. |
| **Space Complexity** | $O(N)$ - Auxiliary stack used for $N/2$ elements. |

---

> *"In the dance of data, interleaving is the art of perfect timing."*

---
<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../02_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../04_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
