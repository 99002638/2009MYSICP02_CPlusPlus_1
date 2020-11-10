#include "center.h"
#include "student.h"
#include <gtest/gtest.h>
namespace {
class CenterTest : public ::testing ::Test {
protected:
  void SetUp() {
    bptr = new Center(9, 45, "Nikitha", "945468574", "Hyderabad", 13, 1500.0,
                      "java", 44);
  }
  void TearDown() { delete bptr; }
  Center *bptr;
};

TEST_F(CenterTest, DefaultConstuctor) {
  Center cen;
  EXPECT_EQ(0, cen.getId());
  EXPECT_EQ(0, cen.getAge());
  EXPECT_EQ(0, cen.getSubjectId());
  EXPECT_EQ(1800.0, cen.charge());
  EXPECT_EQ("Python", cen.getSubjectDomain());
  EXPECT_EQ("", cen.getName());
  EXPECT_EQ("", cen.getPhone());
  EXPECT_EQ("", cen.getCity());
}
TEST_F(CenterTest, ParameterizedConstuctor) {
  Center cen1(10, 55, "shabana", "9741149054", "Mysore", 15, 1500.0, "c++", 33);
  EXPECT_EQ(10, cen1.getId());
  EXPECT_EQ(55, cen1.getAge());
  EXPECT_EQ("shabana", cen1.getName());
  EXPECT_EQ("9741149054", cen1.getPhone());
  EXPECT_EQ("Mysore", cen1.getCity());
  EXPECT_EQ(33, cen1.getSubjectId());
  EXPECT_EQ(1500.0, cen1.charge());
  EXPECT_EQ("c++", cen1.getSubjectDomain());
}

TEST_F(CenterTest, ComputeCharge) { EXPECT_EQ(19500.0, bptr->studentFee()); }
}
