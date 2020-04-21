#include <string>
using std::string;

// definição da classe Employee
class Employee {
    
public:
    Employee(string name, string lastName, int income); // construtor que inicia membros de dados
    void setEmployeeName(string name); // função que configura o nome do empregado
    string getEmployeeName(); // função que obtém o nome do empregado
    void setEmployeeLastName(string lastName); // função que configura o sobrenome do empregado
    string getEmployeeLastName(); // função que obtém o sobrenome do empregado
    void setMonthlyIncome(int income); // função que configura o salário mensal do empregado
    int getMonthlyIncome(); // função que obtém o salário mensal do empregado

private:
    string employeeName; // nome do empregado
    string employeeLastName; // sobrenome do empregado
    int monthlyIncome; // salário mensal do empregado

};
