#include "Center_db.h"
#include "center.h"
#include "student.h"

#include <iterator>
#include <list>
void CenterDb::addStudent(int id, int age, std::string name, std::string phn,
                          std::string city, int s, double amt, std::string sub,
                          int sub1) {
  center.push_back(Center(id, age, name, phn, city, s, amt, sub, sub1));
}
void CenterDb::removeStudentById(int id) {
  std::list<Center>::iterator iter;
  for (iter = center.begin(); iter != center.end(); iter++) {
    if (iter->getId() == id) {
      center.erase(iter);
      break;
    }
  }
}
int CenterDb::countAllStudents() { return center.size(); }
Center *CenterDb::findStudentById(int id) {
  std::list<Center>::iterator iter;
  for (iter = center.begin(); iter != center.end(); ++iter) {
    if (iter->getId() == id)
      return &(*iter);
  }
  return NULL; // nullptr
}


int CenterDb::countStudentsByAge(int age) {

  int count = 0;
  std::list<Center>::iterator iter;
  for (iter = center.begin(); iter != center.end(); iter++) {
    if (iter->getAge() == age)
      count++;
  }
  return count;
}
int CenterDb::countStudentByAgeRange(int min, int max) {
  std::list<Center>::iterator it;
  int c = 0;
  for (it = center.begin(); it != center.end(); ++it) {
    if (it->getAge() > min && it->getAge() < max)
      c++;
  }
  return c;
}

double CenterDb::findAverageCharge() {

  int sum = 0;
  std::list<Center>::iterator iter;
  for (iter = center.begin(); iter != center.end(); iter++) {
    sum = sum + iter->studentFee();
  }

  return sum / center.size();
}


