# 💡 Approach — DP with Sliding Window Sum

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Accuracy: 36.52%](https://img.shields.io/badge/Accuracy-36.52%25-blue?style=for-the-badge)
![Topics: Dynamic Programming](https://img.shields.io/badge/Topics-Dynamic%20Programming-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A standard DP approach takes $O(N \cdot X \cdot M)$. However, by observing that each state is a sum of a sliding window from the previous row, we can optimize the transition to $O(1)$ using a running `windowSum`. This reduces the total complexity to $O(N \cdot X)$.

---

## 🔩 Step-by-Step Breakdown
1. **DP State:**
   - Let `dp[i][j]` be the number of ways to get sum `j` using `i` dice.
   - We only need the previous dice's results, so we use two rows: `prev` and `curr`.
2. **Base Case:**
   - `prev[0] = 1`. (1 way to get sum 0 with 0 dice).
3. **Transition with Sliding Window:**
   - For each die `i` from $1$ to $n$:
     - Maintain a `windowSum`.
     - For each target sum `j` from $1$ to $x$:
       - `windowSum += prev[j-1]` (Add the newest possible state from the previous roll).
       - If `j - 1 - m >= 0`, `windowSum -= prev[j - 1 - m]` (Remove the state that is now too far away).
       - `curr[j] = windowSum`.
4. **Update:** `prev = curr`.
5. **Return:** `prev[x]`.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Init["prev[0] = 1, others = 0"]
    Init --> LoopN["For i = 1 to n"]
    LoopN --> WindowInit["windowSum = 0, curr = {0}"]
    WindowInit --> LoopX["For j = 1 to x"]
    LoopX --> Add["windowSum += prev[j-1]"]
    Add --> CheckM{"j-1-m >= 0?"}
    CheckM -->|Yes| Sub["windowSum -= prev[j-1-m]"]
    CheckM -->|No| NextX
    Sub --> NextX
    NextX["curr[j] = windowSum"] --> LoopX
    LoopX -->|Done| Update["prev = curr"]
    Update --> LoopN
    LoopN -->|Done| End(["Return prev[x]"])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \cdot X)$ - With window sum optimization, transition is $O(1)$. |
| **Space Complexity** | $O(X)$ - Only storing two 1D rows for DP states. |

---

> *"Probability is the architecture of chance, and DP is the blueprint for counting its pathways."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../38_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../40_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
