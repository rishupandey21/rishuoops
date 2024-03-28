#include <iostream>

using namespace std;

int sumOfSeries(int n) {
    int sum = 0;
    int term_sum = 0;

    for (int i = 1; i <= n; i++) {
        term_sum += i;
        sum += term_sum;
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.";
        return 1;
    }

    int seriesSum = sumOfSeries(n);
    cout << "Sum of series for n = " << n << " is: " << seriesSum << endl;

    return 0;
}

