# 📚 AVL Dictionary Library

An efficient, self-balancing dictionary implementation using **AVL Trees** in C++.  
This library allows users to perform **fast insertions, deletions, updates, and lookups** on a dynamic set of key-value pairs, while maintaining height balance for optimal performance.

---

## 🔍 Features

✅ **Insert** new keywords with definitions  
✅ **Delete** existing entries while preserving AVL balance  
✅ **Update** the meaning of existing keywords  
✅ **Search** for a keyword with optimized comparison logic  
✅ **Display** dictionary in **ascending** or **descending** order  
✅ **Compute** maximum number of comparisons needed for a search  
✅ **Designed as a library** for system-wide use (with `CMake` and `MinGW` support)

---

## 🚀 Use Cases

- Language dictionary apps
- Auto-complete or predictive text engines
- Spell-check systems
- Educational tools for demonstrating AVL tree mechanics

---

## 🧠 Behind the Scenes

- Implemented an **AVL Tree** data structure to keep operations in **O(log n)** time.  
- Balancing is handled via **single and double rotations** (LL, RR, LR, RL).  
- Designed with **modularity and reusability** in mind.

---

## 🛠️ Tech Stack

- Language: **C++**
- Build System: **CMake**
- Compiler: **MinGW (Windows)**

---

## 📦 Installation

1. Clone the repo:
   ```bash
   git clone https://github.com/yourusername/avl-dictionary-library.git
   cd avl-dictionary-library
---
2. Build using CMake:
  ```bash
    mkdir build
    cd build
    cmake ..
    make
```
---
📄 Example Usage
  ```bash
    AVLDictionary dict;
    dict.insert("algorithm", "A step-by-step procedure for solving a problem.");
    dict.insert("binary", "A system using only 0 and 1.");
    dict.displayAscending();
    dict.search("algorithm");
