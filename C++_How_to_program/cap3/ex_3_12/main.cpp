#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main() {
    
    Account account1(50);
    Account account2(-5);
    
    cout << "\naccount1's initial balance: " 
        << account1.getAccountBalance() << endl;
    
    cout << "account2's initial balance: "
        << account2.getAccountBalance() << endl
        << endl;
        
    account1.debit(80);
    account2.credit(50);
    account1.debit(20);
    
    cout << "\naccount1's balance: " 
        << account1.getAccountBalance() << endl;
        
    cout << "account2's balance: "
        << account2.getAccountBalance() << endl;
        
    return 0;
}
