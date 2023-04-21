#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int TICKET_PRICE = 10;
    const int GROUP_SIZE = 5;

    int ages[GROUP_SIZE];

    cout << "Enter people ages: ";
    for (int i = 0; i < GROUP_SIZE; i++) {
        cin >> ages[i];
    }

    int minAge = *min_element(ages, ages + GROUP_SIZE);

    float totalCost = GROUP_SIZE * TICKET_PRICE * (1.0 - minAge / 100.0);
    cout << "Total cost: " << totalCost << " $" << endl;

    return 0;
}
