#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void readData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student {
protected:
    float percentage;

public:
    Student(float p) : percentage(p) {}

    void readData() {
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void displayData() const {
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person, public Student {
protected:
    float salary;

public:
    Teacher(const std::string& n, int a, float p, float s) : Person(n, a), Student(p), salary(s) {}

    void readData() {
        Person::readData();
        Student::readData();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displayData() const {
        Person::displayData();
        Student::displayData();
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Teacher teacher("", 0, 0.0f, 0.0f);

    std::cout << "Enter teacher's information:" << std::endl;
    teacher.readData();

    std::cout << "\nTeacher's Information:" << std::endl;
    teacher.displayData();

    return 0;
}

