# 💡 Approach — Post-Order DFS (BST Property Validation)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 29.73%](https://img.shields.io/badge/Acceptance-29.73%25-blue?style=for-the-badge)
![Topics: BST](https://img.shields.io/badge/Topics-BST-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** To identify the largest BST subtree, we must validate each node bottom-up. A node is part of a BST if its children are BST roots and its value is strictly between the maximum of the left subtree and the minimum of the right subtree. By returning min, max, and size in a single DFS pass, we achieve $O(N)$ time.

---

## 🔩 Step-by-Step Breakdown
1. **The Bottom-Up Strategy:**
   - A node $U$ is a BST root if:
     - Its left child $L$ is a BST root.
     - Its right child $R$ is a BST root.
     - $\max(L) < U.data < \min(R)$.
2. **Information Passing:**
   - Each recursive call returns a custom object or updates references for:
     - `minVal`: The minimum value in the subtree.
     - `maxVal`: The maximum value in the subtree.
     - `size`: The total number of nodes in the subtree.
     - `isBST`: A boolean flag (often represented by size = -1 if invalid).
3. **Recursive Logic:**
   - For a leaf node: return `{min: data, max: data, size: 1, isBST: true}`.
   - For an internal node:
     - If both children are BSTs and constraints are met:
       - `newSize = left.size + right.size + 1`.
       - Update global `maxBSTSize`.
       - Return `{min: min(data, left.min), max: max(data, right.max), size: newSize}`.
     - Else:
       - Return `{min: -INF, max: INF, size: -1, isBST: false}`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> DFS["solve(node)"]
    DFS --> CheckNull{"node == NULL?"}
    CheckNull -->|Yes| RetBase["size=0, min=INF, max=-INF"]
    CheckNull -->|No| Recurse["left = solve(node.left) \n right = solve(node.right)"]
    Recurse --> CheckBST{"left.size != -1 AND right.size != -1 \n AND left.max < node.data < right.min?"}
    CheckBST -->|Yes| Valid["currSize = left.size + right.size + 1 \n maxBST = max(maxBST, currSize) \n Return {currSize, min(node.data, left.min), max(node.data, right.max)}"]
    CheckBST -->|No| Invalid["Return {size=-1, min=-INF, max=INF}"]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - One post-order traversal visits every node once. |
| **Space Complexity** | $O(H)$ - Recursion stack depth equals tree height. |

---

> *"The strength of a tree is found at its roots, but its identity is validated leaf by leaf."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../50_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../52_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
