#include "employee.h"
#include <iostream>

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    std::string filename = "employees.txt";

    loadEmployeesFromFile(employees, employeeCount, filename);

    int choice;
    do {
        std::cout << "\n1. Add Employee\n2. Print Employees by Age\n3. Print Employees by Last Name\n4. Save and Exit\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addEmployee(employees, employeeCount);
            break;
        case 2:
            int targetAge;
            std::cout << "Enter target age: ";
            std::cin >> targetAge;
            printEmployeesByAge(employees, employeeCount, targetAge);
            break;
        case 3:
            char targetLetter;
            std::cout << "Enter target letter for last name: ";
            std::cin >> targetLetter;
            printEmployeesByLastName(employees, employeeCount, targetLetter);
            break;
        case 4:
           
            saveEmployeesToFile(employees, employeeCount, filename);
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
