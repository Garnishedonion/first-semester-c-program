#include <iostream>
using namespace std;
class Bank
{
private:
    int balance;
public:
    void setBalance(int b)
    {
        balance = b;
    }
    void displayBalance()
    {
        cout << "Balance = " << balance;
    }
};
int main()
{
    Bank b1;
    b1.setBalance(5000);
    b1.displayBalance();
    return 0;
}