#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h"

int main() {
    
    Employee employee1("Joao", "Silva", 965);
    Employee employee2("Francisco", "Costa", 1500);
    
    cout << employee1.getEmployeeName() << " " << employee1.getEmployeeLastName()
        << "\nInitial anual income: R$ " << employee1.getMonthlyIncome()*12
        << endl; 
        
    cout << endl;
        
    cout << employee2.getEmployeeName() << " " << employee2.getEmployeeLastName()
        << "\nInitial anual income: R$ " << employee2.getMonthlyIncome()*12
        << endl;
        
    cout << endl;
    
    employee1.setMonthlyIncome(employee1.getMonthlyIncome()*1.1);
    employee2.setMonthlyIncome(employee2.getMonthlyIncome()*1.1);
    
    
    cout << employee1.getEmployeeName() << " " << employee1.getEmployeeLastName()
        << "\nAnual income: R$ " << employee1.getMonthlyIncome()*12
        << endl; 
        
    cout << endl;
        
    cout << employee2.getEmployeeName() << " " << employee2.getEmployeeLastName()
        << "\nAnual income: R$ " << employee2.getMonthlyIncome()*12
        << endl;
        
    return 0;
}
