# [08. Last Moment Before All Ants Fall Out of a Plank](https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55%](https://img.shields.io/badge/Acceptance-55%25-blue?style=for-the-badge)
![Submissions: 100K+](https://img.shields.io/badge/Submissions-100K%2B-brightgreen?style=for-the-badge)
![Topics: Brainteaser](https://img.shields.io/badge/Topics-Brainteaser-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
We have a wooden plank of length `n` units. Some ants are walking on the plank at a speed of 1 unit per second. Some move left, others move right. When two ants meet, they change directions instantly. When an ant reaches an end, it falls off.

Find the moment when the last ant(s) fall out of the plank.

## 📌 Examples

**Example 1:**
> **Input:** `n = 4, left = [4, 3], right = [0, 1]`
> **Output:** `4`
> **Explanation:** 
> - Ant at 4 (left) reaches 0 in 4s.
> - Ant at 0 (right) reaches 4 in 4s.
> The last moment is 4.

**Example 2:**
> **Input:** `n = 7, left = [], right = [0, 1, 2, 3, 4, 5, 6, 7]`
> **Output:** `7`

---

## 📐 Constraints
- $1 \le n \le 10^4$
- $0 \le left.length, right.length \le n + 1$
- $0 \le left[i], right[i] \le n$
- All values of `left` and `right` are unique.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(L + R)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Arrays`
- `Brainteaser`
- `Simulation`
- `Mathematics`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../07_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../09_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
