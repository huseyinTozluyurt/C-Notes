# Vector Input & Print Demo in C++

This simple C++ program demonstrates the usage of **vectors** and **templates** by:
- Taking user input into a vector of strings.
- Creating a vector of integers.
- Printing both vectors using a templated `printVector` function.

## 📋 Features

- Templated function to print vectors of any type.
- Dynamic string vector size input (1–99).
- Standard integer vector populated with values from 0 to 4.
- Input validation for string vector size.

## 🚀 How It Works

1. **User Input for String Vector:**
   - The user is prompted to enter the size of the string vector (`1 ≤ size < 100`).
   - Each string element is read with `getline()` and stored in the vector.

2. **Integer Vector:**
   - An integer vector is initialized with values from 0 to 4.

3. **Output:**
   - The size of the integer vector is printed.
   - Both vectors are printed using a templated function.

## 🧠 Concepts Used

- C++ STL `vector`
- Template functions
- Input validation
- Iterators
- `getline()` for string input

## 🛠️ Build and Run

To compile and run the program:

```bash
g++ -o vectordemo vectordemo.cpp
./vectordemo
