#include <iostream>
using namespace std;


// main program
int main() {
    float num1;
    float num2;
    float res;
    char op;


    cout << "C++ Calculator\n";

// calculator
    while (true) {
        cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                res = num1 + num2;
                cout << res << endl;
                continue;

            case '-':
                res = num1 - num2;
                cout << res << endl;
                continue;

            case '/':
                res = num1 / num2;
                cout << res << endl;
                continue;

            case '*':
                res = num1 * num2;
                cout << res << endl;
                continue;

            default:
                cout << "+, -, /, *";
                return 1;
        }
    }
    

    return 0;
}