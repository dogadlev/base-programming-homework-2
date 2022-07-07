// Homework_1. Task_2.

#include <iostream>
#include <string>
#include <clocale> //To use setlocale(LC_ALL, "Russian")
#include <windows.h> //To use SetConsoleOutputCP(1251) and SetConsoleCP(1251)

struct bankAccount 
{
    unsigned long long account_number = 0;
    std::string owner_name;
    float balance = 0.0f;
};

void createAccount(bankAccount &bankAcc)
{
    std::cout << "¬ведите номер счета: ";
    std::cin >> bankAcc.account_number;

    std::cout << "¬ведите им€ владельца: ";
    std::cin >> bankAcc.owner_name;

    std::cout << "¬ведите баланс: ";
    std::cin >> bankAcc.balance;
}

void changeBalance(bankAccount &bankAcc, float moneyAmount)
{
    bankAcc.balance = moneyAmount;
}

void printBalance(bankAccount &bankAcc)
{
    std::cout << "¬аш счет: " << bankAcc.owner_name << ", " << bankAcc.account_number << ", " << bankAcc.balance << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); //Sets the input code page (1251) used by the console.
    //SetConsoleOutputCP(1251);

    float moneyAmount = 0;
    bankAccount bankAcc;

    createAccount(bankAcc);

    std::cout << "¬ведите новый баланс: ";
    std::cin >> moneyAmount;

    changeBalance(bankAcc, moneyAmount);
    
    printBalance(bankAcc);

    return 0;
}