#ifndef COLOR_MANAGER_H
#define COLOR_MANAGER_H

#include "colors.h"

namespace COLOR_HANDLER {

	class color_manager {
		public:
			color_manager();
			~color_manager();

			int set_bg_color(int color);
			int set_bg_color_rgb(int r,int g,int b);
			int set_fg_color(int color);
			int set_fg_color_rgb(int r,int g,int b);			
			int set_font_attribute(int attribute);

		private:
			int font_attribute;
			int fg_color;
			int bg_color;
			
	};

}

#endif
