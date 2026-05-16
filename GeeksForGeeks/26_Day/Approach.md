# 💡 Approach — Prefix XOR & Hash Map

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 58.86%](https://img.shields.io/badge/Acceptance-58.86%25-blue?style=for-the-badge)
![Topics: Hashing](https://img.shields.io/badge/Topics-Hashing-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** If the XOR sum of elements from index $0$ to $i$ is $P$, and we want a subarray ending at $i$ with XOR sum $k$, we need a previous prefix XOR $X$ such that $X \oplus k = P$. This rearranges to $X = P \oplus k$.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize:** Maintain a hash map `freq` to store the frequency of prefix XOR values. Seed it with `freq[0] = 1`.
2. **Accumulate:** Iterate through the array, maintaining a running `currentXor`.
3. **Target Search:** For each element:
   - Calculate `target = currentXor ^ k`.
   - Add the count of `target` from the map to your total `result`.
   - Increment the frequency of `currentXor` in the map.
4. **Return:** Return the total count of subarrays.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["freq = {0: 1}, curXor = 0, count = 0"]
    Init --> Loop["For each x in arr"]
    Loop --> Update["curXor ^= x \n target = curXor ^ k"]
    Update --> Check["count += freq[target] \n freq[curXor]++"]
    Check --> Loop
    Loop -->|Done| End([Return count])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Single pass using a hash map for $O(1)$ average lookups. |
| **Space Complexity** | $O(N)$ - Space to store prefix XOR frequencies in the map. |

---

> *"In the logic of XOR, the past and the present reveal the missing piece."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../25_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../27_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
