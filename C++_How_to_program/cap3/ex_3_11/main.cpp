#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

//A função main inicia a execução do programa
int main() {
    
    // cria dois objetos GradeBook
    // nome inicial de curso de gradeBook1 é muito longo
    GradeBook gradeBook1("CS101 C++ Programming", "Neil Tonin");
    GradeBook gradeBook2("CS102 C++ Data Structures", "Alan Turing");
    
    //exibe mensagem de boas-vindas seguido do nome do curso e do nome do instrutor
    gradeBook1.displayMessage();
    
        return 0; // indica terminação bem-sucedida
} // fim de main
