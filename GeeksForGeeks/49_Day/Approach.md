# 💡 Approach — BFS with Parent Mapping

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 53.53%](https://img.shields.io/badge/Acceptance-53.53%25-blue?style=for-the-badge)
![Topics: BFS](https://img.shields.io/badge/Topics-BFS-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Fire spreading in a tree can be modeled as a Breadth-First Search (BFS) in an undirected graph. Since binary trees only provide child pointers, we must first build a "Parent Map" to allow fire to spread upwards to parents. The time required is simply the number of levels (BFS depth) from the target node to the furthest leaf.

---

## 🔩 Step-by-Step Breakdown
1. **Graph Construction (Parent Mapping):**
   - Traverse the tree (using BFS or DFS) to map every node to its parent.
   - While traversing, locate the `target` node.
2. **Burn Simulation (BFS):**
   - Use a queue for BFS, starting with the `target` node at time 0.
   - Use a `visited` set to prevent fire from re-burning nodes.
3. **Level-Order Expansion:**
   - At each second (level), process all nodes currently in the queue.
   - For each burning node, spread fire to its:
     - Left child
     - Right child
     - Parent (retrieved from the parent map)
   - If any new node is added to the queue, increment the `time` counter.
4. **Result:** The total time taken until the queue is empty.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Map["DFS/BFS: Build ParentMap \n Locate TargetNode"]
    Map --> Init["queue = {TargetNode} \n visited = {TargetNode} \n time = 0"]
    Init --> Empty{"Queue Empty?"}
    Empty -->|No| Level["size = queue.size \n burntNew = false"]
    Level --> NodeLoop["For 1 to size: \n curr = pop()"]
    NodeLoop --> Left["curr.left exists AND unvisited?"]
    Left -->|Yes| PushL["push(left), visited=true, burntNew=true"]
    Left -->|No| Right["curr.right exists AND unvisited?"]
    PushL --> Right
    Right -->|Yes| PushR["push(right), visited=true, burntNew=true"]
    Right -->|No| Parent["curr.parent exists AND unvisited?"]
    PushR --> Parent
    Parent -->|Yes| PushP["push(parent), visited=true, burntNew=true"]
    Parent -->|No| CheckDone
    PushP --> CheckDone{"All nodes in level done?"}
    CheckDone -->|No| NodeLoop
    CheckDone -->|Yes| Time["burntNew == true? \n time++"]
    Time --> Empty
    Empty -->|Yes| End([Return time])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - One pass to build parents, one pass for BFS. |
| **Space Complexity** | $O(N)$ - Parent map, visited set, and BFS queue. |

---

> *"Fire doesn't care about the hierarchy of the tree; it only sees the connections."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../48_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../50_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
