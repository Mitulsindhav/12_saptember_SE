#include <iostream>
using namespace std;


inline double multiply(double num1, double num2) {
    return num1 * num2;
}


inline double cubic(double num) {
    return num * num * num;
}

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    double multiplicationResult = multiply(a, b);
    cout << "Multiplication result: " << multiplicationResult <<endl;

    
    double cubicValue = cubic(a);
    cout << "Cubic value of the first number: " << cubicValue <<endl;

    return 0;
}

