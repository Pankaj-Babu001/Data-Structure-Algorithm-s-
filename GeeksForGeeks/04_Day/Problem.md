# [04. Implement k Queues in a Single Array](https://www.geeksforgeeks.org/problems/implement-k-queues-in-a-single-array/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 61.88%](https://img.shields.io/badge/Acceptance-61.88%25-blue?style=for-the-badge)
![Submissions: 2K+](https://img.shields.io/badge/Submissions-2K%2B-brightgreen?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
You are given two integers `n` and `k`. Your task is to implement a class `kQueues` that uses a single array of size `n` to simulate `k` independent queues.

The class should support the following operations:
1.  **enqueue(x, i)**: Adds the element `x` into the `i`-th queue.
2.  **dequeue(i)**: Removes the front element from the `i`-th queue and returns it. Returns `-1` if the queue is empty.
3.  **isEmpty(i)**: Returns `true` if `i`-th queue is empty.
4.  **isFull()**: Returns `true` if the array is completely full.

## 📌 Examples

**Example 1:**
> **Input:** `n = 4, k = 2, q = 8`
> `queries = [[1, 5, 0], [1, 3, 0], [1, 1, 1], [2, 0], [1, 4, 1], [1, 1, 0], [3, 1], [4]]`
> **Output:** `[5, false, true]`

---

## 📐 Constraints
- $1 \le q \le 10^5$
- $1 \le k \le n \le 10^5$
- $0 \le \text{values on the queues} \le 10^9$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(1)$ per operation | $O(N + K)$ |

---

## 🏷️ Topic Tags
- `Queue`
- `Array`
- `Design`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../03_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../05_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
