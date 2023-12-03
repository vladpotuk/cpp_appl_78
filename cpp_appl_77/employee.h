#pragma once
#include <string>

struct Employee {
    std::string firstName;
    std::string lastName;
    int age;

    void printInfo() const;  
};

void addEmployee(Employee* employees, int& count);

void printEmployeesByAge(const Employee* employees, int count, int targetAge);

void printEmployeesByLastName(const Employee* employees, int count, char targetLetter);

void saveEmployeesToFile(const Employee* employees, int count, const std::string& filename);

void loadEmployeesFromFile(Employee* employees, int& count, const std::string& filename);
