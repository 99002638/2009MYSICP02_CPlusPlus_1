#ifndef __Student_H
#define __Student_H
#include<string>
using namespace std;
class Student {
protected :
    int id;
    int age;
    int subject;
    int fee;
    string name;
    string phone;
    string city;
    
    public :
    
    Student();
    Student(int,int,std::string,std::string,std::string,int,int);
    int getId();
    int getAge();   
    int getSubjectId();
    virtual double studentFee();
    void display();
    std::string getName();
    std::string getPhone();
    std::string getCity();




};
#endif