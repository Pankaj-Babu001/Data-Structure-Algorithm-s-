# 💡 Approach — DFS with Prefix Sum Hashing

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 44.73%](https://img.shields.io/badge/Acceptance-44.73%25-blue?style=for-the-badge)
![Topics: Backtracking](https://img.shields.io/badge/Topics-Backtracking-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** This problem is the tree equivalent of finding a subarray with sum $K$. By maintaining a hash map of prefix sums along the current path from the root, we can check in $O(1)$ how many subpaths ending at the current node sum to $K$. This reduces the complexity from $O(N^2)$ (checking all node pairs) to $O(N)$.

---

## 🔩 Step-by-Step Breakdown
1. **The Core Logic:**
   - As we traverse the tree from root to leaf, maintain a running `currSum`.
   - Any path segment ending at the current node that sums to $K$ must have started at a previous node where the prefix sum was `currSum - K`.
2. **Frequency Mapping:**
   - Use `unordered_map<long long, int>` to store the frequency of each prefix sum encountered on the current path.
   - Initialize `map[0] = 1` to account for paths starting exactly from the root.
3. **DFS Traversal:**
   - Update `currSum` with the current node's data.
   - Add `map[currSum - K]` to the total count.
   - Increment the frequency of `currSum` in the map.
4. **Backtracking (Crucial Step):**
   - After exploring left and right subtrees, decrement the frequency of `currSum` in the map.
   - This ensures that only prefix sums from the *current* path are considered, preventing nodes from parallel branches from interfering.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["map = {0: 1}, count = 0"]
    Init --> DFS["solve(node, currSum)"]
    DFS --> CheckNull{"node == NULL?"}
    CheckNull -->|Yes| Back[Return]
    CheckNull -->|No| CalcSum["currSum += node.data"]
    CalcSum --> CheckK["count += map[currSum - K]"]
    CheckK --> UpdateMap["map[currSum]++"]
    UpdateMap --> Recurse["solve(node.left, currSum) \n solve(node.right, currSum)"]
    Recurse --> PopMap["map[currSum]--"]
    PopMap --> Back
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each node is visited exactly once. |
| **Space Complexity** | $O(H)$ - Recursion stack depth and map size are proportional to tree height. |

---

> *"A path is not just a destination, but a sequence of values that find their balance in $K$."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../47_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../49_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
