#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<int> data;
    int size;

public:
    Matrix(int n) : size(n) {
        data.resize(n);
    }

    // Overload the '+' operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cout << "Matrix size mismatch. Addition not possible." << endl;
            return Matrix(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    void setData() {
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    void displayData() const {
        cout << "Matrix Data:" << endl;
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "For Matrix 1:" << endl;
    matrix1.setData();
    cout << "For Matrix 2:" << endl;
    matrix2.setData();

    Matrix result = matrix1 + matrix2;

    cout << "Matrix 1:" << endl;
    matrix1.displayData();
    cout << "Matrix 2:" << endl;
    matrix2.displayData();
    cout << "Matrix 1 + Matrix 2:" << endl;
    result.displayData();

    return 0;
}

