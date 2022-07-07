// Homework 2. Task 3.

#include <iostream>
#include <locale.h>
#include <string>

struct mailAddress 
{
    std::string country;
    std::string city;
    std::string street;
    std::string buildingNum;
    std::string apartmentNum;
    unsigned long zipCode = 0;
};

void printAdress(mailAddress &address) 
{
    std::cout << "������: " << address.country << std::endl;
    std::cout << "�����: " << address.city << std::endl;
    std::cout << "�����: " << address.street << std::endl;
    std::cout << "����� ����: " << address.buildingNum << std::endl;
    std::cout << "����� ��������: " << address.apartmentNum << std::endl;
    std::cout << "������: " << address.zipCode << "\n\n";
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    mailAddress address1;

    address1.country = "������";
    address1.city = "������";
    address1.street = "�������� ��������";
    address1.buildingNum = "17";
    address1.apartmentNum = "1";
    address1.zipCode = 125009;

    mailAddress address2;

    address2.country = "������";
    address2.city = "����";
    address2.street = "����������";
    address2.buildingNum = "25�";
    address2.apartmentNum = "98";
    address2.zipCode = 644086;

    mailAddress address3;

    address3.country = "������";
    address3.city = "������";
    address3.street = "������� �������";
    address3.buildingNum = "10";
    address3.apartmentNum = "50";
    address3.zipCode = 123001;

    printAdress(address1);

    printAdress(address2);

    printAdress(address3);

    return 0;
}