// Homework 2. Task 1. Using enumeration for months output.

#include <iostream>

enum yMonths
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int month = 0;
    bool q = true;

    while (q)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> month;

        switch (month)
        {
        case(0):
            std::cout << "До свидания" << std::endl;
            q = false;
            break;

        case(yMonths::Jan):
            std::cout << "Январь" << std::endl;
            break;

        case(yMonths::Feb):
            std::cout << "Февраль" << std::endl;
            break;

        case(yMonths::Mar):
            std::cout << "Март" << std::endl;
            break;

        case(yMonths::Apr):
            std::cout << "Апрель" << std::endl;
            break;

        case(yMonths::May):
            std::cout << "Май" << std::endl;
            break;

        case(yMonths::Jun):
            std::cout << "Июнь" << std::endl;
            break;

        case(yMonths::Jul):
            std::cout << "Июль" << std::endl;
            break;

        case(yMonths::Aug):
            std::cout << "Август" << std::endl;
            break;

        case(yMonths::Sep):
            std::cout << "Сентябрь" << std::endl;
            break;

        case(yMonths::Oct):
            std::cout << "Октябрь" << std::endl;
            break;

        case(yMonths::Nov):
            std::cout << "Ноябрь" << std::endl;
            break;

        case(yMonths::Dec):
            std::cout << "Декабрь" << std::endl;
            break;

        default:
            std::cout << "Вы ввели неверный номер месяца. Попробуйте целое числа от 1 до 12." << std::endl;
            break;
        }
    }

    return 0;
}