# 💡 Approach — Monotonic Stack (Contribution Counting)

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 46.92%](https://img.shields.io/badge/Acceptance-46.92%25-blue?style=for-the-badge)
![Topics: Monotonic Stack](https://img.shields.io/badge/Topics-Monotonic%20Stack-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** Instead of finding the minimum for every subarray, we calculate how many subarrays each element $arr[i]$ contributes to as a minimum. By identifying the **Previous Smaller** and **Next Smaller** boundaries, we can determine the exact count of subarrays using basic combinatorics.

---

## 🔩 Step-by-Step Breakdown
1. **The Goal:** For each element $arr[i]$, find the range $[L, R]$ where $arr[i]$ is the absolute minimum.
2. **Previous Smaller Element (PSE):**
   - For index $i$, find the nearest index $L < i$ such that $arr[L] < arr[i]$.
   - If no such element exists, $L = -1$.
3. **Next Smaller Element (NSE):**
   - For index $i$, find the nearest index $R > i$ such that $arr[R] \le arr[i]$.
   - Note: Using $\le$ on one side and $<$ on the other avoids overcounting when duplicate elements exist.
4. **Contribution Formula:**
   - The number of subarrays where $arr[i]$ is the minimum is $(i - L) \times (R - i)$.
   - Contribution to total sum = $arr[i] \times (i - L) \times (R - i)$.
5. **Monotonic Stack implementation:**
   - Use two passes (or one combined pass) with a monotonic stack to find PSE and NSE in $O(N)$ time.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["PSE[n], NSE[n], stack = {}"]
    Init --> Pass1["For i = 0 to n-1 (Find PSE) \n Pop while top >= arr[i] \n PSE[i] = stack.top or -1 \n Push i"]
    Pass1 --> Pass2["For i = n-1 to 0 (Find NSE) \n Pop while top > arr[i] \n NSE[i] = stack.top or n \n Push i"]
    Pass2 --> Calc["Sum = 0 \n For i = 0 to n-1: \n Sum += arr[i] * (i-PSE[i]) * (NSE[i]-i)"]
    Calc --> End([Return Sum])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Two linear passes through the array using a monotonic stack. |
| **Space Complexity** | $O(N)$ - Storing PSE, NSE, and stack indices. |

---

> *"The power of an element is defined not just by itself, but by the extent of its influence over its neighbors."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../42_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../44_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
