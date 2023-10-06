#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
	char nullptr;
    MyString() : str(nullptr) {}
 
    MyString(const char* s) {
        if (s != nullptr) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    
    MyString operator+(const MyString& other) const {
        if (other.str == nullptr) {
            return *this;
        }

        if (str == nullptr) {
            return other;
        }

        char* resultStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(resultStr, str);
        strcat(resultStr, other.str);

        MyString result(resultStr);
        delete[] resultStr;

        return result;
    }

    void display() const {
        if (str != nullptr) {
            cout << str;
        } else {
            cout << "Empty String";
        }
        cout << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString concatenated = str1 + str2;

    cout << "String 1: ";
    str1.display();

    cout << "String 2: ";
    str2.display();

    cout << "Concatenated String: ";
    concatenated.display();

    return 0;
}

