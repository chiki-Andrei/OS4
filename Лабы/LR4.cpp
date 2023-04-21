#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(int number) {
    int reversed = 0;
    int original = number;
    while (original > 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }
    return number == reversed;
}

int main() {
    int number;

    cout << "Enter number: ";
    cin >> number;
    if (isPalindrome(number)) {
        cout << number << " is polyndrom" << endl;
    } else {
        cout << number << " is not polyndrom" << endl;
    }
    return 0;
}
