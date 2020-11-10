#ifndef __CENTER_H
#define __CENTER_H
#include "student.h"
#include <cstdint>
#include <string>



class Center : public Student{
 double newcharge;
 std::string sub_domain;
public:
Center();
Center(int,int,std::string,std::string,std::string,int,double,std::string,int);
std::string getSubjectDomain();
double studentFee();
double charge();
};

#endif
