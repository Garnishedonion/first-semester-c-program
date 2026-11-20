#include <iostream>
using namespace std;
class pet
{
public:
    virtual void sound()
    {
        cout << "pets are cute";
    }
};
class cat : public pet
{
public:
    void sound() override
    {
        cout << "cat meows";
    }
};
int main()
{
    pet *ptr;
    cat d;
    ptr = &d;
    ptr->sound();
    return 0;
}