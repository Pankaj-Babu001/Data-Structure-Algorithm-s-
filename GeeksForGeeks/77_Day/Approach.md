# 💡 Approach — In-Place String Compaction (Erase-Remove Idiom)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-brightgreen?style=for-the-badge)
![Acceptance: 49.21%](https://img.shields.io/badge/Acceptance-49.21%25-blue?style=for-the-badge)
![Topics: Strings](https://img.shields.io/badge/Topics-Strings-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Removing characters from a string in-place is most efficiently done using the Erase-Remove idiom. `std::remove` shifts the valid characters to the front of the container in $O(N)$ time, and `s.erase` trims the leftover capacity. This avoids creating an auxiliary string and minimizes allocations.

---

## 🔩 Step-by-Step Breakdown
1. **The Erase-Remove Idiom:**
   - C++ strings (and vectors) don't automatically resize when elements are "removed". Instead, `std::remove` logically moves the targeted elements to the end and returns an iterator to the new boundary.
2. **Phase 1: Shift (`std::remove`)**
   - Traverse the string from left to right.
   - For every non-space character, move it to the earliest available position at the front.
   - This returns an iterator `it` pointing to the first "stale" character after the compacted prefix.
3. **Phase 2: Trim (`s.erase`)**
   - Use the `erase` method to delete everything from `it` to `s.end()`.
   - This physically shrinks the string to the correct length.
4. **Alternative — Two Pointer Manual:**
   - Keep a `write` index.
   - Loop with a `read` index. If `s[read] != ' '`, set `s[write++] = s[read]`.
   - Finally, `s.resize(write)`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Scan["Scan string with Read pointer"]
    Scan --> Cond{"Is s[Read] a space?"}
    Cond -->|No| Move["s[Write] = s[Read] \n Write++"]
    Cond -->|Yes| Skip["Skip character"]
    Move --> Next["Read++"]
    Skip --> Next
    Next --> Loop{"Read < Length?"}
    Loop -->|Yes| Scan
    Loop -->|No| Resize["Resize string to Write index"]
    Resize --> End([Return String])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the string. |
| **Space Complexity** | $O(1)$ - In-place modification. |

---

> *"Efficiency is the silent space between characters that shouldn't be there."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../76_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../78_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
