# 💡 Approach — Hash Set for Distinct Elements

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Acceptance: 42.22%](https://img.shields.io/badge/Acceptance-42.22%25-blue?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A Hash Set (unordered_set) is the ideal data structure for union operations because it enforces uniqueness. By inserting all elements from both arrays into a single set, duplicates are automatically filtered out in average constant time.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Create an `unordered_set<int>` to store distinct elements.
2. **Collect Array A:** Iterate through array `a` and insert every element into the set.
3. **Collect Array B:** Iterate through array `b` and insert every element into the set.
4. **Convert:** Transfer the elements from the set into a vector.
5. **Return:** Return the vector representing the union.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Set[Create unordered_set st]
    Set --> LoopA[Insert all elements of a into st]
    LoopA --> LoopB[Insert all elements of b into st]
    LoopB --> Vector[Convert st to vector res]
    Vector --> End([Return res])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N + M)$ - Average time for insertions into the hash set. |
| **Space Complexity** | $O(N + M)$ - To store all distinct elements in the set. |

---

> *"Union is not just addition; it is the convergence of identities into a unique whole."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../26_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../28_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
