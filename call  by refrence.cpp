#include <iostream>
using namespace std;
void attemptWithdraw(int &balance, int amount)
{
    cout << "Attempting withdrawal…" << endl;
    balance = balance - amount;
    cout << "Withdrawal successful. New balance inside function: " << balance << endl;
}
int main()
{
    int balance, amount;
    cout << "Balance=";
    cin >> balance;
    cout << "Amount=";
    cin >> amount;
    attemptWithdraw(balance, amount);
    cout << "Balance in main: " << balance;
    return 0;
}