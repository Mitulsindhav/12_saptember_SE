#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
   
    Calculator(double a, double b) : num1(a), num2(b) {}

    
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
            std::cerr << "Error: Division by zero is not allowed." << std::endl;
         
        }
    }

   
    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

   
    Calculator calc(num1, num2);

  
    cout << "Addition: " << calc.add() <<endl;
    cout << "Subtrection: " << calc.subtract() <<endl;
    cout << "Multiplication: " << calc.multiply() <<endl;
    cout << "Division: " << calc.divide() <<endl;

    return 0;
}

