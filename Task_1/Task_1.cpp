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

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int month = 0;
    bool q = true;

    while (q)
    {
        std::cout << "������� ����� ������: ";
        std::cin >> month;

        switch (month)
        {
        case(0):
            std::cout << "�� ��������" << std::endl;
            q = false;
            break;

        case(static_cast<int>(yMonths::Jan)):
            std::cout << "������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Feb)):
            std::cout << "�������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Mar)):
            std::cout << "����" << std::endl;
            break;

        case(static_cast<int>(yMonths::Apr)):
            std::cout << "������" << std::endl;
            break;

        case(static_cast<int>(yMonths::May)):
            std::cout << "���" << std::endl;
            break;

        case(static_cast<int>(yMonths::Jun)):
            std::cout << "����" << std::endl;
            break;

        case(static_cast<int>(yMonths::Jul)):
            std::cout << "����" << std::endl;
            break;

        case(static_cast<int>(yMonths::Aug)):
            std::cout << "������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Sep)):
            std::cout << "��������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Oct)):
            std::cout << "�������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Nov)):
            std::cout << "������" << std::endl;
            break;

        case(static_cast<int>(yMonths::Dec)):
            std::cout << "�������" << std::endl;
            break;

        default:
            std::cout << "�� ����� �������� ����� ������. ���������� ����� ����� �� 1 �� 12." << std::endl;
            break;
        }
    }

    return 0;
}