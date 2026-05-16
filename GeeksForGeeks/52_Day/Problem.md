# [52. Predecessor and Successor](https://www.geeksforgeeks.org/problems/predecessor-and-successor/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 47.36%](https://img.shields.io/badge/Acceptance-47.36%25-blue?style=for-the-badge)
![Submissions: 181K+](https://img.shields.io/badge/Submissions-181K%2B-brightgreen?style=for-the-badge)
![Topics: BST](https://img.shields.io/badge/Topics-BST-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given the root of a Binary Search Tree (BST) and a `key`, find the **in-order predecessor** and **in-order successor** of the key.

- **Predecessor:** The node with the largest value strictly less than the key.
- **Successor:** The node with the smallest value strictly greater than the key.

If either is not found, set it to `NULL`.

## 📌 Examples

**Example 1:**
> **Input:** `root = [50, 30, 70, 20, 40, 60, 80]`, `key = 65`
> **Output:** `[60, 70]`
> **Explanation:** 60 is the largest value < 65, and 70 is the smallest value > 65.

**Example 2:**
> **Input:** `root = [8, 1, 9, N, 4, N, 10, 3]`, `key = 8`
> **Output:** `[4, 9]`

---

## 📐 Constraints
- $1 \le \text{number of nodes} \le 10^5$
- $0 \le \text{node data} \le 10^6$
- $1 \le \text{key} \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(H)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Tree`
- `BST`
- `Data Structures`
- `Traversal`

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
