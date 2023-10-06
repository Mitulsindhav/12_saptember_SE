#include <iostream>
using namespace std;

// Base Class: Student
class Student {
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {}

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived Class 1: Test (inherits from Student)
class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int s1, int s2) : Student(roll), subject1Marks(s1), subject2Marks(s2) {}

    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

// Derived Class 2: Result (inherits from Test)
class Result : public Test {
public:
    Result(int roll, int s1, int s2) : Test(roll, s1, s2) {}

    int getTotalMarks() {
        return subject1Marks + subject2Marks;
    }

    void displayResult() {
        displayRollNumber(); // Accessing the base class function
        displayTestMarks();  // Accessing the derived class function
        cout << "Total Marks: " << getTotalMarks() << endl;
    }
};

int main() {
    Result studentResult(101, 85, 92);
    studentResult.displayResult();

    return 0;
}

