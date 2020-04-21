#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h"

// construtor que inicia membros de dados
Employee::Employee(string name, string lastName, int income) {
    setEmployeeName(name);
    setEmployeeLastName(lastName);
    setMonthlyIncome(income);
}

// função que configura o nome do empregado
void Employee::setEmployeeName(string name) {
    employeeName = name;
}

// função que obtém o nome do empregado
string Employee::getEmployeeName() {
    return employeeName;
}

// função que configura o sobrenome do empregado
void Employee::setEmployeeLastName(string lastName) {
    employeeLastName = lastName;
}

// função que obtém o sobrenome do empregado
string Employee::getEmployeeLastName() {
    return employeeLastName;
}

// função que configura o salário mensal do empregado
void Employee::setMonthlyIncome(int income) {
    if (income < 0) {
        cout << "Income must be at least 0." << endl;
        monthlyIncome = 0;
    } else {
        monthlyIncome = income;
    }
}

// função que obtém o salário mensal do empregado
int Employee::getMonthlyIncome() {
    return monthlyIncome;
}
