# 💡 Approach — Bitwise Transformation Formula

<div align="center">

| 📄 [Problem](./Problem.md) | 💡 [Approach](./Approach.md) | 🧩 [Solution](./Solution.cpp) | 🚀 [Main](./Main.cpp) |
|:--------------------------:|:-----------------------------:|:------------------------------:|:---------------------:|

</div>

---

## 📊 Metadata
![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Acceptance: 60.49%](https://img.shields.io/badge/Acceptance-60.49%25-blue?style=for-the-badge)
![Topics: Bit Manipulation](https://img.shields.io/badge/Topics-Bit%20Manipulation-blueviolet?style=for-the-badge)

---

> [!TIP]
> **Core Insight:** A Gray code is a binary numeral system where two successive values differ in only one bit. The most efficient way to generate the $i$-th Gray code directly is using the XOR formula: $G(i) = i \oplus \lfloor i/2 \rfloor$. This allows us to generate the entire sequence in linear time relative to the number of output elements.

---

## 🔩 Step-by-Step Breakdown
1. **Iterative Range:**
   - We need to generate $2^N$ binary strings.
   - Loop $i$ from $0$ to $2^N - 1$.
2. **Apply Gray Code Formula:**
   - For each index $i$, calculate `val = i ^ (i >> 1)`.
   - This formula naturally produces the Gray code sequence.
3. **Binary Formatting:**
   - Convert the integer `val` into a string of length $N$.
   - Iterate from bit $N-1$ down to $0$.
   - Check if the $j$-th bit is set: `(val >> j) & 1`.
   - Append `'1'` or `'0'` accordingly.
4. **Result Storage:** Store each string in a vector and return.

---

## 🔄 Mermaid Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Loop["For i = 0 to 2^N - 1"]
    Loop --> Calc["GrayVal = i ^ (i >> 1)"]
    Calc --> Binary["Convert GrayVal to N-bit String"]
    Binary --> StringLoop["For j = N-1 down to 0"]
    StringLoop --> Bit{"Bit j set?"}
    Bit -->|Yes| Append1["Append '1'"]
    Bit -->|No| Append0["Append '0'"]
    Append1 --> NextBit[Next Bit]
    Append0 --> NextBit
    NextBit --> StringLoop
    StringLoop -->|Done| Add["Add String to Result Vector"]
    Add --> Loop
    Loop -->|Done| End([Return Vector])
```

---

## 📊 Complexity Analysis
| Type | Complexity |
| :--- | :--- |
| **Time Complexity** | $O(N \times 2^N)$ - We iterate $2^N$ times, and each string conversion takes $O(N)$. |
| **Space Complexity** | $O(N \times 2^N)$ - To store $2^N$ strings of length $N$. |

---

> *"Gray code: where a single step in value is a single step in bits."*

---

<div align="center">
<h3>Happy Coding! 🚀</h3>
<a href="../66_Day/Approach.md">
  <img src="https://img.shields.io/badge/◀-Previous%20Day-000000?style=for-the-badge&labelColor=FFA116" alt="Previous">
</a>
<a href="https://x.com/PankajB42550" target="_blank">
  <img src="https://img.shields.io/badge/Pankaj%20Kumar-000000?style=for-the-badge&logo=x&logoColor=white" alt="X">
</a>
<a href="../68_Day/Approach.md">
  <img src="https://img.shields.io/badge/Next%20Day-▶-FFA116?style=for-the-badge&labelColor=000000" alt="Next">
</a>
</div>
