// HarderChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    /*
        This is a multi line code comment
        etc.
        etc.
    */

    string s;
    getline(cin, s);
    cout << s;
    cout << "\n";

    cout << max(5, 10);
    cout << "\n";
    cout << sqrt(64);
    cout << "\n";
    cout << round(10.9);
    cout << "\n";
    cout << pow(5, 10);
    cout << "\n";
    
    if (10 > 5)
    {
        cout << true;
        cout << "\n";
    }

    if (10 < 5)
    {
        cout << false;
        cout << "\n";
    }
    else
    {
        cout << true;
        cout << "\n";
    }

    if (10 < 5)
    {
        cout << false;
        cout << "\n";
    }
    else if (10 > 5)
    {
        cout << true;
        cout << "\n";
    }

    int i = 10;
    switch (i)
    {
    case 5:
        cout << false;
        cout << "\n";
        break;
    case 10:
        cout << true;
        cout << "\n";
        break;
    default:
        cout << "\n";
        break;
    }

    string result = (i >= 10) ? "i is >= 10" : "i is not >= 10";
    cout << result;
    cout << "\n";

    bool go = true;
    i = 0;
    while (go)
    {
        cout << i;
        cout << " ";
        i++;
        if (i > 10)
        {
            go = false;
        }
    }
    cout << "\n";

    go = true;
    i = 0;
    do
    {
        cout << i;
        cout << " ";
        i++;
        if (i > 10)
        {
            go = false;
        }
    } while (go);
    cout << "\n";

    for (size_t i = 0; i < 11; i++)
    {
        cout << i;
        cout << " ";
    }
    cout << "\n";

    i = 0;
    do
    {
        cout << i;
        cout << " ";
        i++;
        if (i == 4)
        {
            break;
        }
    } while (i <= 10);
    cout << "\n";

    i = 0;
    do
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i;
        cout << " ";
        i++;
    } while (i <= 10);
    cout << "\n";

    int num[5] = {10, 20, 30, 40, 50};
    cout << num[0];
    cout << "\n";

    for (size_t i = 0; i < 5; i++)
    {
        cout << num[i];
        cout << " ";
    }
    cout << "\n";

    string food = "Sushi";
    string &dinner = food; // this is a reference variable
    cout << food << "\n";
    cout << dinner << "\n";

    cin >> i;
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
