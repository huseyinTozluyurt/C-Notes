# Overflow and Underflow Detection in C++

This program, `OverflowUnderflow.cpp`, demonstrates how to perform **safe addition** of two integers by detecting possible **overflow** or **underflow** conditions before the addition is executed.

## 📌 Overview

Unchecked arithmetic in C++ can cause unexpected behavior when exceeding the limits of the `int` data type. This program helps prevent that by validating input values against `INT_MAX` and `INT_MIN` before performing the operation.

## ✅ Features

- Accepts two integers from the user
- Detects and warns about:
  - **Overflow** (e.g., adding to `INT_MAX`)
  - **Underflow** (e.g., subtracting below `INT_MIN`)
- Performs the addition only if it's safe
- Uses `cerr` to print error messages when an unsafe addition is detected

## 🧠 Logic

```cpp
if (num1 > INT_MAX - num2 && num2 > 0) {
    cerr << "Overflow occurred.";
}
else if (num1 < INT_MIN - num2 && num2 < 0) {
    cerr << "Underflow occurred.";
}
else {
    cout << "The result of adding is: " << num1 + num2;
}


Type the first number for adding: 2147483647
Type the second number for adding: 1
Overflow occurred.

Type the first number for adding: -2147483648
Type the second number for adding: -10
Underflow occurred.

Type the first number for adding: 100
Type the second number for adding: 200
The result of adding is: 300 (an overflow or underflow has not been detected.)

g++ -o overflow_checker OverflowUnderflow.cpp
./overflow_checker
