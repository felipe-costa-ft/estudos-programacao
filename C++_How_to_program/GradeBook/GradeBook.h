#include <string> // a classe GradeBook utiliza classe de string padrão C++
using std::string;

// Definição da classe GradeBook
class GradeBook {
    
public:
    
    GradeBook(string name); // o contrutor inicializa courseName com a string fornecida como argumento
    void setCourseName(string name);  // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe mensagem de boas-vindas
    void determineClassAverage(); // calcula a média das notas inseridas pelo usuário
    
private:
    string courseName; //Nome do curso para esse GradeBook
}; //fim da classe GradeBook
