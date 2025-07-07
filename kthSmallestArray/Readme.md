# K-th Smallest Element Finder in C++

This program allows the user to input an array and a value `k`, then finds the **k-th smallest element** using a basic sorting algorithm. It demonstrates fundamental concepts such as array manipulation, sorting, dynamic memory allocation, and function decomposition in C++.

## 📋 Features

- Dynamically allocate an array using `new`
- Accept array elements from the user
- Sort the array using a simple nested loop (similar to selection sort)
- Find the `k`-th smallest element (1-based index)
- Display the array before and after sorting

## 🧠 Key Concepts

- Reference-based swapping
- Dynamic memory (`new` for heap allocation)
- Array sorting with nested loops
- Input validation (`k` must be ≤ array size)
- Modular function design (`swapFunc`, `populateArray`, `sortArray`, `kthElement`, etc.)

## 🧪 Sample Run


Enter the size of your array: 6
Enter the k value: 3

1-) Element of the array: 15
2-) Element of the array: 9
3-) Element of the array: 22
4-) Element of the array: 4
5-) Element of the array: 17
6-) Element of the array: 8
7-) 15, 9, 22, 4, 17, 8,4, 8, 9, 15, 17, 22
8-) 3th smallest element in the array is: 9


## ⚙️ Build and Run

```bash
g++ -o kthsmallestArray KthSmallestArray.cpp
./kthsmallest
