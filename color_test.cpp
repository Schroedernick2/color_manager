#include <cstdlib>
#include <iostream>
#include <string>

#include "color_manager.h"

using namespace COLOR_HANDLER;
using namespace std;

int main(int argc, char** argv){
	color_manager* cm = new color_manager();

	cout << "Starting test..." << endl;
	cout << "\n-------------------------\n" << endl;
	cout << "\tAttributes\n" << endl;
	cm->clear_attributes();
	cm->set_default_color();
	cout << "Normal:\t\t" << cm->format("NORMAL TEXT") << endl;

	cm->set_attribute(BOLD);
	cout << "Bold:\t\t" << cm->format("BOLD TEXT") << endl;

	cm->remove_attribute(BOLD);
	cm->set_attribute(DIM);
	cout << "Dim:\t\t"<< cm->format("DIM TEXT") << endl;

	cm->remove_attribute(DIM);
	cm->set_attribute(ITALIC);
	cout << "Italic:\t\t" << cm->format("ITALIC TEXT") << endl;

	cm->remove_attribute(ITALIC);
	cm->set_attribute(UNDERLINED);
	cout << "Underlined:\t" << cm->format("UNDERLINED TEXT") << endl;

	cm->remove_attribute(UNDERLINED);
	cm->set_attribute(REVERSE);
	cout << "Reverse:\t" << cm->format("INVERTED COLOR TEXT") << endl;

	cm->remove_attribute(REVERSE);
	cm->set_attribute(HIDDEN);
	cout << "Hidden:\t" << cm->format("HIDDEN TEXT") << endl;

	cm->remove_attribute(HIDDEN);
	cm->set_attribute(CROSSED);
	cout << "Crossed:\t" << cm->format("CROSSED OUT TEXT") << "\n" << endl;


	int* attr = (*int)malloc(MAX_ATTR*sizeof(int));

	cm->clear_attributes();
	cm->set_attributes(,3)
	cout << "Bold, Underlined, Crossed: \t" << 


	cout << "\n-------------------------\n" << endl;
	cout << "Done." << endl;

	return EXIT_SUCCESS;
}
