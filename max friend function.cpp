#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

   
    friend int findMax(MaxFinder &mf);
};

int findMax(MaxFinder &mf) {
    if (mf.num1 > mf.num2) {
        return mf.num1;
    } else {
        return mf.num2;
    }
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    MaxFinder mf(a, b);

    int max = findMax(mf);

    cout << "The maximum number is: " << max << endl;

    return 0;
}

