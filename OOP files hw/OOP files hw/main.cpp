#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
    ofstream outFile("C://files//cities.txt");
    if (!outFile) {
        cout << "error!\n";
        return;
    }

    string city;
    for (int i = 1; i <= 10; ++i) {
        //outFile << "number " << i << ": " << "\n";
        outFile << "enter the name of the city " << i << ": ";
        getline(cin, city);
        outFile << city << "\n";
    }
    outFile.close();

    ifstream inFile("C://files//cities.txt");
    if (!inFile) {
        cout << "error!\n";
        return;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << "\n";
    }
    inFile.close();
}