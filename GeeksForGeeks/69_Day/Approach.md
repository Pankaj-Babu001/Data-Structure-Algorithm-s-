# 💡 Approach — Greedy Priority Queue (Optimal Prefix Coding)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Topics: Greedy](https://img.shields.io/badge/Topics-Greedy-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Huffman encoding uses a greedy strategy to build an optimal binary tree where more frequent characters have shorter bit strings. By maintaining a min-priority queue of nodes and iteratively merging the two smallest, we ensure a minimal weighted external path length. Stability during merging (handling ties) is crucial for matching specific problem requirements, often achieved by tracking insertion indices.

---

## 🔩 Step-by-Step Breakdown
1. **Node Structure:**
   - Define a `Node` containing frequency (`data`), an `index` for tie-breaking, and pointers to `left` and `right` children.
2. **Min-Heap Setup:**
   - Insert all characters as leaf nodes into a Priority Queue.
   - Use a custom comparator that prioritizes lower frequency, then lower index.
3. **Iterative Merging:**
   - While the queue has more than one node:
     - Pop two nodes `L` and `R`.
     - Create a parent node with `data = L->data + R->data`.
     - Assign `L` as the left child and `R` as the right child.
     - Set the parent's `index` to $\min(L->index, R->index)$ to maintain stability.
     - Push the parent back into the queue.
4. **Traversal:**
   - Once the root is formed, perform a **Preorder Traversal**.
   - Append `'0'` when moving left and `'1'` when moving right.
   - Store codes when a leaf node is reached.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> PQ["Fill Min-Priority Queue with Nodes \n (freq, original_index)"]
    PQ --> Loop{"Queue size > 1?"}
    Loop -->|Yes| Pop2["Pop Node L (smallest) \n Pop Node R (second smallest)"]
    Pop2 --> Merge["Create Parent Node \n freq = L.freq + R.freq \n left = L, right = R"]
    Merge --> Push["Push Parent to PQ"]
    Push --> Loop
    Loop -->|No| Preorder["Root = PQ.top() \n Start Preorder Traversal"]
    Preorder --> Visit{"Is Leaf?"}
    Visit -->|Yes| Store["Add code to result"]
    Visit -->|No| Branch["Traverse Left (add '0') \n Traverse Right (add '1')"]
    Branch --> Visit
    Store --> End([Return All Codes])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - $N$ insertions and deletions from the priority queue. |
| **Space Complexity** | $O(N)$ - To store the Huffman tree and priority queue. |

---

> *"Greed is good when it builds the shortest path to information."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../68_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../70_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
