#include <iostream>
using namespace std;
void Recharge(int &balance, int recharge)
{
    cout << "Attempting Recharge…" << endl;
    balance = balance + recharge;
}
int main()
{
    int balance, recharge;
    cout << "Balance=";
    cin >> balance;
    cout << "Recharge Amount=";
    cin >> recharge;
    Recharge(balance, recharge);
    cout << "Updated Balance: " << balance;
    return 0;
}