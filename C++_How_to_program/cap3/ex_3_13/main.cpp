#include <iostream>
using std::cout;
using std::endl;

#include "Invoice.h"

int main() {
    
    Invoice invoice1(1, "Beterraba", 3, 5);
    Invoice invoice2(2, "Banana", 16, 4);
    
    cout << "Item description: " << invoice1.getDescription()
        << "\nAmount: " << invoice1.getQuantity()
        << "\nIndividual price: R$ " << invoice1.getPrice()
        << "\nTotal: R$ " << invoice1.getInvoiceAmount() << endl;
        
         cout << "\nItem description: " << invoice2.getDescription()
        << "\nAmount: " << invoice2.getQuantity()
        << "\nIndividual price: R$ " << invoice2.getPrice()
        << "\nTotal: R$ " << invoice2.getInvoiceAmount() << endl;
    
    return 0;
}
