#include <iostream>
using namespace std;
class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};
int main()
{
    Addition obj;
    cout << obj.add(07, 75) << endl;
    cout << obj.add(6.7f, 5.7f);
    return 0;
}