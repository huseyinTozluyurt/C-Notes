# Dynamic Matrix Input, Print, and Sum in C++

This C++ program demonstrates how to create, populate, display, and deallocate a **2D dynamic matrix** using raw pointers. It also computes the **sum of all matrix elements**.

## 📋 Features

- Dynamically allocates a 2D matrix using `new` and `delete`
- Takes user input to fill the matrix
- Prints the matrix in a readable 2D format
- Computes the total sum of all elements
- Cleans up all allocated memory properly

## 🧠 Key Concepts

- Dynamic memory management in C++ (`new[]`, `delete[]`)
- 2D pointer arrays: `double**`
- Nested loops for matrix input and operations
- Modular function design

## 📦 Functional Overview

| Function            | Description                                      |
|---------------------|--------------------------------------------------|
| `getMatrix()`       | Allocates and fills a 2D matrix with user input  |
| `printMatrix()`     | Nicely prints the matrix in 2D format            |
| `sumMatrix()`       | Calculates the sum of all matrix elements        |
| `deleteMatrix()`    | Deallocates the memory to prevent memory leaks   |

---

## 💻 Example Run

Rows: 2
Coloums: 3
Enter rows[0] /coloums[0]: 1
Enter rows[0] /coloums[1]: 2
Enter rows[0] /coloums[2]: 3
Enter rows[1] /coloums[0]: 4
Enter rows[1] /coloums[1]: 5
Enter rows[1] /coloums[2]: 6
[[1, 2, 3],[4, 5, 6]]
Sum of all the elements of the matrix is: 21


---

## 🛠️ Build and Run

```bash
g++ -o matrix MatrixSum.cpp
./matrix
