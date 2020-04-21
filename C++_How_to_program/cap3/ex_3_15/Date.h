// definição da classe date
class Date {
    
public:
    Date(int month, int day, int year); // construtor que inicializa valores iniciais
    void setDateMonth(int month); // função que configura o mês
    int getDateMonth(); // função que obtém o mês
    void setDateDay(int day); // função que configura o dia
    int getDateDay(); // função que obtém o dia
    void setDateYear(int year); // função que configura o ano
    int getDateYear(); // função que obtém o ano
    void displayDate(); // função que exibe data separada por barras normais
    
private:
    int dateMonth; // mês
    int dateDay; // dia
    int dateYear; // ano
};
