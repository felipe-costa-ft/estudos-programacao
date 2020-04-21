#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// o contrutor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) {
    setCourseName(name); // valida e armazena courseName
} // fim do construtor GradeBook
    
// função que configura o nome do curso
// assegura que o nome do curso tenha no máximo 25 caracteres
void GradeBook::setCourseName(string name) {
    if(name.length() <=25) // se o nome tiver 25 ou menos caracteres
        courseName = name; // armazena o nome do curso do objeto
    else { // se o nome tiver mais de 25 caracteres
        // configura courseName como os primeiros 25 caracteres do parametro name
        courseName = name.substr(0, 25); // inicia em 0, comprimento de 25
        
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
        
    } // fim do if...else
} // fim da função setCourseName

// função que obtém o nome do curso
string GradeBook::getCourseName() {
    return courseName; // retorna o courseName do objeto
} // fim da função getCourseName
    
// exibe uma mensagem de boas-vindas para o usuário GradeBook
void GradeBook::displayMessage() {
    // chama getCourseName para obter o courseName
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
    << endl;
} // fim da função displayMessage

//determina a média da classe com base em 10 notas inseridas pelo usuário
void GradeBook::determineClassAverage() {
    
    int total; // soma das notas inseridas pelo usuário
    int gradeCounter; // número da nota a ser inserida a seguir
    int grade; // valor da nota inserida pelo usuário
    int average; // média das notas
    
    // fase de inicialização
    total = 0; // inicializa o total
    gradeCounter = 1; // inicializa o contador de loops
    
    // fase de processamento
    
    while(gradeCounter <= 10) { // faz o loop 10 vezes
        
        cout << "Enter Grade: "; // solicita entrada
        cin >> grade; // insere a próxima nota
        total = total + grade; // adiciona grade a total;
        gradeCounter = gradeCounter + 1; // incrementa o contador por 1
    } // fim do while
    
    // fase de término
    average = total / 10; // divisão de inteiros prouz um resultado inteiro
    
    // exibe o total e a média das notas
    cout << "\nTotal off all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
} // fim da função determineClassAverage
