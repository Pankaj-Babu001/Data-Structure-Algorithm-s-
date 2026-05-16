# 💡 Approach — Mathematical / Brainteaser

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55%](https://img.shields.io/badge/Acceptance-55%25-blue?style=for-the-badge)
![Topics: Brainteaser](https://img.shields.io/badge/Topics-Brainteaser-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** When two identical ants meet and change directions, it is mathematically equivalent to them **passing through each other** without collision. Since all ants move at the same speed, we can ignore collisions and simply find the maximum time any single ant takes to reach its goal.

---

## 🔩 Step-by-Step Breakdown
1. **Ignore Collisions:** Treat every ant as if it walks straight to its destination regardless of other ants.
2. **Left-Moving Ants:** An ant at position `pos` moving left takes `pos` seconds to fall off at 0.
3. **Right-Moving Ants:** An ant at position `pos` moving right takes `n - pos` seconds to fall off at `n`.
4. **Max Time:** The total time is the `max()` of all individual times for all ants in the `left` and `right` arrays.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init maxTime = 0"]
    Init --> LLoop{For each pos in left}
    LLoop -->|pos| LMax["maxTime = max maxTime, pos"]
    LMax --> LLoop
    LLoop -->|Done| RLoop{For each pos in right}
    RLoop -->|pos| RMax["maxTime = max maxTime, n - pos"]
    RMax --> RLoop
    RLoop -->|Done| End("[Return maxTime]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(L + R)$ - Linear scan of both input arrays. |
| **Space Complexity** | $O(1)$ - Only one variable used for comparison. |

---

> *"Sometimes, the most complex collisions are just moments of passing through."*

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
