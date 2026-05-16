# [51. Largest BST](https://www.geeksforgeeks.org/problems/largest-bst/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 29.73%](https://img.shields.io/badge/Acceptance-29.73%25-blue?style=for-the-badge)
![Submissions: 197K+](https://img.shields.io/badge/Submissions-197K%2B-brightgreen?style=for-the-badge)
![Topics: Tree](https://img.shields.io/badge/Topics-Tree-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a binary tree, find the size of the **largest subtree** that is also a Binary Search Tree (BST). The size is defined as the number of nodes in the subtree.

**Note:** A subtree is a BST if for every node:
- All values in the left subtree are strictly smaller than the node's value.
- All values in the right subtree are strictly greater than the node's value.
- There are no duplicate values.

## 📌 Examples

**Example 1:**
> **Input:** `root = [5, 2, 4, 1, 3]`
> **Output:** `3`
> **Explanation:** The subtree rooted at 2 (nodes 2, 1, 3) is a BST of size 3.

**Example 2:**
> **Input:** `root = [6, 7, 3, N, 2, 2, 4]`
> **Output:** `3`
> **Explanation:** The subtree `[3, 2, 4]` is a BST of size 3.

---

## 📐 Constraints
- $1 \le \text{number of nodes} \le 10^5$
- $1 \le \text{node data} \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(H)$ |

---

## 🏷️ Topic Tags
- `Tree`
- `BST`
- `DFS`
- `Data Structures`

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
