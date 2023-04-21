#include <iostream>

using namespace std;

int main() {
    int countdown;

    cout << "Enter countdown number: ";
    cin >> countdown;

    for (int i = countdown; i >= 1; i--) {
        cout << i << endl;
        if (i % 5 == 0) {
            cout << "Beep" << endl;
        }
    }
    return 0;
}
