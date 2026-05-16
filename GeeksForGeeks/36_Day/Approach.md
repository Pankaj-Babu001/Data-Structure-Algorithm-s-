# 💡 Approach — Fixed Sliding Window (XOR)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 55.42%](https://img.shields.io/badge/Acceptance-55.42%25-blue?style=for-the-badge)
![Topics: Bit Manipulation](https://img.shields.io/badge/Topics-Bit%20Manipulation-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Unlike sums, XOR is its own inverse ($A \oplus A = 0$). This makes it perfect for a sliding window: to remove the contribution of an element exiting the window, simply XOR it again. This allows $O(1)$ window updates.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Window:**
   - Calculate the XOR of the first `k` elements: `currentXOR = arr[0] ^ arr[1] ^ ... ^ arr[k-1]`.
   - Set `maxXOR = currentXOR`.
2. **Slide the Window:**
   - Iterate from index `i = k` to `n-1`.
   - The element exiting the window is `arr[i - k]`.
   - The element entering the window is `arr[i]`.
   - Update XOR: `currentXOR = currentXOR ^ arr[i - k] ^ arr[i]`.
3. **Update Max:**
   - At each step, update `maxXOR = max(maxXOR, currentXOR)`.
4. **Return Result:** The `maxXOR` found.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["currentXOR = XOR of first k elements \n maxXOR = currentXOR"]
    Init --> Loop["For i = k to n-1"]
    Loop --> Update["currentXOR = currentXOR ^ arr[i-k] ^ arr[i]"]
    Update --> Max["maxXOR = max(maxXOR, currentXOR)"]
    Max --> Next["i++"]
    Next --> Loop
    Loop -->|Done| End([Return maxXOR])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass to calculate initial XOR and slide the window. |
| **Space Complexity** | $O(1)$ - Only constant extra variables used. |

---

> *"In the binary world, adding and removing are the same motion: a simple flip of the bit."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../35_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../37_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
