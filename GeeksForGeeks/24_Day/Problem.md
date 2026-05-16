# [24. Largest Number Formed from an Array](https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 37.82%](https://img.shields.io/badge/Acceptance-37.82%25-blue?style=for-the-badge)
![Submissions: 204K+](https://img.shields.io/badge/Submissions-204K%2B-brightgreen?style=for-the-badge)
![Topics: Sorting](https://img.shields.io/badge/Topics-Sorting-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given an array of integers `arr[]`, arrange them so that after concatenating all of them in order, it results in the **largest possible number**. Return the result as a string.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [3, 30, 34, 5, 9]`
> **Output:** `9534330`
> **Explanation:** The arrangement `[9, 5, 34, 3, 30]` gives the largest concatenation.

**Example 2:**
> **Input:** `arr[] = [54, 546, 548, 60]`
> **Output:** `6054854654`
> **Explanation:** The arrangement `[60, 548, 546, 54]` gives the largest concatenation.

---

## 📐 Constraints
- $1 \le arr.size() \le 10^5$
- $0 \le arr[i] \le 10^5$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log N \cdot K)$ | $O(N \cdot K)$ |
*(K is the average number of digits)*

---

## 🏷️ Topic Tags
- `Arrays`
- `Sorting`
- `Greedy`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../23_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../25_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
