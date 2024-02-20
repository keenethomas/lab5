// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char translateChar(char c, const vector<char>& cipher) {
    if (isupper(c)) {
        return cipher[c - 'A'];
    }

    else if (islower(c)) {
        char upperCaseLetter = toupper(c);
        char upperCaseCode = cipher[upperCaseLetter - 'A'];
        return tolower(upperCaseCode);
    }

    else {
        return c;
    }
}

string encodeString(const string& input, const vector<char>& cipher) {
    string encodedString = "";
    for (char c : input) {
        encodedString += translateChar(c, cipher);
    }

    return encodedString;
}

int main()
{
    vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    cout << "This is a test! It's made up of special characters, *spaces*, and some other weirdness..." << endl;

    string inputString;
    cout << "Encoded Message: ";
    getline(cin, inputString);

    string encodedString = encodeString(inputString, cipher);

    cout << "Translated Message: " << encodedString << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
