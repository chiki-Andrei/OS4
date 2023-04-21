#include <iostream>
#include <fstream>
#include <stack>

using namespace std;
int main() {
    string filename = "program.c";
    ifstream file(filename);
    if (!file.is_open()) {
    cout << "Failed to open file " << filename << endl;
    return 0;
    }

    stack<char> bracketStack;
    char c;
    while (file.get(c)) {
        if (c == '{')
            bracketStack.push(c);
        else if (c == '}') {
            if (bracketStack.empty()) {
                cout << "Error: Extra closing bracket found" << endl;
                return 0;
            }
            else
                bracketStack.pop();
        }
    }

    ofstream outfile("out.txt");
    if (!outfile.is_open()) {
        cout << "Failed to create output file" << endl;
        return 0;
    }

    if (bracketStack.empty()) {
        cout << "All brackets are balanced" << endl;
        outfile << "All brackets are balanced" << endl;
    }
    else {
        cout << "Error: " << bracketStack.size() << " opening bracket(s) have no closing bracket" << endl;
        outfile << "Error: " << bracketStack.size() << " opening bracket(s) have no closing bracket" << endl;
    }

    outfile.close();
    return 0;
}
