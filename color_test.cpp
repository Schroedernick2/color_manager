#include <cstdlib>
#include <iostream>
#include <string>

#include "color_manager.h"

using namespace COLOR_HANDLER;
using namespace std;

int main(int argc, char** argv){
	color_manager* cm = new color_manager();
	cm->set_attribute(BOLD);
	cm->set_fg_color(BWHITE_FG);
	cm->set_bg_color(BLUE_BG);

	cout << cm->print("Hello World!") << endl;

	return EXIT_SUCCESS;
}
