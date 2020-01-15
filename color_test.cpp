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
	cout << "Normal:\t\t\t\t" << cm->format("NORMAL TEXT") << endl;

	cm->set_attribute(BOLD);
	cout << "Bold:\t\t\t\t" << cm->format("BOLD TEXT") << endl;

	cm->remove_attribute(BOLD);
	cm->set_attribute(DIM);
	cout << "Dim:\t\t\t\t"<< cm->format("DIM TEXT") << endl;

	cm->remove_attribute(DIM);
	cm->set_attribute(ITALIC);
	cout << "Italic:\t\t\t\t" << cm->format("ITALIC TEXT") << endl;

	cm->remove_attribute(ITALIC);
	cm->set_attribute(UNDERLINED);
	cout << "Underlined:\t\t\t" << cm->format("UNDERLINED TEXT") << endl;

	cm->remove_attribute(UNDERLINED);
	cm->set_attribute(REVERSE);
	cout << "Reverse:\t\t\t" << cm->format("INVERTED COLOR TEXT") << endl;

	cm->remove_attribute(REVERSE);
	cm->set_attribute(HIDDEN);
	cout << "Hidden:\t\t\t" << cm->format("HIDDEN TEXT") << endl;

	cm->remove_attribute(HIDDEN);
	cm->set_attribute(CROSSED);
	cout << "Crossed:\t\t\t" << cm->format("CROSSED OUT TEXT") << endl;

	int* attr = (int*)malloc(MAX_ATTR*sizeof(int));

	attr[0] = BOLD;
	attr[1] = UNDERLINED;
	attr[2] = CROSSED;

	cm->clear_attributes();
	cm->set_attributes(attr,3);
	cout << "Bold, Underlined, Crossed: \t" << cm->format("MULTIPLE ATTRIBUTES") << endl;

	cm->clear_attributes();
	delete attr;

	cout << "\n\tForeground Colors\n" << endl;

	cm->set_fg_color(DEFAULT_FOREGROUND);
	cout << "Default:\t\t\t" << cm->format("DEFAULT TEXT") << endl;

	cm->set_fg_color(BLACK_FG);
	cout << "Black:\t\t\t\t" << cm->format("BLACK TEXT") << endl;

	cm->set_fg_color(RED_FG);
	cout << "Red:\t\t\t\t" << cm->format("RED TEXT") << endl;

	cm->set_fg_color(GREEN_FG);
	cout << "Green:\t\t\t\t" << cm->format("GREEN TEXT") << endl;

	cm->set_fg_color(YELLOW_FG);
	cout << "Yellow:\t\t\t\t" << cm->format("YELLOW TEXT") << endl;

	cm->set_fg_color(BLUE_FG);
	cout << "Blue:\t\t\t\t" << cm->format("BLUE TEXT") << endl;

	cm->set_fg_color(MAGENTA_FG);
	cout << "Magenta:\t\t\t" << cm->format("MAGENTA TEXT") << endl;

	cm->set_fg_color(CYAN_FG);
	cout << "Cyan:\t\t\t\t" << cm->format("CYAN TEXT") << endl;

	cm->set_fg_color(WHITE_FG);
	cout << "White:\t\t\t\t" << cm->format("WHITE TEXT") << endl;

	cm->set_fg_color(BBLACK_FG);
	cout << "Bright Black:\t\t\t" << cm->format("BRIGHT BLACK TEXT") << endl;

	cm->set_fg_color(BRED_FG);
	cout << "Bright Red:\t\t\t" << cm->format("BRIGHT RED TEXT") << endl;

	cm->set_fg_color(BGREEN_FG);
	cout << "Bright Green:\t\t\t" << cm->format("BRIGHT GREEN TEXT") << endl;

	cm->set_fg_color(BYELLOW_FG);
	cout << "Bright Yellow:\t\t\t" << cm->format("BRIGHT YELLOW TEXT") << endl;

	cm->set_fg_color(BBLUE_FG);
	cout << "Bright Blue:\t\t\t" << cm->format("BRIGHT BLUE TEXT") << endl;

	cm->set_fg_color(BMAGENTA_FG);
	cout << "Bright Magenta:\t\t\t" << cm->format("BRIGHT MAGENTA TEXT") << endl;

	cm->set_fg_color(BCYAN_FG);
	cout << "Bright Cyan:\t\t\t" << cm->format("BRIGHT CYAN TEXT") << endl;

	cm->set_fg_color(BWHITE_FG);
	cout << "Bright White:\t\t\t" << cm->format("BRIGHT WHITE TEXT") << endl;


	cout << "\n\tBackground Colors\n" << endl;
	cm->set_fg_color(DEFAULT_FOREGROUND);
	cm->set_bg_color(DEFAULT_BACKGROUND);
	cout << "Default:\t\t\t" << cm->format("DEFAULT BACKGROUND") << endl;

	cm->set_bg_color(BLACK_BG);
	cout << "Black:\t\t\t\t" << cm->format("BLACK BACKGROUND") << endl;

	cm->set_bg_color(RED_BG);
	cout << "Red:\t\t\t\t" << cm->format("RED BACKGROUND") << endl;

	cm->set_bg_color(GREEN_BG);
	cout << "Green:\t\t\t\t" << cm->format("GREEN BACKGROUND") << endl;

	cm->set_bg_color(YELLOW_BG);
	cout << "Yellow:\t\t\t\t" << cm->format("YELLOW BACKGROUND") << endl;

	cm->set_bg_color(BLUE_BG);
	cout << "Blue:\t\t\t\t" << cm->format("BLUE BACKGROUND") << endl;

	cm->set_bg_color(MAGENTA_BG);
	cout << "Magenta:\t\t\t" << cm->format("MAGENTA BACKGROUND") << endl;

	cm->set_bg_color(CYAN_BG);
	cout << "Cyan:\t\t\t\t" << cm->format("CYAN BACKGROUND") << endl;

	cm->set_bg_color(WHITE_BG);
	cout << "White:\t\t\t\t" << cm->format("WHITE BACKGROUND") << endl;

	cm->set_bg_color(BBLACK_BG);
	cout << "Bright Black:\t\t\t" << cm->format("BRIGHT BLACK BACKGROUND") << endl;

	cm->set_bg_color(BRED_BG);
	cout << "Bright Red:\t\t\t" << cm->format("BRIGHT RED BACKGROUND") << endl;

	cm->set_bg_color(BGREEN_BG);
	cout << "Bright Green:\t\t\t" << cm->format("BRIGHT GREEN BACKGROUND") << endl;

	cm->set_bg_color(BYELLOW_BG);
	cout << "Bright Yellow:\t\t\t" << cm->format("BRIGHT YELLOW BACKGROUND") << endl;

	cm->set_bg_color(BBLUE_BG);
	cout << "Bright Blue:\t\t\t" << cm->format("BRIGHT BLUE BACKGROUND") << endl;

	cm->set_bg_color(BMAGENTA_BG);
	cout << "Bright Magenta:\t\t\t" << cm->format("BRIGHT MAGENTA BACKGROUND") << endl;

	cm->set_bg_color(BCYAN_BG);
	cout << "Bright Cyan:\t\t\t" << cm->format("BRIGHT CYAN BACKGROUND") << endl;

	cm->set_bg_color(BWHITE_BG);
	cout << "Bright White:\t\t\t" << cm->format("BRIGHT WHITE BACKGROUND") << endl;



	cout << "\n-------------------------\n" << endl;
	cout << "Done." << endl;

	return EXIT_SUCCESS;
}
