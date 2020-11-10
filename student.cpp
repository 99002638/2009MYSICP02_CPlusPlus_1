#include "student.h"
#include <iostream>
Student ::Student()
    : id(0), age(0), name(""), phone(""), city(""), fee(0), subject(0) {}
Student ::Student(int i, int a, string n, string p, string c, int f, int sub)
    : id(i), age(a), name(n), phone(p), city(c), fee(f), subject(sub) {}
int Student ::getId() { return id; }
int Student ::getAge() { return age; }
std::string Student::getName() { return name; }
std::string Student::getPhone() { return phone; }
std::string Student::getCity() { return city; }
int Student::getSubjectId() { return subject; }
void Student::display() {
  std::cout << "id : " << id << " ,"
            << "age :"
            << " ," << age << "name :" << name << " ,"
            << "phone :" << phone << " ,"
            << "city :" << city << " ,"
            << "fee :" << fee << "\n";
}
double Student::studentFee() { return subject * fee; }