#include <iostream>

class NumberSwap {
private:
    int num1;
    int num2;

public:
    NumberSwap(int a, int b) : num1(a), num2(b) {}

    // Declaration of the friend function
    friend void swapNumbers(NumberSwap &ns);

    void display() {
        std::cout << "Numbers after swapping: " << num1 << " " << num2 << std::endl;
    }
};

// Definition of the friend function to swap numbers
void swapNumbers(NumberSwap &ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    NumberSwap ns(a, b);

    std::cout << "Numbers before swapping: " << a << " " << b << std::endl;

    // Call the friend function to swap numbers
    swapNumbers(ns);

    // Display the swapped numbers using the class member function
    ns.display();

    return 0;
}

