# 💡 Approach — Post-Order Traversal (Excess/Deficit Balancing)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 63.24%](https://img.shields.io/badge/Acceptance-63.24%25-blue?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Every edge in the tree must transport the exact amount of "excess" or "deficit" candies required by the subtree below it to reach a state of 1 candy per node. By performing a post-order DFS, we can calculate the local balance of each subtree and sum the absolute values of these balances to find the minimum moves.

---

## 🔩 Step-by-Step Breakdown
1. **Define Balance:**
   - For any node $u$, let $B(u)$ be the number of candies it currently has.
   - For a subtree rooted at $u$, the total excess/deficit candies that *must* cross the edge $(u, \text{parent}(u))$ is:
     $Excess(u) = B(u) - 1 + Excess(\text{left}) + Excess(\text{right})$.
2. **Greedy Move Counting:**
   - Every candy moving through an edge counts as 1 move.
   - The total moves contributed by the edges to children of $u$ are $|Excess(\text{left})| + |Excess(\text{right})|$.
3. **Post-Order DFS:**
   - Recursively visit left and right children.
   - Calculate their excess.
   - Accumulate the absolute excess into a global `totalMoves` variable.
   - Return the current node's excess to its parent.
4. **Result:** The accumulated `totalMoves`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["totalMoves = 0"]
    Init --> DFS["solve(node)"]
    DFS --> CheckNull{"node == NULL?"}
    CheckNull -->|Yes| RetZero[Return 0]
    CheckNull -->|No| Recurse["leftEx = solve(node.left) \n rightEx = solve(node.right)"]
    Recurse --> Update["totalMoves += abs(leftEx) + abs(rightEx)"]
    Update --> RetCurr["Return node.data + leftEx + rightEx - 1"]
    RetCurr --> End([End])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each node is visited exactly once. |
| **Space Complexity** | $O(H)$ - Recursion stack depth is proportional to tree height. |

---

> *"Balance is not a static state, but the sum of all adjustments made along the way."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../49_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../51_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
