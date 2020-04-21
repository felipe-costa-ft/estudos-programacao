#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

// função construtora
// valida se o saldo inicial é pelo menos 0.
Account::Account(int initialBalance) {
    
    
    if(initialBalance >= 0) {
        setAccountBalance(initialBalance);
    } else {
        setAccountBalance(0);
        cout << "Error! Invalid initial balance, must be at least 0" << endl;
    }
    
}

// configura o saldo da conta
void Account::setAccountBalance(int balance) {
    accountBalance = balance;
}

// função que obtém o saldo da conta
int Account::getAccountBalance() {
    return accountBalance;
}

// função que deposita um valor na conta
void Account::credit(int value) {
    setAccountBalance(getAccountBalance() + value);
}

// função que retira um valor da conta
void Account::debit(int value) {
    if(value <= getAccountBalance()){
        setAccountBalance(getAccountBalance() - value);
    } else {
        cout << "Debit amount exceeded account balance." << endl;
    }
}
