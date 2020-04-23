#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // assegura que o ponto de fração decimal seja exibido

#include <iomanip> //manipuladores de fluxo parametrizados
using std::setprecision; // configura a precisão de saída numérica

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
    double average; // número com ponto de fração decimal para média
    
    // fase de inicialização
    total = 0; // inicializa o total
    gradeCounter = 0; // inicializa o contador de loops
    
    // fase de processamento
    // solicita e lê a nota do usuário
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // insere nota ou valor de sentinela
    
    // faz um loop até ler o valor de sentinela inserido pelo usuário
    while(grade != -1) { // enquanto a nota não é -1
        
        total = total + grade; // adiciona grade a total
        gradeCounter = gradeCounter+1; // incrementa contador
        
        // solicita entrada e lê a próxima nota fornecida pelo usuário
        cout << "Enter grade or -1 to quit: ";
        cin >> grade; // insere nota ou valor de sentinela
    } // fim do while
    
    // fase de término
    if(gradeCounter != 0) { // se usuário inseriu pelo menos uma nota...
        // calcula a média de todas as notas inseridas
        average = static_cast<double>(total)/gradeCounter;
        
        //exibe o total e a média (com dois dígitos de precisão)
        cout << "\nTotal of all " << gradeCounter << " grades entered is "
            << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average
            << endl;
    } // fim do if
    else { // nenhuma nota foi inserida, assim gera a saída da mensagem apropriada
        cout << "No grades were entered" << endl;
    }
} // fim da função determineClassAverage
