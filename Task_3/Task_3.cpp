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
    std::cout << "Страна: " << address.country << std::endl;
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.buildingNum << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNum << std::endl;
    std::cout << "Индекс: " << address.zipCode << "\n\n";
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    mailAddress address1;

    address1.country = "Россия";
    address1.city = "Москва";
    address1.street = "Газетный переулок";
    address1.buildingNum = "17";
    address1.apartmentNum = "1";
    address1.zipCode = 125009;

    mailAddress address2;

    address2.country = "Россия";
    address2.city = "Омск";
    address2.street = "Багратиона";
    address2.buildingNum = "25Б";
    address2.apartmentNum = "98";
    address2.zipCode = 644086;

    mailAddress address3;

    address3.country = "Россия";
    address3.city = "Москва";
    address3.street = "Большая садовая";
    address3.buildingNum = "10";
    address3.apartmentNum = "50";
    address3.zipCode = 123001;

    printAdress(address1);

    printAdress(address2);

    printAdress(address3);

    return 0;
}