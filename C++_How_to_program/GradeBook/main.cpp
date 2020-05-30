#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

//A função main inicia a execução do programa
int main() {
    
    // cria o objeto myGradeBook da classe GradeBook e
    // passa o nome do curso para o construtor
    GradeBook myGradeBook("CS101 C++ Programming");
    
    myGradeBook.displayMessage(); // exibe a mensagem de boas-vindas
    myGradeBook.inputGrades(); // lê as notas fornecidas pelo usuário
    myGradeBook.displayGradeReport(); // exibe relatório baseado em notas
    return 0; // indica terminação bem sucedida
} // fim de main
