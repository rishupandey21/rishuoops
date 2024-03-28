#include <iostream>
#include <vector>

using namespace std;

class Number {
private:
    int decimalNumber;

public:

    Number(int decimal) : decimalNumber(decimal) {}

    
    vector<int> toBinary() {
        vector<int> binary;
        int num = decimalNumber;

        while (num > 0) {
            binary.push_back(num % 2);
            num /= 2;
        }

        
        if (binary.empty()) {
            binary.push_back(0);
        }

        reverse(binary.begin(), binary.end());
        return binary;
    }
};

int main() {
    int decimalInput;
    cout << "Enter a decimal number: ";
    cin >> decimalInput;

    Number number(decimalInput);
    vector<int> binary = number.toBinary();

    cout << "Binary representation: ";
    for (int digit : binary) {
        cout << digit;
    }
    cout << endl;

    return 0;
}

