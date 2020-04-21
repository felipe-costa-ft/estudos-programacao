#include <string> // a classe GradeBook utiliza classe de string padrão C++
using std::string;

// Definição da classe GradeBook
class GradeBook {
    
public:
    
    GradeBook(string course, string instructor); // o contrutor inicializa courseName com a string fornecida como argumento
    void setCourseName(string name);  // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void setInstructorName(string name); // função que configura o nome do instrutor
    string getInstructorName(); // função que obtém o nome do instrutor
    void displayMessage(); // função que exibe mensagem de boas-vindas
    
private:
    string courseName; // nome do curso para esse GradeBook
    string instructorName; // nome do instrutor do curso 
}; //fim da classe GradeBook
