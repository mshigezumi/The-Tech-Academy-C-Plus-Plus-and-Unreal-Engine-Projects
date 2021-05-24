// DifficultChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
//#include <cmath>
using namespace std;

void function1(string s = "test")
{
    cout << s << "\n";
}

void function1(string s1, string s2)
{
    cout << s1 + " " + s2 << "\n";
}

int function2()
{
    return 0;
}

void function3(int &i, int &j) //swap numbers
{
    int k = i;
    i = j;
    j = k;
}

class Class {
public:
    string name;
    int number;

    void function1()
    {
        cout << "test1" << "\n";
    }

    void function2();

    Class()
    {

    }

    Class(string s, int i)
    {
        name = s;
        number = i;
    }

    Class(int i);

private:
    string secret = "this is a secret";
    string getSecret()
    {
        return secret;
    }

protected:
    string secret2 = "this is also a secret";
    string getSecret2()
    {
        return secret2;
    }
};

void Class::function2()
{
    cout << "test2" << "\n";
}

//Class::Class(int i)
//{
//    name = "N/A";
//    number = i;
//}

class Class2 : public Class {
public:
    int number2;

    Class2(string s, int i)
    {
        name = s;
        number = i;
        number2 = 0;
    }

    string getProtected()
    {
        return getSecret2();
    }

    void function1()
    {
        cout << "this was overwritten" << "\n";
    }
};

class Class3 : public Class2 {
public:
    int number3;
};

class OtherClass {
public:
    void test()
    {
        cout << "test" << "\n";
    }
};

class CombinedClass : public Class3, public OtherClass {
};

int main()
{
    string food = "Sushi";
    cout << food << "\n";
    cout << &food << "\n";
    string* pointer = &food;
    cout << pointer << "\n";
    cout << *pointer << "\n";

    function1();
    function1("test1", "test2");
    cout << function2() << "\n";
    int i = 10;
    int j = 20;
    function3(i, j);
    cout << i << "\n";
    cout << j << "\n";

    Class classObj1("name1", 1);
    Class classObj2("name2", 2);

    cout << classObj1.name << " " << classObj1.number << "\n";
    cout << classObj2.name << " " << classObj2.number << "\n";

    classObj1.function1();
    classObj1.function2();

    Class2 classObj3("name3", 3);
    cout << classObj3.getProtected() << "\n";
    classObj3.function1();

    try
    {
        int number = 10;
        if (number > 20)
        {
            cout << "number is > 20" << "\n";
        }
        else
        {
            throw (number);
        }
    }
    catch (int num)
    {
        cout << "number is not > 20" << "\n";
    }

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
