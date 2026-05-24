<div align="center">

```
██████╗ ███████╗ █████╗     ███╗   ███╗███████╗██████╗ ██╗██╗   ██╗███╗   ███╗
██╔══██╗██╔════╝██╔══██╗    ████╗ ████║██╔════╝██╔══██╗██║██║   ██║████╗ ████║
██║  ██║███████╗███████║    ██╔████╔██║█████╗  ██║  ██║██║██║   ██║██╔████╔██║
██║  ██║╚════██║██╔══██║    ██║╚██╔╝██║██╔══╝  ██║  ██║██║██║   ██║██║╚██╔╝██║
██████╔╝███████║██║  ██║    ██║ ╚═╝ ██║███████╗██████╔╝██║╚██████╔╝██║ ╚═╝ ██║
╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚═╝     ╚═╝╚══════╝╚═════╝ ╚═╝ ╚═════╝ ╚═╝     ╚═╝
                         ·  M E D I U M  1 . 2  ·
```

# 🧠 DSA Medium 1.2

### *Curated Medium-Level DSA Problems — Interview-Ready, Optimized, Explained*

<br/>

[![C++](https://img.shields.io/badge/C++17-Solutions-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Problems](https://img.shields.io/badge/Problems-23%2B-blueviolet?style=for-the-badge)]()
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)]()
[![Topics](https://img.shields.io/badge/Topics-9%20Core%20Domains-success?style=for-the-badge)]()
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)
[![Interview](https://img.shields.io/badge/Interview-Ready-red?style=for-the-badge)]()

<br/>

> *"You don't rise to the level of your goals — you fall to the level of your preparation."*

<br/>

</div>

---

## 📌 Table of Contents

| # | Section |
|---|---------|
| 01 | [Repository Overview](#-repository-overview) |
| 02 | [Problem Index by Topic](#-problem-index-by-topic) |
| 03 | [Complete File Map](#-complete-file-map) |
| 04 | [Algorithm Deep Dives](#-algorithm-deep-dives) |
| 05 | [Complexity Cheat Sheet](#-complexity-cheat-sheet) |
| 06 | [Getting Started](#-getting-started) |
| 07 | [How to Practice Effectively](#-how-to-practice-effectively) |
| 08 | [Roadmap](#-roadmap) |
| 09 | [Contributing](#-contributing) |
| 10 | [Author](#-author) |

---

## 🚀 Repository Overview

**DSA Medium 1.2** is a focused, interview-oriented collection of **23+ medium-difficulty DSA problems** implemented in C++. Every solution is chosen because it appears repeatedly in:

- 🏢 **FAANG / product company interviews** (Google, Amazon, Microsoft, Adobe)
- 🏆 **Competitive programming** (Codeforces, LeetCode, GFG)
- 📋 **Campus placement assessments** (TCS, Infosys, Wipro, Capgemini)

### What Makes This Different

| ✅ Strength | 💡 Detail |
|------------|-----------|
| **Interview Alignment** | Problems selected by frequency in real interview rounds |
| **Optimized First** | Every solution targets best known time/space complexity |
| **Topic Coverage** | 9 core domains — arrays to dynamic programming |
| **Pattern Thinking** | Solutions grouped by technique, not just by problem |
| **Clean C++17** | STL-idiomatic, production-style code |

---

## 🗂️ Problem Index by Topic

### 🔷 Arrays & Vectors

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Array.cpp` | Array fundamentals & operations | Traversal, prefix | O(n) | O(1) |
| `Vector.cpp` | STL vector patterns | STL operations | O(n) | O(n) |
| `Maximum Subarray Sum.cpp` | Kadane's Algorithm | DP / Sliding | O(n) | O(1) |
| `Maximum Product Subarray.cpp` | Max product contiguous subarray | DP, track min/max | O(n) | O(1) |
| `Maximum consecutive.cpp` | Longest consecutive sequence | Hash / sort | O(n) | O(n) |
| `duplicates in O(n) time and O(n) extra space.cpp` | Find all duplicates | Hashing | O(n) | O(n) |
| `Two Sum - Pair with given Sum.cpp` | Pair with target sum | Two pointer / Hash | O(n) | O(n) |
| `Find All Triplets with Zero Sum.cpp` | 3Sum problem | Sort + Two pointer | O(n²) | O(1) |
| `Stock Buy and Sell.cpp` | Maximum profit from stocks | Greedy, one pass | O(n) | O(1) |

---

### 🔷 Strings

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Strings are Anagrams.cpp` | Anagram check | Frequency count | O(n) | O(1) |
| `Smallest window in a String.cpp` | Minimum window substring | Sliding window | O(n) | O(k) |

---

### 🔷 Matrices

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Boolean Matrix.cpp` | Set row/col to 0 if cell is 0 | In-place marking | O(m×n) | O(1) |
| `Print a given matrix.cpp` | Spiral / boundary traversal | Layer-by-layer | O(m×n) | O(1) |
| `sorted matrix.cpp` | Search in row-col sorted matrix | Staircase search | O(m+n) | O(1) |
| `transpose of a matrix.cpp` | Matrix transpose in-place | Swap diagonal | O(m×n) | O(1) |

---

### 🔷 Sliding Window

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Smallest window in a String.cpp` | Minimum window substring | Variable window | O(n) | O(k) |
| `Chocolate Distribution.cpp` | Minimize max-min difference | Sort + fixed window | O(n log n) | O(1) |

---

### 🔷 Two Pointer

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Two Sum - Pair with given Sum.cpp` | Pair sum in sorted array | Classic two pointer | O(n) | O(1) |
| `Find All Triplets with Zero Sum.cpp` | Zero-sum triplets | Sort + two pointer | O(n²) | O(1) |
| `Container with Most Water.cpp` | Max water between walls | Shrink from edges | O(n) | O(1) |
| `Trapping Rain Water.cpp` | Rainwater trapped in histogram | Precompute L/R max | O(n) | O(n) |

---

### 🔷 Greedy Algorithms

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Stock Buy and Sell.cpp` | Best time to buy and sell stock | Greedy one-pass | O(n) | O(1) |
| `Chocolate Distribution.cpp` | Minimize distribution spread | Sort + greedy window | O(n log n) | O(1) |

---

### 🔷 Searching & Sorting

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Minimum in a Sorted and Rotated Array.cpp` | Min in rotated sorted array | Binary search | O(log n) | O(1) |
| `Search in a Sorted and Rotated Array.cpp` | Search in rotated array | Modified binary search | O(log n) | O(1) |
| `sorted matrix.cpp` | Sorted matrix search | Elimination search | O(m+n) | O(1) |

---

### 🔷 Interval Problems

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Insert and Merge Interval.cpp` | Insert interval into sorted list | Linear merge | O(n) | O(n) |
| `Merge Overlapping Intervals.cpp` | Merge all overlapping intervals | Sort + stack | O(n log n) | O(n) |

---

### 🔷 Mathematics

| File | Problem | Technique | Time | Space |
|------|---------|-----------|------|-------|
| `Find the Factorial of a large number.cpp` | Factorial of large N (no overflow) | Array multiplication | O(n²) | O(n) |

---

## 📂 Complete File Map

```
DSA-Medium-1.2/
│
├── 🔢 ARRAYS & VECTORS
│   ├── Array.cpp                                    ← Core array patterns
│   ├── Vector.cpp                                   ← STL vector techniques
│   ├── Maximum Subarray Sum.cpp                     ← Kadane's algorithm
│   ├── Maximum Product Subarray.cpp                 ← DP with min/max tracking
│   ├── Maximum consecutive.cpp                      ← Consecutive sequence
│   ├── duplicates in O(n) time and O(n) extra space.cpp ← Hash-based duplicate detection
│   ├── Two Sum - Pair with given Sum.cpp             ← Classic interview problem
│   ├── Find All Triplets with Zero Sum.cpp           ← 3Sum variant
│   └── Stock Buy and Sell.cpp                       ← Greedy stock profit
│
├── 🔤 STRINGS
│   ├── Strings are Anagrams.cpp                     ← Frequency map comparison
│   └── Smallest window in a String.cpp              ← Minimum window substring
│
├── 🟦 MATRICES
│   ├── Boolean Matrix.cpp                           ← Zero-propagation problem
│   ├── Print a given matrix.cpp                     ← Spiral/pattern traversal
│   ├── sorted matrix.cpp                            ← Staircase search
│   └── transpose of a matrix.cpp                   ← In-place transpose
│
├── 📐 INTERVALS
│   ├── Insert and Merge Interval.cpp                ← Interval insertion
│   └── Merge Overlapping Intervals.cpp              ← Classic merge intervals
│
├── 💧 TWO POINTER / SLIDING WINDOW
│   ├── Container with Most Water.cpp                ← Area maximization
│   ├── Trapping Rain Water.cpp                      ← Histogram water trapping
│   └── Chocolate Distribution.cpp                   ← Window minimization
│
├── 🔍 SEARCHING
│   ├── Minimum in a Sorted and Rotated Array.cpp    ← Binary search variant
│   └── Search in a Sorted and Rotated Array.cpp    ← Pivoted binary search
│
├── ➗ MATHEMATICS
│   └── Find the Factorial of a large number.cpp    ← Big integer factorial
│
└── 📄 README.md
```

---

## 🔬 Algorithm Deep Dives

<details>
<summary><strong>🔹 Kadane's Algorithm — Maximum Subarray Sum</strong></summary>

<br/>

One of the most elegant DP algorithms. Solves the maximum contiguous subarray problem in a single linear pass.

**Core Idea:** At every index, decide — extend the previous subarray, or start fresh.

```cpp
int maxSubarraySum(vector<int>& arr) {
    int maxSum = arr[0];
    int current = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        // Either extend existing subarray or start new one here
        current = max(arr[i], current + arr[i]);
        maxSum  = max(maxSum, current);
    }
    return maxSum;
}

// Input:  [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output: 6   (subarray: [4, -1, 2, 1])
```

**Time:** O(n) · **Space:** O(1) · **Pattern:** DP, Greedy hybrid

</details>

<details>
<summary><strong>🔹 Trapping Rain Water — The Precomputation Approach</strong></summary>

<br/>

For each bar `i`, water trapped = `min(maxLeft[i], maxRight[i]) - height[i]`.

```cpp
int trap(vector<int>& h) {
    int n = h.size();
    vector<int> L(n), R(n);

    L[0] = h[0];
    for (int i = 1; i < n; i++)
        L[i] = max(L[i-1], h[i]);          // max height to the left

    R[n-1] = h[n-1];
    for (int i = n-2; i >= 0; i--)
        R[i] = max(R[i+1], h[i]);          // max height to the right

    int water = 0;
    for (int i = 0; i < n; i++)
        water += min(L[i], R[i]) - h[i];   // water above each bar

    return water;
}

// Input:  [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
```

**Time:** O(n) · **Space:** O(n) · **Pattern:** Precomputation, Two-pass

> 💡 Can be further optimized to O(1) space using the **two-pointer approach**.

</details>

<details>
<summary><strong>🔹 Search in Rotated Sorted Array — Modified Binary Search</strong></summary>

<br/>

A classic binary search variant. The key insight: **one half of the array is always sorted.**

```cpp
int search(vector<int>& arr, int target) {
    int lo = 0, hi = arr.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target) return mid;

        // Left half is sorted
        if (arr[lo] <= arr[mid]) {
            if (arr[lo] <= target && target < arr[mid])
                hi = mid - 1;          // target in left half
            else
                lo = mid + 1;          // target in right half
        }
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[hi])
                lo = mid + 1;          // target in right half
            else
                hi = mid - 1;          // target in left half
        }
    }
    return -1;
}

// Input: arr = [4,5,6,7,0,1,2], target = 0
// Output: 4  (index of 0)
```

**Time:** O(log n) · **Space:** O(1) · **Pattern:** Binary search on unsorted

</details>

<details>
<summary><strong>🔹 Merge Overlapping Intervals</strong></summary>

<br/>

Sort by start time. Then greedily merge whenever the current interval overlaps the last merged one.

```cpp
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());   // sort by start
    vector<vector<int>> result;

    for (auto& curr : intervals) {
        // No overlap — add as new interval
        if (result.empty() || result.back()[1] < curr[0])
            result.push_back(curr);
        // Overlap — extend the end
        else
            result.back()[1] = max(result.back()[1], curr[1]);
    }
    return result;
}

// Input:  [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
```

**Time:** O(n log n) · **Space:** O(n) · **Pattern:** Sort + Greedy

</details>

<details>
<summary><strong>🔹 Container with Most Water — Two Pointer Proof</strong></summary>

<br/>

**Why moving the shorter side is always correct:**

```
Heights: [1, 8, 6, 2, 5, 4, 8, 3, 7]
          ↑                         ↑
         left                     right

Water = min(h[left], h[right]) × (right - left)

If h[left] < h[right]:
  → Moving right inward can ONLY decrease width
  → Water is bounded by h[left] (shorter side)
  → Moving right never finds more water with this left
  → So we MUST move left inward  ✓
```

```cpp
int maxArea(vector<int>& h) {
    int lo = 0, hi = h.size() - 1, best = 0;
    while (lo < hi) {
        best = max(best, min(h[lo], h[hi]) * (hi - lo));
        if (h[lo] < h[hi]) lo++;
        else hi--;
    }
    return best;
}
```

**Time:** O(n) · **Space:** O(1) · **Pattern:** Two pointer, greedy elimination

</details>

<details>
<summary><strong>🔹 Finding All Triplets with Zero Sum — 3Sum</strong></summary>

<br/>

Fix one element, then apply two-pointer on the rest. Skip duplicates carefully.

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;  // skip duplicate anchors

        int lo = i + 1, hi = nums.size() - 1;
        while (lo < hi) {
            int sum = nums[i] + nums[lo] + nums[hi];
            if (sum == 0) {
                result.push_back({nums[i], nums[lo], nums[hi]});
                while (lo < hi && nums[lo] == nums[lo+1]) lo++;  // skip dups
                while (lo < hi && nums[hi] == nums[hi-1]) hi--;  // skip dups
                lo++; hi--;
            }
            else if (sum < 0) lo++;
            else hi--;
        }
    }
    return result;
}

// Input:  [-1, 0, 1, 2, -1, -4]
// Output: [[-1,-1,2],[-1,0,1]]
```

**Time:** O(n²) · **Space:** O(1) · **Pattern:** Sort + Two pointer

</details>

---

## ⚡ Complexity Cheat Sheet

```
PROBLEM                              TIME          SPACE    TECHNIQUE
─────────────────────────────────────────────────────────────────────────────
Maximum Subarray Sum (Kadane's)      O(n)          O(1)     DP / Greedy
Maximum Product Subarray             O(n)          O(1)     DP (min/max track)
Trapping Rain Water                  O(n)          O(n)     Precompute L/R max
Container with Most Water            O(n)          O(1)     Two pointer
Two Sum (sorted)                     O(n)          O(1)     Two pointer
Two Sum (unsorted)                   O(n)          O(n)     Hash map
Find All Triplets - Zero Sum         O(n²)         O(1)     Sort + Two pointer
Stock Buy and Sell                   O(n)          O(1)     Greedy one-pass
Smallest Window in String            O(n)          O(k)     Sliding window
Strings are Anagrams                 O(n)          O(1)     Frequency array
Boolean Matrix                       O(m×n)        O(1)     In-place markers
Sorted Matrix Search                 O(m+n)        O(1)     Staircase search
Transpose of Matrix                  O(m×n)        O(1)     Swap diagonal
Search in Rotated Array              O(log n)      O(1)     Binary search
Minimum in Rotated Array             O(log n)      O(1)     Binary search
Merge Overlapping Intervals          O(n log n)    O(n)     Sort + Greedy
Insert and Merge Interval            O(n)          O(n)     Linear scan
Chocolate Distribution               O(n log n)    O(1)     Sort + Fixed window
Duplicates O(n) time                 O(n)          O(n)     Hashing
Factorial of Large Number            O(n²)         O(n)     Array multiplication
─────────────────────────────────────────────────────────────────────────────
```

---

## 🚀 Getting Started

### Prerequisites

```bash
# Ubuntu / Debian
sudo apt-get update && sudo apt-get install g++ -y

# macOS
brew install gcc

# Verify
g++ --version   # Should be ≥ 9.0
```

### Clone the Repository

```bash
git clone https://github.com/mhassanworks/DSA-Medium-1.2.git
cd DSA-Medium-1.2
```

### Compile & Run Any Solution

```bash
# Standard
g++ -std=c++17 -o solution "Trapping Rain Water.cpp"
./solution

# With full warnings (recommended)
g++ -std=c++17 -Wall -Wextra -O2 -o solution "Maximum Subarray Sum.cpp"
./solution

# Quick one-liner for any file
g++ -std=c++17 -O2 -o run "filename.cpp" && ./run
```

### Bulk Compile All Files (Test Environment)

```bash
for f in *.cpp; do
    echo "Compiling: $f"
    g++ -std=c++17 -O2 -o "${f%.cpp}" "$f" 2>&1
done
```

---

## 📖 How to Practice Effectively

### The 3-Step Method for Each Problem

```
Step 1 — UNDERSTAND (10 min)
  → Read the problem carefully
  → Identify: What is the input? What is the output?
  → Work through 2-3 examples by hand on paper

Step 2 — PLAN (10 min)
  → What pattern does this resemble? (see topic index above)
  → What is the brute force? What is its complexity?
  → Can we do better? Which technique reduces it?

Step 3 — CODE + VERIFY (20 min)
  → Implement the optimized solution
  → Test edge cases: empty array, all negatives, single element
  → Verify time and space complexity match the cheat sheet
```

### Topic Study Order (Recommended)

```
Week 1:  Arrays → Two Sum → Kadane's → Stock Buy & Sell → Duplicates
Week 2:  Two Pointer → Trapping Rain → Container with Water → 3Sum
Week 3:  Strings → Anagrams → Smallest Window → Chocolate Distribution
Week 4:  Matrices → Boolean Matrix → Sorted Matrix → Transpose
Week 5:  Binary Search → Rotated Array (Min + Search)
Week 6:  Intervals → Merge Overlapping → Insert & Merge
Week 7:  Review + Large Number Factorial + Product Subarray
```

### Edge Cases to Always Test

```cpp
// Arrays
{}              // empty array
{x}             // single element
{x, x, x}      // all same elements
{INT_MIN, INT_MAX}  // integer boundary

// Strings
""              // empty string
"a"             // single character
"aaa"           // all same characters

// Intervals
{}              // no intervals
{{1,5}}         // single interval
{{1,5},{2,3}}   // one fully contained in another
{{1,2},{3,4}}   // non-overlapping
```

---

## 🔮 Roadmap

### 🔜 Upcoming in v1.3

- [ ] **Next Permutation** — Lexicographically next arrangement
- [ ] **Jump Game** — Greedy reachability problem
- [ ] **Longest Substring Without Repeating Characters** — Sliding window classic
- [ ] **Product of Array Except Self** — No division, O(n)
- [ ] **Spiral Matrix** — Layer-by-layer traversal
- [ ] **Word Search** — DFS backtracking on grid

### 📅 Planned for v2.0

- [ ] **Linked List** — Detect cycle, reverse, merge sorted
- [ ] **Binary Trees** — Level order, height, LCA
- [ ] **Heaps** — K largest, median from stream
- [ ] **Graphs** — BFS/DFS, connected components, topological sort
- [ ] **Dynamic Programming** — 0/1 Knapsack, LCS, LIS
- [ ] **Bit Manipulation** — XOR tricks, count set bits
- [ ] **Trie** — Insert, search, prefix problems

---

## 🤝 Contributing

All contributions — new solutions, optimizations, better explanations, edge case tests — are welcome.

### Contribution Workflow

```bash
# 1. Fork this repository

# 2. Clone your fork
git clone https://github.com/YOUR-USERNAME/DSA-Medium-1.2.git
cd DSA-Medium-1.2

# 3. Create a descriptive branch
git checkout -b feature/add-next-permutation

# 4. Add your solution with this header template:
```

```cpp
/*
 * Problem   : Next Permutation
 * Difficulty: Medium
 * Topic     : Arrays / Two Pointer
 * Approach  : Find rightmost ascent, swap with next greater, reverse suffix
 * Time      : O(n)
 * Space     : O(1)
 *
 * Example:
 *   Input : [1, 2, 3]
 *   Output: [1, 3, 2]
 */
```

```bash
# 5. Commit with a clear message
git commit -m "feat: Add Next Permutation with O(n) in-place solution"

# 6. Push and open a Pull Request
git push origin feature/add-next-permutation
```

### Contribution Standards

- Every file must include the **header template** above
- Solutions must compile with `g++ -std=c++17 -Wall`
- Prefer **readability + comments** over code golf
- One problem per file; filename = problem name

---

## ⚙️ Tech Stack

| Technology | Role |
|------------|------|
| **C++17** | Primary implementation language |
| **STL** | `vector`, `unordered_map`, `sort`, `algorithm` |
| **G++** | Compilation toolchain |
| **Linux / macOS** | Recommended environment |

---

## 📜 License

Open-source under the **MIT License**. See [`LICENSE`](LICENSE) for full terms.

---

## 👨‍💻 Author

<div align="center">

### Mohammad Hassan

*Competitive programmer · DSA practitioner · CS engineer*

[![GitHub](https://img.shields.io/badge/GitHub-mhassanworks-181717?style=for-the-badge&logo=github)](https://github.com/mhassanworks)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Mohammad%20Hassan-0A66C2?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/in/mohammad-hassan-b756352a9)

</div>

---

<div align="center">

## ⭐ Support This Repository

*If these solutions helped you crack an interview or understand a concept better — drop a star. It keeps this project growing.*

[![Star this repo](https://img.shields.io/github/stars/mhassanworks/DSA-Medium-1.2?style=social)](https://github.com/mhassanworks/DSA-Medium-1.2)

<br/>

```
Coded in C++ · Optimized for Interviews · Built for Learning
```

<br/>

**© 2024 Mohammad Hassan · MIT License**

</div>
