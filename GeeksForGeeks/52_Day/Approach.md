# 💡 Approach — Iterative Search in BST

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 47.36%](https://img.shields.io/badge/Acceptance-47.36%25-blue?style=for-the-badge)
![Topics: BST](https://img.shields.io/badge/Topics-BST-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** In a Binary Search Tree, the in-order predecessor of a key is the largest value strictly less than it, and the successor is the smallest value strictly greater than it. We can find both using iterative traversals in $O(H)$ time without full recursion, minimizing space overhead.

---

## 🔩 Step-by-Step Breakdown
1. **Find Successor (Smallest value > Key):**
   - Start from the root.
   - If `curr.data > key`:
     - This node is a candidate. Store it in `suc`.
     - Move **left** to see if a smaller candidate exists.
   - Else:
     - Move **right** (successor must be larger than current data).
2. **Find Predecessor (Largest value < Key):**
   - Start from the root.
   - If `curr.data < key`:
     - This node is a candidate. Store it in `pre`.
     - Move **right** to see if a larger candidate exists.
   - Else:
     - Move **left** (predecessor must be smaller than current data).
3. **Handle Missing Values:** If the loop finishes without finding a candidate, the pointer remains `NULL`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Succ["Find Successor"]
    Succ --> SLoop["curr = root, suc = NULL"]
    SLoop --> SEmpty{"curr == NULL?"}
    SEmpty -->|No| SComp{"curr.data > key?"}
    SComp -->|Yes| SUpd["suc = curr, curr = curr.left"]
    SComp -->|No| SRight["curr = curr.right"]
    SUpd --> SEmpty
    SRight --> SEmpty
    SEmpty -->|Yes| Pred["Find Predecessor"]
    
    Pred --> PLoop["curr = root, pre = NULL"]
    PLoop --> PEmpty{"curr == NULL?"}
    PEmpty -->|No| PComp{"curr.data < key?"}
    PComp -->|Yes| PUpd["pre = curr, curr = curr.right"]
    PComp -->|No| PLeft["curr = curr.left"]
    PUpd --> PEmpty
    PLeft --> PEmpty
    PEmpty -->|Yes| End([Return {pre, suc}])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(H)$ - We traverse down the height of the tree at most twice. |
| **Space Complexity** | $O(1)$ - Iterative approach using only pointers. |

---

> *"The BST property is a roadmap; the predecessor is where you came from, and the successor is where you're going."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../51_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../53_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
