all: all.out 
all.out : student.o center.o Center_db.o CenterTest.o CenterDBTest.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
CenterDBTest.o: CenterDBTest.cpp
	g++ $< -c
CenterTest.o: CenterTest.cpp 
	g++ $< -c
Center_db.o : Center_db.cpp Center_db.h 
	g++ $< -c
center.o : center.cpp center.h 
	g++ $< -c    
student.o : student.cpp student.h
	g++ $< -c
clean:
	rm -rf *.o *.out