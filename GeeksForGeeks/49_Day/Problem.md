# [49. Burning Tree](https://www.geeksforgeeks.org/problems/burning-tree/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 53.53%](https://img.shields.io/badge/Acceptance-53.53%25-blue?style=for-the-badge)
![Submissions: 135K+](https://img.shields.io/badge/Submissions-135K%2B-brightgreen?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given the root of a binary tree and a `target` node value, find the minimum time required to burn the entire tree. The fire starts at the node with the `target` value and spreads at a rate of 1 node per second to its left child, right child, and parent.

**Note:** All node values are unique.

## 📌 Examples

**Example 1:**
> **Input:** `root = [1, 2, 3, 4, 5, 6, 7], target = 2`
> **Output:** `3`
> **Explanation:** 
> - 0s: Node 2 burns.
> - 1s: Nodes 4, 5, and 1 burn.
> - 2s: Node 3 burns.
> - 3s: Nodes 6 and 7 burn. Entire tree burnt.

**Example 2:**
> **Input:** `root = [1, 2, 3, 4, 5, N, 7, 8, N, N, 10], target = 10`
> **Output:** `5`

---

## 📐 Constraints
- $1 \le \text{number of nodes} \le 10^5$
- $1 \le \text{node data} \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Tree`
- `Breadth-First Search`
- `Graph`
- `Data Structures`

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
