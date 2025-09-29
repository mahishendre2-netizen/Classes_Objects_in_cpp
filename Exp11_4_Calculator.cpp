// Mahi Shendre
// 25070123504


#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;

    float addition() {
        return num1 + num2;
    }

    float subtraction() {
        return num1 - num2;
    }

    float multiplication() {
        return num1 * num2;
    }

    float division() {
         return num1/num2;
        }
    
};

int main() {
    Calculator calc;

    cout << "Enter first number: ";
    cin >> calc.num1;
    cout << "Enter second number: ";
    cin >> calc.num2;

    cout << "Addition = " << calc.addition() << endl;
    cout << "Subtraction = " << calc.subtraction() << endl;
    cout << "Multiplication = " << calc.multiplication() << endl;
    cout << "Division = " << calc.division() << endl;

    return 0;
}

/*
Output:
Enter first number: 16
Enter second number: 12
Addition = 28
Subtraction = 4
Multiplication = 192
Division = 1.33333
*/
