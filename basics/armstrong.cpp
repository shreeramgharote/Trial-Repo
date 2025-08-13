#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int in, temp, sum = 0, digits = 0;
    cin >> in;
    temp = in;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
        cout<<"digits :"<<digits<<endl;
    }

    temp = in;
    // Calculate Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += static_cast<int>(pow(digit, digits));
        temp /= 10;
        cout << "Current digit: " << digit << ", Current sum: " << sum << endl;
    }

    if (sum == in)
        cout << "Its an armstrong number";
    else
        cout << "Not armstrong no";

    return 0;
}
