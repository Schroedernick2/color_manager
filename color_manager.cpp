#include "color_manager.h"

namespace COLOR_HANDLER {
	color_manager::color_manager(){
		this->font_attribute = DEFAULT;
		this->fg_color = DEFAULT_FOREGROUND;
		this->bg_color = DEFAULT_BACKGROUND;
	}

	color_manager::~color_manager(){}

	int color_manager::set_bg_color(int color){
		return 0;
	}

	int color_manager::set_bg_color_rgb(int r,int g,int b){
		return 0;
	}

	int color_manager::set_fg_color(int color){
		return 0;
	}

	int color_manager::set_fg_color_rgb(int r,int g,int b){
		return 0;
	}

	int color_manager::set_font_attribute(int attribute){
		return 0;
	}
}
