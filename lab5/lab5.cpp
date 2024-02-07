// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int score1 = 7;
    int score2 = 8;
    int score3 = 10;
    int score4 = 9;

    vector<int> scores = { 7, 8, 10, 9, 3, 9 };

    char character = 'H';
    string message = "Hello";
    cout << message << endl;

    cout << "Score for user 5 was: " << scores[5] << endl;

    int size = scores.size();
    cout << size << " playtesters!" << endl;

    for (int i = 0; i < scores.size(); i++)
    {
        int score = scores[i];
        cout << "Playtester #" << (i + 1) << " scored " << score << endl;
    }

    for (int score : scores)
    {
        cout << "Score: " << score << endl;
    }

    std::cout << "Hello World!\n";
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
