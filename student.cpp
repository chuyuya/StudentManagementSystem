#include "student.h"
#include <iostream>

Student::Student() : name(""), id(0), score(0.0) {}

Student::Student(std::string name, int id, double score) 
    : name(name), id(id), score(score) {}

std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

double Student::getScore() const {
    return score;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setScore(double score) {
    this->score = score;
}

void Student::display() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Score: " << score << "\n";
}