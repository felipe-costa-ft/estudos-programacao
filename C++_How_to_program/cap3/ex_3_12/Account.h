
// definição da classe Account
class Account {

public:
    
    Account(int initialBalance); // função construtora
    void setAccountBalance(int balance); // armazena o saldo da conta
    int getAccountBalance(); // função que obtém o saldo da conta
    void credit(int value); // função que deposita um valor na conta
    void debit(int value); // função que retira um valor da conta
    
private:
    int accountBalance; // saldo da conta
};
