#include <string>
using std::string;


//Definição da classe Invoice
class Invoice {

public:
    Invoice(int number, string about, int amount, int value); //  construtor que configura valores iniciais
    void setIdentifierNumber(int number); // função que configura o  codigo do produto
    int getIdentifierNumber(); // função que obtém o código do produto
    void setDescription(string about); // função que configura a descrição
    string getDescription(); // função que obtém a descrição do produto
    void setQuantity(int amount); // função que configura a quantidade comprada
    int getQuantity(); // função que obtém a quantidade comprada
    void setPrice(int value); // função que configura o preço de um item
    int getPrice(); // função que obtém o preço de um item
    int getInvoiceAmount(); // função que obtém o valor final da compra
    
    
private:
    int identifierNumber; // número de identificação do produto
    string description; // descrição do produto
    int quantity; // quantidade de itens comprada
    int price; // preço por item

};
