# Pointer Casting and `void*` Demo in C++

This program demonstrates how to use **raw pointers** (`void*`) and **type casting** in C++ to handle data of multiple types dynamically. It also includes a simple function to print an integer's value and memory address.

## 📋 Features

- Demonstrates usage of `void*` for generic pointer operations
- Uses `switch`-based type control to cast and dereference the pointer properly
- Explains how to safely interpret raw memory as a known type
- Includes a utility function to print pointer value and memory address

## 🧠 Key Concepts

### `void*` in C++

- A `void*` (generic pointer) can point to any type of data.
- You **must cast** it back to the correct type before dereferencing.
- Useful when you don’t know the data type at compile time.

### Type Casting

```cpp
(int*)chrptr   // Casts void pointer to int*
(char*)chrptr  // Casts void pointer to char*
