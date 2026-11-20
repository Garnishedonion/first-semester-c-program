#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};
class Student : public Person
{
public:
    int roll;
    void displayRoll()
    {
        cout << "Roll Number: " << roll << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Abir";
    s1.roll = 04;
    s1.displayName();
    s1.displayRoll();
    return 0;
}