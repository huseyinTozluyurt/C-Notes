# Generic Calculator with Template Specialization in C++

This C++ program demonstrates a **generic calculator class** using **C++ templates**, including a specialized version for the `string` type. It showcases compile-time polymorphism through function templates and class specialization.

## 📋 Features

- Generic calculator class supporting:
  - `int` and `double` types for basic arithmetic (`add`, `subtract`)
- **Template specialization** for `string` type:
  - `add()` → string concatenation
  - `subtract()` → computes ASCII-character-wise difference between two strings

## 🧠 Concepts Used

- **Function Templates**
- **Class Templates**
- **Template Specialization**
- **String manipulation**
- **Compile-time polymorphism**

## 📦 Supported Operations

| Type      | Operation | Behavior                                      |
|-----------|-----------|-----------------------------------------------|
| `int`     | add       | Performs integer addition                     |
| `int`     | subtract  | Performs integer subtraction                  |
| `double`  | add       | Performs floating-point addition              |
| `double`  | subtract  | Performs floating-point subtraction           |
| `string`  | add       | Concatenates two strings                      |
| `string`  | subtract  | Computes character-wise absolute differences  |

---

## 🧪 Example Output

Generic Classes

Int sum: 5
Int difference: 8
Double sum: 5.94
Double difference: 1.48
String sum: HelloWorld
String difference: 0000004044


## 📁 Files

- `GenericTypes.cpp` — Source file with all class definitions and main function

## ⚙️ Build and Run

```bash
g++ -o calculator GenericCalculator.cpp
./calculator
