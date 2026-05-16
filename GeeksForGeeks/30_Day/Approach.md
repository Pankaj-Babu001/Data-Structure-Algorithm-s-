# 💡 Approach — Bidirectional Mapping

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 34.21%](https://img.shields.io/badge/Acceptance-34.21%25-blue?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Isomorphism is a bijective relation (one-to-one and onto). To validate it, we must ensure that no character in $S1$ maps to multiple characters in $S2$, and no character in $S2$ is mapped to by multiple characters in $S1$.

---

## 🔩 Step-by-Step Breakdown
1. **Length Check:** If lengths of `s1` and `s2` differ, return `false`.
2. **Two-Way Mapping:**
   - Use two maps (or arrays of size 256 for ASCII) to store the mapping:
     - `map1[char]`: Character in $S1$ maps to which char in $S2$.
     - `map2[char]`: Character in $S2$ is mapped from which char in $S1$.
3. **Validation Loop:** Iterate through the strings:
   - Let $c1 = s1[i]$ and $c2 = s2[i]$.
   - Check `map1`: If $c1$ is already mapped but not to $c2$, return `false`.
   - Check `map2`: If $c2$ is already mapped but not from $c1$, return `false`.
   - Update both maps: `map1[c1] = c2` and `map2[c2] = c1`.
4. **Conclusion:** If the loop finishes, the strings are isomorphic. Return `true`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["map1 = {}, map2 = {}"]
    Init --> Loop["For i = 0 to n-1"]
    Loop --> Get["c1 = s1[i], c2 = s2[i]"]
    Get --> Check1{"map1[c1] exists?"}
    Check1 -->|Yes| Valid1{"map1[c1] == c2?"}
    Valid1 -->|No| Fail[Return false]
    Valid1 -->|Yes| Check2
    Check1 -->|No| Check2{"map2[c2] exists?"}
    Check2 -->|Yes| Valid2{"map2[c2] == c1?"}
    Valid2 -->|No| Fail
    Valid2 -->|Yes| Update["map1[c1]=c2, map2[c2]=c1"]
    Check2 -->|No| Update
    Update --> Loop
    Loop -->|Done| Success[Return true]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through both strings. |
| **Space Complexity** | $O(1)$ - Fixed size mapping arrays (constant overhead for character sets). |

---

> *"Isomorphism is the symmetry of logic hidden within the structure of strings."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../29_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../31_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
