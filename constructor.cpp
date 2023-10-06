#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
     
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    
    double add() {
        return num1 + num2;
    }

    
    double subtract() {
        return num1 - num2;
    }

   
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero is not allowed." <<endl;
            return 0;
        }
    }

    
    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    Calculator calculator(a, b);

    
    cout << "Addition result: " << calculator.add() <<endl;
    cout << "Subtraction result: " << calculator.subtract() <<endl;
    cout << "Division result: " << calculator.divide() <<endl;
    cout << "Multiplication result: " << calculator.multiply() <<endl;

    return 0;
}

