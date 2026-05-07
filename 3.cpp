#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("sample.txt");

    if(file.is_open()) {
        file << "Welcome to Alfido Tech Internship";
        file.close();
        cout << "Data written successfully\n";
    }
    else {
        cout << "Error opening file\n";
    }

    ifstream readFile("sample.txt");
    string text;

    if(readFile.is_open()) {
        getline(readFile, text);
        cout << "Reading from file: " << text;
        readFile.close();
    }
    else {
        cout << "Error reading file";
    }

    return 0;
}