#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int x1, y1, x2, y2;

    cout << "Enter first tile coordinate: ";
    cin >> x1 >> y1;
    cout << "Enter second tile coordinate: ";
    cin >> x2 >> y2;

    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
