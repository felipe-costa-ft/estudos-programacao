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
    void inputGrades(); // insere número arbitrário de notas de usuário
    void displayGradeReport(); // exibe um relatório baseado nas notas
    
private:
    string courseName; // nome do curso para esse GradeBook
    int aCount; // contagem de notas A
    int bCount; // contagem de notas B
    int cCount; // contagem de notas C
    int dCount; // contagem de notas D
    int fCount; // contagem de notas F
}; //fim da classe GradeBook
