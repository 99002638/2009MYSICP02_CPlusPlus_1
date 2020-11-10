#include "center.h"
#include "student.h"
#include "Center_db.h"
#include <gtest/gtest.h>

namespace {

class CenterDbTest : public ::testing::Test {

protected:
  void SetUp() {
    centers.addStudent(1, 22, "Shabana", "7794085419", "Mysore", 12, 1800.0,
                       "MicroServices", 4);
    centers.addStudent(2, 26, "Sudarshana", "9640310610", "Coimbatore", 14, 3000.0,
                       "Flask", 5);
    centers.addStudent(3, 25, "Nikhil", "9949113981", "Hyderabad", 18, 2500.0,
                       "Computer networks", 6);
    centers.addStudent(4, 21, "Aditya", "996997890", "Baroda", 21, 3800.0,
                       "Web technologies", 9),
        7;
  }
  void TearDown() {}
  CenterDb centers;
};

TEST_F(CenterDbTest, AddStudentTest) {
  centers.addStudent(5, 29, "Nithya", "7756900899", "Chennai", 9, 4600.0,
                     "C++", 8);
  EXPECT_EQ(5, centers.countAllStudents());
}
TEST_F(CenterDbTest, RemoveStudentTest) {
  centers.removeStudentById(4);
  EXPECT_EQ(3, centers.countAllStudents());
}
TEST_F(CenterDbTest, CountTest) { EXPECT_EQ(4, centers.countAllStudents()); }

TEST_F(CenterDbTest, ComputeTest) {

  double avgCharge = centers.findAverageCharge();

  int countAge = centers.countStudentsByAge(25);
  int ageRange = centers.countStudentByAgeRange(18, 24);
  Center *ptr = centers.findStudentById(3);

  
  EXPECT_EQ(30750.0, avgCharge);

  EXPECT_EQ(1, countAge);
  EXPECT_EQ(2, ageRange);
  EXPECT_EQ(nullptr, ptr);
  Center *ptr1 = centers.findStudentById(3);
  EXPECT_NE(nullptr, ptr1);
}

} 
