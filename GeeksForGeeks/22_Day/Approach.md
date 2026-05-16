# 💡 Approach — Merge Sort with Inversion Counting

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 16.93%](https://img.shields.io/badge/Acceptance-16.93%25-blue?style=for-the-badge)
![Topics: Merge Sort](https://img.shields.io/badge/Topics-Merge%20Sort-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Inversion counting is a byproduct of sorting. During the merge step of Merge Sort, if an element from the right half is smaller than an element from the left half, it forms an inversion with that element **and all subsequent elements** in the left half (since they are already sorted).

---

## 🔩 Step-by-Step Breakdown
1. **Divide:** Recursively split the array into two halves until individual elements are reached.
2. **Conquer (Merge and Count):**
   - Maintain pointers `i` for the left half and `j` for the right half.
   - If `arr[i] <= arr[j]`: Not an inversion. Move `arr[i]` to temp and increment `i`.
   - If `arr[i] > arr[j]`: Inversion detected!
     - Since the left half is sorted, `arr[j]` is smaller than all elements from `i` to `mid`.
     - `count += (mid - i + 1)`.
     - Move `arr[j]` to temp and increment `j`.
3. **Assemble:** Copy elements back from the temporary array to the original array.
4. **Return:** Sum up counts from all recursive calls.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Split[Split Array recursively into halves]
    Split --> Base{"Size <= 1?"}
    Base -->|Yes| Zero[Return 0]
    Base -->|No| Merge[Merge sorted halves]
    Merge --> Comp{"arr[i] > arr[j]?"}
    Comp -->|Yes| Count["Add mid - i + 1 to count \n Move arr[j] to temp"]
    Comp -->|No| Move["Move arr[i] to temp"]
    Count --> Loop[Continue merging]
    Move --> Loop
    Loop --> Done[Return total count]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \log N)$ - Standard Merge Sort complexity. |
| **Space Complexity** | $O(N)$ - For the auxiliary temporary array. |

---

> *"An inversion is just a memory of an unsorted past, corrected by the logic of division."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../21_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../23_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
