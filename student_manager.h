#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student);
    void removeStudent(int id);
    Student* findStudent(int id);
    void displayAllStudents() const;
    void displayStudentById(int id) const;
};

#endif // STUDENT_MANAGER_H