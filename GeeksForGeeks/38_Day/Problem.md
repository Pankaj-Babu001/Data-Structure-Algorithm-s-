# [38. Smallest window containing all characters](https://www.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 19.34%](https://img.shields.io/badge/Acceptance-19.34%25-blue?style=for-the-badge)
![Submissions: 500K+](https://img.shields.io/badge/Submissions-500K%2B-brightgreen?style=for-the-badge)
![Topics: Sliding Window](https://img.shields.io/badge/Topics-Sliding%20Window-blueviolet?style=for-the-badge)

---

## 🧩 Problem Description
Given two strings `s` and `p`, find the **smallest substring** in `s` that contains all the characters (including duplicates) of the string `p`. If no such substring exists, return an empty string `""`. 

If multiple substrings of the same minimum length exist, return the one with the smallest starting index.

## 📌 Examples

**Example 1:**
> **Input:** `s = "timetopractice", p = "toc"`
> **Output:** `"toprac"`
> **Explanation:** `"toprac"` is the smallest substring containing 't', 'o', and 'c'.

**Example 2:**
> **Input:** `s = "zoomlazapzo", p = "oza"`
> **Output:** `"apzo"`
> **Explanation:** `"apzo"` contains 'o', 'z', and 'a' and is smaller than other candidates.

**Example 3:**
> **Input:** `s = "zoom", p = "zooe"`
> **Output:** `""`
> **Explanation:** The character 'e' is not present in `s`.

---

## 📐 Constraints
- $1 \le s.length(), p.length() \le 10^6$
- Strings consist of lowercase English letters.

---

## ⏱️ Expected Complexities
| Time Complexity | Space Complexity |
| :--- | :--- |
| $O(N)$ | $O(1)$ |

---

## 🏷️ Topic Tags
- `Strings`
- `Sliding Window`
- `Hashing`
- `Two Pointers`

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../37_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../39_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
