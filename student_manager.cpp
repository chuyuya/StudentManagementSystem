#include "student_manager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
    std::cout << "Student added successfully!\n";
}

void StudentManager::removeStudent(int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            std::cout << "Student removed successfully!\n";
            return;
        }
    }
    std::cout << "Student not found!\n";
}

Student* StudentManager::findStudent(int id) {
    for (auto& student : students) {
        if (student.getId() == id) {
            return &student;
        }
    }
    return nullptr;
}

void StudentManager::displayAllStudents() const {
    if (students.empty()) {
        std::cout << "No students in the list!\n";
        return;
    }
    std::cout << "\nAll Students:\n";
    std::cout << "=====================================\n";
    for (const auto& student : students) {
        student.display();
        std::cout << "=====================================\n";
    }
}

void StudentManager::displayStudentById(int id) const {
    for (const auto& student : students) {
        if (student.getId() == id) {
            std::cout << "Student found!\n";
            student.display();
            return;
        }
    }
    std::cout << "Student not found!\n";
}