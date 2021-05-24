// OOPChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog {
public:
    string breed;
    string color;
    int height; //feet
    int weight; //pounds

    Dog()
    {
        breed = "dog";
        color = "";
        height = 0;
        weight = 0;
    }

    Dog(string breed, string color, int height, int weight)
    {
        this->breed = breed;
        this->color = color;
        this->height = height;
        this->weight = weight;
    }

    void shake()
    {
        cout << "The " + breed + " shakes" << "\n";
    }

    void sit()
    {
        cout << "The " + breed + " sits" << "\n";
    }

    void layDown()
    {
        cout << "The " + breed + " lays down" << "\n";
    }
};

int main()
{
    Dog dogObj("Hound", "Brown", 2, 60);
    dogObj.shake();
    dogObj.sit();
    dogObj.layDown();
    
    cout << dogObj.breed << "\n";
    cout << dogObj.color << "\n";
    cout << dogObj.height << "\n";
    cout << dogObj.weight << "\n";
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
