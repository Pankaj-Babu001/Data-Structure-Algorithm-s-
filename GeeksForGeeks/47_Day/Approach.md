# 💡 Approach — BFS with Horizontal Distance Mapping

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 32.87%](https://img.shields.io/badge/Acceptance-32.87%25-blue?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Vertical traversal requires grouping nodes by their "horizontal distance" (HD) from the root. BFS is superior to DFS here because it naturally maintains the top-to-bottom order within each vertical line. By using an `unordered_map` and tracking the `min_hd` and `max_hd`, we can produce the result in linear $O(N)$ time without the $O(\log N)$ overhead of an ordered map.

---

## 🔩 Step-by-Step Breakdown
1. **Define Horizontal Distance (HD):**
   - Root is at $HD = 0$.
   - Left child of a node at $HD$ is at $HD - 1$.
   - Right child of a node at $HD$ is at $HD + 1$.
2. **BFS Traversal:**
   - Use a queue to store pairs of `(Node*, HD)`.
   - As we traverse, store the node's data in an `unordered_map<int, vector<int>>`.
   - Update `min_hd` and `max_hd` to keep track of the range of vertical lines.
3. **Ordering Results:**
   - BFS ensures that nodes at the same HD are processed in level-order (top to bottom).
   - After traversal, iterate from `min_hd` to `max_hd`.
   - Extract vectors from the map in order.
4. **Efficiency Note:** Use `std::move` when collecting results from the map to avoid expensive copies of large vectors.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["min_hd=0, max_hd=0 \n map = {}, queue = {(root, 0)}"]
    Init --> Empty{"Queue Empty?"}
    Empty -->|No| Pop["Pop (node, hd)"]
    Pop --> MapAdd["map[hd].push_back(node.data) \n Update min_hd, max_hd"]
    MapAdd --> Left{"Left child?"}
    Left -->|Yes| PushL["Push (left, hd-1)"]
    Left -->|No| Right
    PushL --> Right{"Right child?"}
    Right -->|Yes| PushR["Push (right, hd+1)"]
    Right -->|No| Empty
    PushR --> Empty
    Empty -->|Yes| Collect["For i = min_hd to max_hd: \n res.push_back(move(map[i]))"]
    Collect --> End([Return res])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single BFS pass and a linear scan of the HD range. |
| **Space Complexity** | $O(N)$ - Storing all nodes in the map and the queue. |

---

> *"The structure of a tree is best understood by looking at the shadows it casts across the horizontal plane."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../46_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../48_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
