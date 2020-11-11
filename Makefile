all:	stud
stud:	
	g++ student.cpp CenterTest.cpp center.cpp Center_db.cpp CenterDBTest.cpp -lgtest -lgtest_main -lpthread -o all.out
run:
	./all.out
clean:
	rm *.out

