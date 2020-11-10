#ifndef __CENTERDB_H
#define __CENTERDB_H
#include "student.h"
#include "center.h"
#include <iostream>
#include <list>
#include <iterator>

class CenterDb{
std::list<Center> center;
public:
void addStudent(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string sub,int sub1);
  void removeStudentById(int i);
  int countAllStudents();
    int countStudentsByAge(int);
int countStudentByAgeRange(int min ,int max);
  Center* findStudentById(int);
 double findAverageCharge();

};
#endif
