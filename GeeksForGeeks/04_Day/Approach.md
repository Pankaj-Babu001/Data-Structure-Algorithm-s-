# 💡 Approach — N Queues in an Array

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|
</div>

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 61.88%](https://img.shields.io/badge/Acceptance-61.88%25-blue?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

> [!TIP]
> **Core Insight:** To efficiently share space between $K$ queues in a single array of size $N$, treat the array as a pool of nodes. Use a **Linked List** approach where `next[]` stores either the next element in a queue or the next free slot in the array. This prevents "segment starvation" where one queue is full while others are empty.

## 🔩 Step-by-Step Breakdown
1. **Initialize Arrays:**
   - `arr[n]`: Stores actual data.
   - `front[k]`, `rear[k]`: Store front and rear indices for each queue (init to -1).
   - `next[n]`: Serves dual purposes (next element in queue OR next free slot).
   - `freeSpot`: Points to the first available index in `arr`.
2. **Enqueue Operation:**
   - Check if `freeSpot == -1` (Full).
   - Pick `index = freeSpot`, update `freeSpot = next[index]`.
   - If queue is empty, set `front[qi] = index`. Else, link current `rear[qi]` to `index` via `next`.
   - Set `next[index] = -1` and update `rear[qi] = index`.
3. **Dequeue Operation:**
   - Check if `front[qi] == -1` (Empty).
   - Get `index = front[qi]`.
   - Update `front[qi] = next[index]`.
   - Recycle the slot: Set `next[index] = freeSpot` and `freeSpot = index`.

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init[Init arrays: arr, front, rear, next, freeSpot]
    Init --> Op{Choose Operation}
    Op -->|Enqueue| EnCheck{"freeSpot == -1?"}
    EnCheck -->|Yes| Full[Overflow]
    EnCheck -->|No| EnProcess["Pick index=freeSpot, update freeSpot=next"]
    EnProcess --> Link[Link index to current rear or set as front]
    Link --> DoneEn["arr index = x, update rear"]
    Op -->|Dequeue| DeCheck{"front == -1?"}
    DeCheck -->|Yes| Empty[Underflow]
    DeCheck -->|No| DeProcess["Pick index=front, update front=next"]
    DeProcess --> Recycle["next index = freeSpot, freeSpot = index"]
    Recycle --> DoneDe[Return arr index]
```

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(1)$ for all operations (Enqueue, Dequeue, isEmpty, isFull). |
| **Space Complexity** | $O(N + K)$ to store auxiliary arrays. |

> *"Efficient space management is the difference between a functioning system and a collapsed one."*
---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../03_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../05_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
