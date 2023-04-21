#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

struct PhoneRecord {
    string phone;
    string name;
    string address;
};

bool compareRecords(const PhoneRecord& record1, const PhoneRecord& record2) {
    return record1.phone < record2.phone;
}

int main() {
    string filename = "phones.txt";
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open file " << filename << endl;
        return 0;
    }

    vector<PhoneRecord> records;
    PhoneRecord record;
    while (file >> record.phone >> record.name >> record.address)
        records.push_back(record);

    sort(records.begin(), records.end(), compareRecords);

    ofstream outfile("sorted_phones.txt");
    if (!outfile.is_open()) {
        cout << "Failed to create output file" << endl;
        return 0;
    }

    for (const auto& record : records)
        outfile << record.phone << " " << record.name << " " << record.address << endl;

    outfile.close();
    return 0;
}
