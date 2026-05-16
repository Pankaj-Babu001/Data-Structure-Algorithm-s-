# 💡 Approach — Max Circular Subarray Sum

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-red?style=for-the-badge)
![Acceptance: 55%](https://img.shields.io/badge/Acceptance-55%25-blue?style=for-the-badge)
![Topics: Kadane's Algorithm](https://img.shields.io/badge/Topics-Kadane's%20Algorithm-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** The maximum circular subarray sum is either the maximum normal subarray sum (found by Kadane's) or the total sum minus the minimum normal subarray sum. If total sum equals min sum, it means all elements are negative, so return the max normal sum.

---

## 🔩 Step-by-Step Breakdown
1. **Normal Kadane's:** Calculate the maximum subarray sum (`maxSum`) using standard Kadane's Algorithm.
2. **Min Subarray Sum:** Simultaneously calculate the minimum subarray sum (`minSum`) using a modified Kadane's.
3. **Total Sum:** Calculate the sum of all elements in the array (`totalSum`).
4. **Wrap-Around Logic:** The potential circular maximum is `totalSum - minSum`.
5. **Handle Negative Edge Case:** If `totalSum == minSum` (all elements are negative), return `maxSum`. Otherwise, return `max(maxSum, totalSum - minSum)`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init totalSum=0, maxSum=arr0, minSum=arr0"]
    Init --> Loop{For each element i}
    Loop --> KadaneMax["currMax = max currMax + i, i"]
    KadaneMax --> KadaneMin["currMin = min currMin + i, i"]
    KadaneMin --> Update["maxSum = max maxSum, currMax \n minSum = min minSum, currMin \n totalSum += i"]
    Update --> Next[Next element]
    Next --> Loop
    Loop --> Done{"Is totalSum == minSum?"}
    Done -->|Yes| AllNeg[Return maxSum]
    Done -->|No| Result["Return max maxSum, totalSum - minSum"]
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass through the array. |
| **Space Complexity** | $O(1)$ - Constant space for sum variables. |

---

> *"Circular problems often require looking at what we've left behind to find what's truly ahead."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../05_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../07_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
