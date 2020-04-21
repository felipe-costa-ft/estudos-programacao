#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

// construtor que inicializa valores iniciais
Date::Date(int month, int day, int year) {
    setDateMonth(month);
    setDateDay(day);
    setDateYear(year);
}

// função que configura o mês
void Date::setDateMonth(int month) {
    if(month < 1 or month > 12) {
        cout << "Month must be between 1 and 12." << endl;
        dateMonth = 1;
    } else {
        dateMonth = month;
    }
}

// função que obtém o mês
int Date::getDateMonth() {
    return dateMonth;
}

// função que configura o dia
void Date::setDateDay(int day) {
    dateDay = day;
}

// função que obtém o dia
int Date::getDateDay() {
    return dateDay;
}

// função que configura o ano
void Date::setDateYear(int year) {
    dateYear = year;
}

// função que obtém o ano
int Date::getDateYear() {
    return dateYear;
}

// função que exibe data separada por barras normais
void Date::displayDate() {
    cout << getDateDay() << "/" << getDateMonth() << "/" << getDateYear()
        << endl;
    
}
