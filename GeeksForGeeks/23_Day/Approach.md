# 💡 Approach — Set-Based Range Check

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55.45%](https://img.shields.io/badge/Acceptance-55.45%25-blue?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** By mapping all existing elements into a hash set, we reduce the "is it present?" check to constant time $O(1)$. Since we need missing elements in sorted order, we simply iterate through the range from `low` to `high`.

---

## 🔩 Step-by-Step Breakdown
1. **Set Construction:** Insert all elements of `arr[]` into an `unordered_set<int>`.
2. **Linear Probe:**
   - Iterate through every integer `num` from `low` to `high`.
   - Check if `num` exists in the set.
   - If not found, add it to the `result` vector.
3. **Sorted Result:** Because the loop runs from `low` to `high`, the `result` vector is naturally sorted.
4. **Return:** Return the collected missing numbers.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Hash[Build unordered_set from arr]
    Hash --> Loop["For num = low to high"]
    Loop --> Exist{num in set?}
    Exist -->|No| Add[Add num to result]
    Exist -->|Yes| Next[Continue]
    Add --> Next
    Next --> Loop
    Loop -->|Done| End("[Return result]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N + (high - low))$ - $N$ to build the set, and range size for iteration. |
| **Space Complexity** | $O(N)$ - To store unique elements in the hash set. |

---

> *"The void between what is and what should be is found by counting the silence."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../22_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../24_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
