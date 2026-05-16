# 💡 Approach — Two Pointers Strategy

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 33.14%](https://img.shields.io/badge/Acceptance-33.14%25-blue?style=for-the-badge)
![Topics: Two Pointers](https://img.shields.io/badge/Topics-Two%20Pointers-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The water trapped at any bar depends on the minimum of the maximum heights to its left and right. Using two pointers allows us to maintain the `leftMax` and `rightMax` simultaneously and compute the volume in a single $O(N)$ pass with $O(1)$ space.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** 
   - `left = 0`, `right = n - 1`
   - `lMax = 0`, `rMax = 0`
   - `totalWater = 0`
2. **Two Pointer Convergence:**
   - While `left < right`:
     - **If `arr[left] <= arr[right]`**:
       - If `arr[left] >= lMax`, update `lMax = arr[left]`.
       - Else, water trapped at `left` is `lMax - arr[left]`.
       - `left++`.
     - **Else (`arr[left] > arr[right]`)**:
       - If `arr[right] >= rMax`, update `rMax = arr[right]`.
       - Else, water trapped at `right` is `rMax - arr[right]`.
       - `right--`.
3. **Completion:** The loop terminates when pointers meet, having accounted for every bar.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["left=0, right=n-1, lMax=0, rMax=0, total=0"]
    Init --> Loop{"left < right"}
    Loop -->|Yes| Comp{"arr[left] <= arr[right]?"}
    Comp -->|Yes| LMaxCheck{"arr[left] >= lMax?"}
    LMaxCheck -->|Yes| UpdateLMax["lMax = arr[left]"]
    LMaxCheck -->|No| AddL["total += lMax - arr[left]"]
    UpdateLMax --> NextL["left++"]
    AddL --> NextL
    Comp -->|No| RMaxCheck{"arr[right] >= rMax?"}
    RMaxCheck -->|Yes| UpdateRMax["rMax = arr[right]"]
    RMaxCheck -->|No| AddR["total += rMax - arr[right]"]
    UpdateRMax --> NextR["right--"]
    AddR --> NextR
    NextL --> Loop
    NextR --> Loop
    Loop -->|Done| End([Return total])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the array. |
| **Space Complexity** | $O(1)$ - Only constant extra variables used. |

---

> *"Water seeks the lowest point, but its volume is defined by the peaks that surround it."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../33_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../35_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
