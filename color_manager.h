#ifndef COLOR_MANAGER_H
#define COLOR_MANAGER_H

#include "colors.h"

#define COLOR_OUT_OF_RANGE          -1
#define ATTRIBUTE_OUT_OF_RANGE	    -2
#define ATTRIBUTE_NOT_FOUND         -3

namespace COLOR_HANDLER {

	class color_manager {
		public:
			color_manager();
			~color_manager();

			int set_bg_color(int color);
			int set_bg_color_rgb(int r,int g,int b);
			int set_fg_color(int color);
			int set_fg_color_rgb(int r,int g,int b);	

			int set_attributes(int* attributes,int size);
			void clear_attributes();

			int set_attribute(int attribute);
			int remove_attribute(int attribute);

		private:
			int* font_attributes;
			int attribute_count;
			int fg_color;
			int bg_color;
	};

}

#endif
