# 💡 Approach — Tarjan's Algorithm (Discovery & Low-Link Values)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 45%](https://img.shields.io/badge/Acceptance-45%25-blue?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** An articulation point is a vertex whose removal increases the number of connected components. Tarjan's algorithm identifies these efficiently in $O(V+E)$ by tracking the discovery time (`tin`) and the lowest reachable discovery time (`low`) for each node. A node $U$ is an articulation point if it has a child $V$ such that no back-edge exists from $V$ or its subtree to any ancestor of $U$ (i.e., `low[V] >= tin[U]`).

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Discovery & Low Values:**
   - `tin[V]`: Stores the time at which each node was discovered.
   - `low[V]`: Stores the lowest `tin` reachable from the node.
2. **DFS Traversal:**
   - For each unvisited node `u`, start a DFS with `timer = 0`.
   - Update `tin[u] = low[u] = timer++`.
3. **Explore Neighbors:**
   - For each neighbor `v` of `u`:
     - If `v` is the parent of `u`, ignore it.
     - **If `v` is unvisited:**
       - Recursively call DFS for `v`.
       - Update `low[u] = min(low[u], low[v])`.
       - **Articulation Point Check:** If `low[v] >= tin[u]` AND `u` is not the root, mark `u` as an AP.
       - Increment `children` count for `u`.
     - **If `v` is visited:**
       - Update `low[u] = min(low[u], tin[v])` (Back-edge found).
4. **Special Case (Root):**
   - If `u` is the root and has more than 1 child in the DFS tree, it is an articulation point.
5. **Format Output:** Collect all marked points, sort them, and handle the empty case by returning `{-1}`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["tin[V], low[V], vis[V] \n timer = 0"]
    Init --> Loop["For each unvisited node u"]
    Loop --> DFS["DFS(u, parent)"]
    DFS --> Set["tin[u] = low[u] = timer++"]
    Set --> Neighbors["For each neighbor v"]
    Neighbors --> Parent{"v == parent?"}
    Parent -->|Yes| NextN[Next Neighbor]
    Parent -->|No| Visited{"vis[v]?"}
    Visited -->|No| Sub["DFS(v, u) \n low[u] = min(low[u], low[v])"]
    Sub --> Cond{"low[v] >= tin[u] AND parent != -1?"}
    Cond -->|Yes| Mark[Mark u as AP]
    Cond -->|No| RootCheck["count children++"]
    Visited -->|Yes| Back["low[u] = min(low[u], tin[v])"]
    Back --> NextN
    Mark --> NextN
    RootCheck --> NextN
    NextN --> Neighbors
    Neighbors -->|Done| RootFinal{"parent == -1 AND children > 1?"}
    RootFinal -->|Yes| Mark
    RootFinal -->|No| Loop
    Loop -->|Done| End([Return sorted APs])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(V + E)$ - Standard DFS traversal. |
| **Space Complexity** | $O(V + E)$ - Adjacency list and discovery/low/vis arrays. |

---

> *"A single point of failure can bring down a network; finding it is the first step to resilience."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../59_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../61_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
