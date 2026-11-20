#include <iostream>
using namespace std;
class pool
{
public:
    void withdraw()
    {
        cout << "good day for a swim";
    }
};
int main()
{
   pool a1;
    a1.withdraw();
    return 0;
}