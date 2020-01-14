#Nicholas Schroeder
#ColorOutput Makefile

color_test: color_test.o color_manager.o
	g++ -std=c++0x -o color_test color_test.o color_manager.o
color_test.o: color_test.cpp color_manager.o
	g++ -std=c++0x -c color_test.cpp

color_manager.o: color_manager.cpp color_manager.h colors.h
	g++ -std=c++0x -c color_manager.cpp

clean:
	rm -rf *.o color_test
