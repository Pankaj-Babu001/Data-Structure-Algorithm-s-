# 💡 Approach — Multi-Source BFS (Grid Spreading)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 46.02%](https://img.shields.io/badge/Acceptance-46.02%25-blue?style=for-the-badge)
![Topics: BFS](https://img.shields.io/badge/Topics-BFS-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** This is a classic multi-source BFS problem. By treating all initial rotten oranges as sources and processing the grid level-by-level, we can find the minimum time for the rot to reach every possible cell. Multi-source BFS ensures that each fresh orange is rotted at the earliest possible second.

---

## 🔩 Step-by-Step Breakdown
1. **Initial Scan:**
   - Traverse the entire grid.
   - Count the number of fresh oranges (`freshCount`).
   - Add the coordinates of all rotten oranges (`val = 2`) to a queue.
2. **Handle Base Case:**
   - If `freshCount == 0`, return 0 (no time needed).
3. **Multi-Source BFS:**
   - Use a `while` loop that runs as long as the queue is not empty.
   - At each level (representing 1 minute):
     - Record the current `size` of the queue.
     - For each rotten orange in the current level:
       - Check its 4 neighbors (Up, Down, Left, Right).
       - If a neighbor is fresh (`val = 1`):
         - Set neighbor to rotten (`val = 2`).
         - Decrement `freshCount`.
         - Push neighbor coordinates into the queue for the next level.
     - If any oranges were rotted in this level, increment `time`.
4. **Final Check:**
   - If `freshCount == 0`, return the total `time`.
   - Else, return `-1` (some fresh oranges were unreachable).

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Scan["Scan Grid: \n 1. Count FreshOranges \n 2. Add Rotten to Queue"]
    Scan --> Base{"FreshCount == 0?"}
    Base -->|Yes| Zero[Return 0]
    Base -->|No| BFS["while Queue AND FreshCount > 0"]
    BFS --> Level["time++ \n Process current queue size"]
    Level --> Neighbors["For each neighbor: \n If fresh -> rot, freshCount--, push to Queue"]
    Neighbors --> BFS
    BFS -->|Done| Final{"FreshCount == 0?"}
    Final -->|Yes| End([Return time])
    Final -->|No| Fail([Return -1])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \times M)$ - Each cell is visited at most once. |
| **Space Complexity** | $O(N \times M)$ - The queue can store all cells in the worst case. |

---

> *"Rot spreads like a wave; BFS is the only way to track its crest."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../53_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../55_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
