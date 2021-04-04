#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() {
    cout << "\n=========== ACCOUNT ===========" << endl;
    Account acc{};
    acc.deposit(20000.0);
    acc.withdraw(5000.0);

    cout << endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(2000);
    p_acc->withdraw(300);
    delete p_acc;

    cout << "\n=========== SAVINGS ACCOUNT ===========" << endl;
    Savings_Account sacc{};
    sacc.deposit(20000.0);
    sacc.withdraw(5000.0);

    cout << endl;

    Savings_Account *p_sacc {nullptr};
    p_sacc = new Savings_Account();
    p_sacc->deposit(2000);
    p_sacc->withdraw(300);
    delete p_sacc;

    return 0;
}