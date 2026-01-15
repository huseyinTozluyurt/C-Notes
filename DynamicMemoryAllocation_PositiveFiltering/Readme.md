# C++ Lab – Dynamic Memory Allocation (Filter Positive Numbers)

This small C++ lab exercise demonstrates **dynamic memory allocation** and **array filtering** using raw pointers.

## What it does
- Reads an integer `n` and then `n` integer values from the user
- Stores them in a dynamically allocated array (`new[]`)
- Creates a second dynamically allocated array containing **only non-negative values** (`>= 0`)
- Prints both arrays
- Frees all allocated heap memory (`delete[]`)

## Key Concepts Practiced
- `new[]` / `delete[]`
- Passing output parameters by **reference** (`outSize`)
- Building a filtered array with an unknown final size
- Avoiding garbage output by printing with the **correct filtered size**

## Build & Run
Using g++:
```bash
g++ -std=c++17 main.cpp -o task1
./task1
Example
Input:

Enter size of array: 7
0 -2 12 42 -42 1 2
Output:

My Array:
[ 0, -2, 12, 42, -42, 1, 2 ]
Filtered Array:
[ 0, 12, 42, 1, 2 ]
