#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;
public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& other) {
        char* result = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result, str);
        strcat(result, other.str);
        MyString newString(result);
        delete[] result;
        return newString;
    }

    void display() const {
        cout << str <<endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2;

    cout << "Concatenated String: ";
    result.display();

    return 0;
}

