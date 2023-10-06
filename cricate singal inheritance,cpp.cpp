#include <iostream>
using namespace std;

class Cricketer {
protected:

       string name;
       int age;
public:
    Cricketer(string n, int a) : name(n), age(a) {}

    void InputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void DisplayData() {
        cout << "Name: " << name <<endl;
       cout << "Age: " << age <<endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    Batsman(string n, int a) : Cricketer(n, a) {
        totalRuns = 0;
        averageRuns = 0.0;
        bestPerformance = 0;
    }

    void InputData() {
        Cricketer::InputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void CalculateAverageRuns() {
        if (bestPerformance != 0) {
            averageRuns = static_cast<double>(totalRuns) / bestPerformance;
        }
    }

    void DisplayData() {
        Cricketer::DisplayData();
        cout << "Total Runs: " << totalRuns <<endl;
        cout << "Average Runs: " << averageRuns <<endl;
        cout << "Best Performance: " << bestPerformance <<endl;
    }
};

int main() {
    Batsman batsman("John", 25);

    batsman.InputData();
    batsman.CalculateAverageRuns();
    std::cout << "\nBatsman Information:\n";
    batsman.DisplayData();

    return 0;
}

