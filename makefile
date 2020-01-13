#Nicholas Schroeder
#ColorOutput Makefile

color_test: color_test.o color_manager.o
	g++ -o color_test color_test.o color_manager.o
color_test.o: color_test.cpp color_manager.o
	g++ -c color_test.cpp

color_manager.o: color_manager.cpp color_manager.h
	g++ -c color_manager.cpp

clean:
	rm -rf *.o color_test
