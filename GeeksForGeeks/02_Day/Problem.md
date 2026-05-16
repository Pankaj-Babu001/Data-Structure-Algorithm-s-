# [02. First non-repeating character in a stream](https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 31.65%](https://img.shields.io/badge/Acceptance-31.65%25-blue?style=for-the-badge)
![Submissions: 240K+](https://img.shields.io/badge/Submissions-240K%2B-brightgreen?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given a string `s` consisting of only lowercase alphabets, for each index `i` in the string ($0 \le i < n$), find the first non-repeating character in the prefix `s[0..i]`. If no such character exists, use `'#'`.

## 📌 Examples

**Example 1:**
> **Input:** `s = "aabc"`
> **Output:** `"a#bb"`
> **Explanation:** 
> - At i=0 ("a"): First non-repeating character is 'a'.
> - At i=1 ("aa"): No non-repeating character, so '#'.
> - At i=2 ("aab"): First non-repeating character is 'b'.
> - At i=3 ("aabc"): Non-repeating characters are 'b' and 'c'; 'b' appeared first, so 'b'.

**Example 2:**
> **Input:** `s = "bb"` 
> **Output:** `"b#"` 

---

## 📐 Constraints
- $1 \le s.size() \le 10^5$
- `s` consists of only lowercase English alphabets.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(N)$ |

---

## 🏷️ Topic Tags
- `Queue`
- `Hash`
- `Strings`
- `Data Structures`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../01_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../03_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
