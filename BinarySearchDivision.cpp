#include <iostream>
using namespace std;

// Define a structure to hold the quotient and remainder
struct divRes {
    int quotient;
    int remainder;
};

// Function to perform division using binary search
// Time Complexity: O(log n)
// Space Complexity: O(1)
divRes divide_bs(int dividend, int divisor) {
    divRes ans;
    ans.quotient = 0;
    ans.remainder = 0;

    if (divisor == 0)
        return ans;

    bool stop = false;
    int upperBound = dividend;
    int lowerBound = 0;

    while (!stop) {
        if (upperBound == lowerBound + 1) {
            int prodUp = upperBound * divisor;
            if (prodUp <= dividend) {
                ans.quotient = upperBound;
                ans.remainder = dividend - prodUp;
            }
            else {
                ans.quotient = lowerBound;
                ans.remainder = dividend - (lowerBound * divisor);
            }
            stop = true;
        }
        else {
            int mid = (upperBound + lowerBound) >> 1;
            int prod = mid * divisor;
            if (prod < dividend) {
                lowerBound = mid;
            }
            else {
                upperBound = mid;
            }
        }
    }
    return ans;
}

int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    divRes result = divide_bs(dividend, divisor);

    cout << "Quotient: " << result.quotient << endl;
    cout << "Remainder: " << result.remainder << endl;

    return 0;
}
