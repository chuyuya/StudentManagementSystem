#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int id;
    double score;

public:
    Student();
    Student(std::string name, int id, double score);
    
    std::string getName() const;
    int getId() const;
    double getScore() const;
    
    void setName(std::string name);
    void setId(int id);
    void setScore(double score);
    
    void display() const;
};

#endif // STUDENT_H