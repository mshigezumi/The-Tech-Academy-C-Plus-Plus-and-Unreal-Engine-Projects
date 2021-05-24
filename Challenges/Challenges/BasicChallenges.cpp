// Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    const char c = 'a';
    int i = 1;
    float f = 1.1;
    double d = 1.2;
    bool b = false;
    string s = "test";

    cout << c;
    cout << "\n";
    cout << i;
    cout << "\n";
    cout << f;
    cout << "\n";
    cout << d;
    cout << "\n";
    cout << b;
    cout << "\n";
    cout << s;
    cout << "\n";
    cout << s.length();
    cout << "\n";
    s[0] = 'b';
    cout << s[0];
    cout << "\n";

    
    string text = "";
    cin >> text;
    cout << text + "\n";

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
