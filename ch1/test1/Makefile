test: 
	g++ -std=c++11 -O1 -o test test.cpp timecost.hpp -I.

	g++ -E  test.cpp  -o test1.i
	g++ -S  test1.i   -o  test1.s
	g++ -c  test1.s -o test1.o 
	g++  test1.o -o test1
 clean:  
	rm -f *.o  *.s *.i test