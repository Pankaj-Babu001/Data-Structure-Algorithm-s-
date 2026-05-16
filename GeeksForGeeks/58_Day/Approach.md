# 💡 Approach — Dijkstra with DP (Shortest Path Counting)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To count the number of shortest paths, we can augment the standard Dijkstra's algorithm with a dynamic programming array `ways[]`. When we relax an edge $(u, v)$, if a strictly shorter path to $v$ is found, the number of ways to reach $v$ becomes the number of ways to reach $u$. If a path of equal length is found, we sum the ways from $u$ into $v$. This combines greediness with combinatorial logic.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Data Structures:**
   - `dist[V]`: Initialized to $\infty$. Set `dist[0] = 0`.
   - `ways[V]`: Initialized to 0. Set `ways[0] = 1`.
   - `pq`: A min-heap to store `{currentDistance, node}`.
2. **Standard Dijkstra Traversal:**
   - Pop the node `u` with the smallest `currentDistance`.
   - If `currentDistance > dist[u]`, skip (stale entry).
3. **Relaxing Edges:**
   - For each neighbor `v` with edge weight `w`:
     - **Case A: Strictly Shorter Path Found** (`dist[u] + w < dist[v]`):
       - Update `dist[v] = dist[u] + w`.
       - Update `ways[v] = ways[u]`.
       - Push `{dist[v], v}` to `pq`.
     - **Case B: Alternative Shortest Path Found** (`dist[u] + w == dist[v]`):
       - Increment `ways[v] = (ways[v] + ways[u]) % MOD`.
4. **Result:** The value in `ways[V-1]` after all possible paths are explored.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["dist[V] = inf, ways[V] = 0 \n dist[0] = 0, ways[0] = 1 \n pq = {{0, 0}}"]
    Init --> While{"PQ Empty?"}
    While -->|No| Pop["Pop {d, u}"]
    Pop --> CheckStale{"d > dist[u]?"}
    CheckStale -->|Yes| While
    CheckStale -->|No| Neighbors["For each neighbor v with weight w"]
    Neighbors --> NewDist{"d + w < dist[v]?"}
    NewDist -->|Yes| Update["dist[v] = d + w \n ways[v] = ways[u] \n push({dist[v], v})"]
    NewDist -->|No| EqualDist{"d + w == dist[v]?"}
    EqualDist -->|Yes| SumWays["ways[v] = (ways[v] + ways[u]) % MOD"]
    Update --> NextN[Next Neighbor]
    SumWays --> NextN
    EqualDist -->|No| NextN
    NextN --> Neighbors
    Neighbors -->|Done| While
    While -->|Yes| End([Return ways[V-1]])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(E \log V)$ - Dijkstra's priority queue operations. |
| **Space Complexity** | $O(V + E)$ - Adjacency list and distance/ways arrays. |

---

> *"The shortest path is a destination; the number of ways is a journey."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../57_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../59_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
