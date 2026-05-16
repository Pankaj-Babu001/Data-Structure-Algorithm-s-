# [14. Koko Eating Bananas](https://www.geeksforgeeks.org/problems/koko-eating-bananas1553/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 40%](https://img.shields.io/badge/Acceptance-40%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Binary Search](https://img.shields.io/badge/Topics-Binary%20Search-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Koko is given an array `arr[]`, where each element represents a pile of bananas. She has exactly `k` hours to eat all the bananas. Each hour, Koko can choose one pile and eat up to `s` bananas from it.

If she finishes a pile in less than an hour, she cannot eat any more bananas during that hour. Find the **minimum integer speed `s`** such that she can eat all the bananas within `k` hours.

## 📌 Examples

**Example 1:**
> **Input:** `arr[] = [5, 10, 3], k = 4`
> **Output:** `5`
> **Explanation:** At speed 5, it takes $1 + 2 + 1 = 4$ hours.

**Example 2:**
> **Input:** `arr[] = [5, 10, 15, 20], k = 7`
> **Output:** `10`
> **Explanation:** At speed 10, it takes $1 + 1 + 2 + 2 = 6$ hours, which is $\le 7$.

---

## 📐 Constraints
- $1 \le arr.size() \le k \le 10^6$
- $1 \le arr[i] \le 10^6$

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N \log(\max(arr)))$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Binary Search`
- `Algorithms`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../13_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../15_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
