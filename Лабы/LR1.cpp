#include <iostream>

using namespace std;
int main() {
    const int CAPACITY = 50;

    int passengers;
    int remainPassangers;

    cout << "Enter total amount of passangers: ";
    cin >> passengers;
    remainPassangers = passengers % CAPACITY;
    cout << "Empty spaces on last bus: " << CAPACITY - remainPassangers << endl;

    return 0;
}
