# 💡 Approach — Kahn's Algorithm (Topological Sort)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 80.45%](https://img.shields.io/badge/Acceptance-80.45%25-blue?style=for-the-badge)
![Topics: Graphs](https://img.shields.io/badge/Topics-Graphs-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The problem of completing courses with prerequisites can be modeled as finding a topological order in a Directed Acyclic Graph (DAG). If the graph contains a cycle, no such order exists. Kahn's Algorithm uses BFS and in-degrees to iteratively remove "source" nodes, naturally detecting cycles if the number of processed nodes is less than the total.

---

## 🔩 Step-by-Step Breakdown
1. **Build the Adjacency List:**
   - Create a graph where an edge $(y \to x)$ exists if $y$ is a prerequisite for $x$.
   - Simultaneously calculate the **in-degree** of each node (number of prerequisites per course).
2. **Initialize BFS Queue:**
   - Push all courses with `in-degree == 0` into a queue. These represent courses with no remaining prerequisites.
3. **Iterative Removal (BFS):**
   - While the queue is not empty:
     - Pop a course `u`.
     - Increment a `completedCount`.
     - For every neighbor `v` of `u`:
       - Decrement `in-degree[v]`.
       - If `in-degree[v]` becomes 0, push `v` to the queue.
4. **Final Verification:**
   - If `completedCount == n`, all courses can be finished.
   - Otherwise, a cycle exists, making it impossible.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Graph["Build AdjList \n Calculate In-Degrees"]
    Graph --> InitQueue["Push all nodes with \n In-Degree == 0 to Queue"]
    InitQueue --> While{"Queue Empty?"}
    While -->|No| Pop["Pop node 'u' \n count++"]
    Pop --> Neighbors["For each neighbor 'v' of 'u'"]
    Neighbors --> Decr["inDegree[v]--"]
    Decr --> ZeroCheck{"inDegree[v] == 0?"}
    ZeroCheck -->|Yes| Push["Push 'v' to Queue"]
    ZeroCheck -->|No| NextN[Next Neighbor]
    Push --> NextN
    NextN --> Neighbors
    Neighbors -->|Done| While
    While -->|Yes| Final{"count == n?"}
    Final -->|Yes| Success([Return true])
    Final -->|No| Fail([Return false])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(V + E)$ - Every node and edge is processed once. |
| **Space Complexity** | $O(V + E)$ - Adjacency list storage and in-degree array. |

---

> *"Dependencies are only manageable if they don't loop back to haunt you."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../55_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../57_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
