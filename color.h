#ifndef COLOR_H
#define COLOR_H

#define DEFAULT     0
#define BOLD        1
#define DIM         2
#define ITALIC      3
#define UNDERLINED  4
#define REVERSE     7
#define HIDDEN      8
#define CROSSED     9

#define BLACK_FG        30
#define RED_FG          31
#define GREEN_FG        32
#define YELLOW_FG       33
#define BLUE_FG         34
#define MAGENTA_FG      35
#define CYAN_FG         36
#define WHITE_FG        37
#define BBLACK_FG       90
#define BRED_FG         91
#define BGREEN_FG       92
#define BYELLOW_FG      93
#define BBLUE_FG        94
#define BMAGENTA_FG     95
#define BCYAN_FG        96

namespace COLOR_HANDLER {

	class color_manager {
		public:
			color_manager();
			~color_manager();

		private:
			int font_attribute;
			
	};

}

#endif
