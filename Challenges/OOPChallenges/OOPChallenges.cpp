// OOPChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
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

class Shape {
public:
    string color;

    float getArea();
};

class Rectangle : public Shape {
public:
    float height;
    float width;

    float getArea()
    {
        return height * width;
    }
};

class Triangle : public Shape {
public:
    float base;
    float height;

    float getArea()
    {
        return (height * base) / 2;
    }
};

class Circle : public Shape {
public:
    float radius;

    float getArea()
    {
        return M_PI * pow(radius, 2);
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

    cout << "\n" << "--" << "\n" << "\n";

    Rectangle rect;
    rect.height = 10;
    rect.width = 5;
    rect.color = "blue";
    cout << "the " + rect.color + " rectangle has an area of ";
    cout << rect.getArea() << "\n";

    Triangle tri;
    tri.base = 10;
    tri.height = 5;
    tri.color = "red";
    cout << "the " + tri.color + " triangle has an area of ";
    cout << tri.getArea() << "\n";

    Circle cir;
    cir.radius = 10;
    cir.color = "purple";
    cout << "the " + cir.color + " circle has an area of ";
    cout << cir.getArea() << "\n";

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
