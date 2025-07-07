# Binary Search Division in C++

This C++ program performs **integer division** using a **binary search algorithm**, without using the built-in division (`/`) or modulo (`%`) operators. It efficiently computes the **quotient** and **remainder**.

## 📋 Features

- Computes quotient and remainder of integer division
- Uses binary search to optimize division
- Avoids division (`/`) and modulo (`%`) operations
- Gracefully handles division by zero

## 🚀 How It Works

### Core Logic

- The function `divide_bs(int dividend, int divisor)`:
  - Uses binary search to find the largest multiplier `q` such that `q * divisor <= dividend`.
  - Returns both `quotient` and `remainder` in a `struct`.

### Example

Enter dividend: 17
Enter divisor: 5
Quotient: 3
Remainder: 2


## ⚙️ Time & Space Complexity

| Operation         | Complexity |
|------------------|------------|
| Time Complexity   | O(log n)   |
| Space Complexity  | O(1)       |

## 🧠 Concepts Used

- Binary search
- Bitwise shift (`>> 1`) for division by 2
- Custom structure (`struct`) for multi-value return
- Conditional logic and bounds narrowing

## 📁 Files

- `binary_search_division.cpp` — Main source file

## 🛠️ Build and Run

```bash
g++ -o bsdivision binary_search_division.cpp
./bsdivision
