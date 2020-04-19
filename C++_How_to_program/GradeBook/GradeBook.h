#include <iostream>
using std::cout;
using std::endl;

#include <string> //o programa utiliza classe de string padrão C++
using std::string;

// Definição da classe GradeBook
class GradeBook {
    
public:
    // o contrutor inicializa courseName com a string fornecida como argumento
    GradeBook(string name) {
        setCourseName(name); // chama a função set para inicializar courseName
    } // fim do construtor GradeBook
    
    // função que configura o nome do curso
    void setCourseName(string name) {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da função getCourseName
    
    // função que obtém o nome do curso
    string getCourseName() {
        return courseName; // retorna o courseName do objeto
    } // fim da função getCourseName
    
    // essa instrução chama getCourseName para obter o
    // nome do curso que esse GradeBook representa
    void displayMessage() {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!"
        << endl;
    } // fim da função displayMessage
    
private:
    string courseName; //Nome do curso para esse GradeBook
}; //fim da classe GradeBook
