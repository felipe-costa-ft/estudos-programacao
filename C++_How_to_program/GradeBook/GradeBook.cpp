#include <iostream>
using std::cout;
using std::endl;

//Definição da classe GradeBook
class GradeBook {
    
public:
    //função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage() {
        cout << "Welcome to the Grade Book!" << endl;
    } // fim da função displayMessage
}; //fim da classe GradeBook

//A função main inicia a execução do programa
int main() {
    
    GradeBook myGradeBook; // cria  um objeto GradeBook chamado myGradeBook
    myGradeBook.displayMessage(); // chama a função displayMessage do objeto
    return 0; // indica terminação bem-sucedida
    
}
