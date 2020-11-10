#include "center.h"
#include "student.h"

Center ::Center() : Student() {
  newcharge = 1800.0;
  sub_domain = "Python";
}

Center ::Center(int id, int age, string name, string phn, string city, int s, double amt,
                string sub, int sub1)
    : Student(id, age, name, phn, city, s, sub1) {
  sub_domain = sub;
  newcharge = amt;
}
double Center ::charge() { return newcharge; }

std::string Center ::getSubjectDomain() { return sub_domain; }

double Center::studentFee() { return fee * newcharge; }
