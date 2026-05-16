# [69. Huffman Encoding](https://www.geeksforgeeks.org/problems/huffman-encoding3345/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 50%](https://img.shields.io/badge/Acceptance-50%25-blue?style=for-the-badge)
![Submissions: 40K+](https://img.shields.io/badge/Submissions-40K%2B-brightgreen?style=for-the-badge)
![Topics: Greedy](https://img.shields.io/badge/Topics-Greedy-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a set of distinct characters and their corresponding frequencies, build a **Huffman Tree** and return all Huffman codes in a **preorder traversal** of the tree.

**Merging Rule:** When merging two nodes with the same frequency, the node that appeared earlier in the input or was created earlier should be placed on the left.

## 📌 Examples

**Example 1:**
> **Input:** `s = "abcdef", f = [5, 9, 12, 13, 16, 45]`
> **Output:** `["0", "100", "101", "1100", "1101", "111"]`
> **Explanation:** 
> - 'f' (45) is encoded as "0".
> - 'a' (5) is encoded as "1100".
> ...and so on.

---

## 📐 Constraints
- $1 \le |S| \le 26$
- Frequencies are positive integers.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Greedy`
- `Trees`
- `Priority Queue`
- `Algorithms`

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
