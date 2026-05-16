# [22. Count Inversions](https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 16.93%](https://img.shields.io/badge/Acceptance-16.93%25-blue?style=for-the-badge)
![Submissions: 744K+](https://img.shields.io/badge/Submissions-744K%2B-brightgreen?style=for-the-badge)
![Topics: Merge Sort](https://img.shields.io/badge/Topics-Merge%20Sort-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array `arr[]`, find the **Inversion Count**. A pair `(i, j)` is called an inversion if `i < j` and `arr[i] > arr[j]`. It indicates how far the array is from being sorted.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [2, 4, 1, 3, 5]`
> **Output:** `3`
> **Explanation:** The inversions are (2, 1), (4, 1), (4, 3).

**Example 2:**
> **Input:** `arr[] = [2, 3, 4, 5, 6]`
> **Output:** `0`
> **Explanation:** The array is already sorted.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $1 \le arr[i] \le 10^4$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Divide and Conquer`
- `Sorting`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../21_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../23_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
