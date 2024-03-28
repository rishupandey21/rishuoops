#include <iostream>

using namespace std;

bool isValid(int number) {
    return number % 8 == 0;
}

int main() {
    int number;
    int count = 0;

    while (true) {
        cout << "Enter the number: ";
        cin >> number;

        if (isValid(number)) {
            count++;
        } else {
            break;
        }
    }

    cout << "Total " << count << " numbers are valid numbers." << endl;

    return 0;
}

