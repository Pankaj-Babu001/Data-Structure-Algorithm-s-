# 💡 Approach — Leaf Removal (Centroid Finding)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 68.59%](https://img.shields.io/badge/Acceptance-68.59%25-blue?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To minimize the height of a tree, the root must be chosen as one of the central nodes. By iteratively removing all current leaf nodes (degree 1) layer-by-level, we eventually narrow down the graph to its core—at most two nodes. This is analogous to finding the "Centroid" of an undirected graph with tree characteristics.

---

## 🔩 Step-by-Step Breakdown
1. **Handle Base Case:**
   - If $V \le 2$, return all available nodes as they are inherently central.
2. **Build Adjacency List & Degrees:**
   - Construct the graph.
   - For each node, store its current degree.
3. **Identify Initial Leaves:**
   - A leaf node is defined as having `degree == 1`.
   - Add all initial leaves to a queue.
4. **Layer-by-Layer Peeling:**
   - While the total remaining vertices $V > 2$:
     - Subtract the current number of leaves from $V$.
     - For each leaf in the current layer:
       - Find its neighbor(s).
       - Decrement the neighbor's degree.
       - If a neighbor's degree becomes 1, it is a leaf for the next layer. Push it to the queue.
5. **Extract Result:** The nodes remaining in the queue after the loop are the roots of the Minimum Height Trees.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Base{"V <= 2?"}
    Base -->|Yes| RetAll[Return all nodes]
    Base -->|No| Build["Build Adjacency List \n Calculate Degrees"]
    Build --> InitQueue["Push nodes with \n Degree == 1 to Queue"]
    InitQueue --> Loop{"Remaining V > 2?"}
    Loop -->|Yes| ProcessLayer["LayerSize = Queue.size \n V -= LayerSize"]
    ProcessLayer --> Inner["For each leaf in Layer: \n Decr neighbor.degree"]
    Inner --> NewLeaf{"Neighbor.degree == 1?"}
    NewLeaf -->|Yes| PushNext["Push neighbor to Queue"]
    NewLeaf -->|No| NextLeaf[Next Leaf]
    PushNext --> NextLeaf
    NextLeaf --> Inner
    Inner -->|Done| Loop
    Loop -->|No| Result["Extract Queue nodes"]
    Result --> End([Return Result])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(V)$ - Each node and edge is processed at most once as it becomes a leaf. |
| **Space Complexity** | $O(V)$ - Storing adjacency list and degree array. |

---

> *"The center of a tree is where the balance is found; everything else is just a branch."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../56_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../58_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
