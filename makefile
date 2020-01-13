#Nicholas Schroeder
#ColorOutput Makefile

color_test: color_test.o
	g++ -o color_test color_test.o
color_test.o: color_test.cpp color.h
	g++ -c color_test.cpp

clean:
	rm -rf *.o color_test
