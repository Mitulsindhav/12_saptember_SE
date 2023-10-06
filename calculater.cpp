#include <iostream>

using namespace std;

class Calculator {
public:
    
    Calculator() {
        result = 0.0;
    }

    
    double add(double a, double b) {
        result = a + b;
        return result;
    }

    
    double subtract(double a, double b) {
        result = a - b;
        return result;
    }

    
    double multiply(double a, double b) {
        result = a * b;
        return result;
    }

    
    double divide(double a, double b) {
        if (b != 0) {
            result = a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        return result;
    }

    
    double getResult() {
        return result;
    }

private:
    double result;
};

int main() {
    Calculator calc;

    double num1, num2;
    char operation;
  
   
    
    cout << "Enter first number: ";
    cin >> num1;
   
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, *, /): "<<endl;
    cin >> operation;

    switch (operation) {
        case '+':
            calc.add(num1, num2);
            cout<<"Addition"<<endl;
            break;
        case '-':
            calc.subtract(num1, num2);
            break;
        case '*':
            calc.multiply(num1, num2);
            break;
        case '/':
            calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << "Result: " << calc.getResult() << endl;

    return 0;
}

