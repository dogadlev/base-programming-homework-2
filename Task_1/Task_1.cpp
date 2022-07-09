// Homework 2. Task 1. Using enumeration for months output.

#include <iostream>

enum class yMonths
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

void printMonth(int month) 
{
    switch (static_cast<yMonths>(month))
    {
    case yMonths::Jan:
        std::cout << "Январь" << std::endl;
        break;

    case yMonths::Feb:
        std::cout << "Февраль" << std::endl;
        break;

    case yMonths::Mar:
        std::cout << "Март" << std::endl;
        break;

    case yMonths::Apr:
        std::cout << "Апрель" << std::endl;
        break;

    case yMonths::May:
        std::cout << "Май" << std::endl;
        break;

    case yMonths::Jun:
        std::cout << "Июнь" << std::endl;
        break;

    case yMonths::Jul:
        std::cout << "Июль" << std::endl;
        break;

    case yMonths::Aug:
        std::cout << "Август" << std::endl;
        break;

    case yMonths::Sep:
        std::cout << "Сентябрь" << std::endl;
        break;

    case yMonths::Oct:
        std::cout << "Октябрь" << std::endl;
        break;

    case yMonths::Nov:
        std::cout << "Ноябрь" << std::endl;
        break;

    case yMonths::Dec:
        std::cout << "Декабрь" << std::endl;
        break;

    default:
        break;
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int month = 1;
    bool q = true; //Bool variable to quit from the loop below.

    while (q)
    {
        std::cout << "Введите номер месяца (целое число от 1 до 12): ";
        std::cin >> month;
        
        if (month >= 1 && month <= 12)
        {
            printMonth(month);
        }
        else if (month == 0)
        {
            std::cout << "До свидания" << std::endl;
            q = false;
        }
        else
        {
            std::cout << "Вы ввели неправильный номер месяца. Попробуйте целое число от 1 до 12." << std::endl;
        }
    }
    
    return 0;
}