#include "Invoice.h"

// construtor que configura valores iniciais
Invoice::Invoice(int number, string about, int amount, int value) {
    setIdentifierNumber(number);
    setDescription(about);
    setQuantity(amount);
    setPrice(value);
}

// função que configura o  codigo do produto
void Invoice::setIdentifierNumber(int number) {
    identifierNumber = number;
}

// função que obtém o código do produto
int Invoice::getIdentifierNumber() {
    return identifierNumber;
}

// função que configura a descrição
void Invoice::setDescription(string about) {
    description = about;
    
}

// função que obtém a descrição do produto
string Invoice::getDescription() {
    return description;
}

// função que configura a quantidade comprada
void Invoice::setQuantity(int amount) {
    quantity = amount;
}

// função que obtém a quantidade comprada
int Invoice::getQuantity() {
    return quantity;
}

// função que configura o preço de um item
void Invoice::setPrice(int value) {
    price = value;
}

// função que obtém o preço de um item
int Invoice::getPrice() {
    return price;
}

// função que obtém o valor final da compra
int Invoice::getInvoiceAmount() {
    return getPrice() * getQuantity();
}
