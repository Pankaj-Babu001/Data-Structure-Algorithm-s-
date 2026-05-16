# 💡 Approach — First Non-repeating Character in a Stream

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 31.65%](https://img.shields.io/badge/Acceptance-31.65%25-blue?style=for-the-badge)
![Topics: Queue](https://img.shields.io/badge/Topics-Queue-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A sliding stream requires a way to track the order of arrival and the frequency of occurrences. A **Queue** maintains the temporal order, while a **Frequency Array** (size 26) tracks counts. If the character at the front of the queue is no longer unique, pop it until a unique one is found.

---

## 🔩 Step-by-Step Breakdown
1. **Initialize Structures:** Create an empty `string` for the result, a `queue<char>` to store characters in arrival order, and a `freq[26]` array initialized to zero.
2. **Process the Stream:** Iterate through each character `c` in the input string `s`.
3. **Track Frequency:** Increment `freq[c - 'a']` and push `c` into the queue.
4. **Maintain Uniqueness:** While the queue is not empty, check the character at `q.front()`. If `freq[q.front() - 'a'] > 1`, it's a repeating character; pop it and repeat.
5. **Update Result:** 
   - If the queue is empty, append `'#'` (no non-repeating character found).
   - Otherwise, append `q.front()` (the first non-repeating character).

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start("[Start]") --> Init["Init res='', freq[26]=0, queue q"]
    Init --> Loop{For each char c in s}
    
    Loop -->|Next Char| Inc["freq[c - 'a']++"]
    Inc --> Push["q.push(c)"]
    
    Push --> Check{While q is not empty\nand q.front is repeating}
    
    Check -->|freq > 1| Pop["q.pop()"]
    Pop --> Check
    
    Check -->|freq == 1| Found["res += q.front()"]
    Check -->|q is empty| Empty["res += '#'"]
    
    Found --> Loop
    Empty --> Loop
    
    Loop -->|Stream Ended| Finish("[Return res]")
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N)$ - Each character is pushed and popped at most once. |
| **Space Complexity** | $O(1)$ - The frequency array is size 26, and the queue contains at most 26 distinct characters at any time. |

---

> *"Keep only what is unique; the rest is just noise in the stream."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../01_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../03_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
