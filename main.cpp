#include "student_manager.h"
#include <iostream>
#include <string>

void showMenu() {
    std::cout << "\nStudent Management System\n";
    std::cout << "=========================\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. Remove Student\n";
    std::cout << "3. Find Student\n";
    std::cout << "4. Display All Students\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    StudentManager manager;
    int choice;
    
    do {
        showMenu();
        std::cin >> choice;
        
        switch (choice) {
            case 1: {
                std::string name;
                int id;
                double score;
                
                std::cout << "\nEnter student name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                
                std::cout << "Enter student ID: ";
                std::cin >> id;
                
                std::cout << "Enter student score: ";
                std::cin >> score;
                
                Student student(name, id, score);
                manager.addStudent(student);
                break;
            }
            case 2: {
                int id;
                std::cout << "\nEnter student ID to remove: ";
                std::cin >> id;
                manager.removeStudent(id);
                break;
            }
            case 3: {
                int id;
                std::cout << "\nEnter student ID to find: ";
                std::cin >> id;
                manager.displayStudentById(id);
                break;
            }
            case 4:
                manager.displayAllStudents();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 5);
    
    return 0;
}