#ifndef COLOR_H
#define COLOR_H

#define BLACK(X)	"\033[9;30m" X "\033[0m"
#define RED(X)		"\033[1;31m" X "\033[0m"
#define GREEN(X)	"\033[1;32m" X "\033[0m"
#define YELLOW(X)	"\033[1;33m" X "\033[0m"
#define BLUE(X)		"\033[1;34m" X "\033[0m"
#define MAGENTA(X)	"\033[1;35m" X "\033[0m"
#define CYAN(X)		"\033[1;36m" X "\033[0m"
#define WHITE(X)	"\033[1;37m" X "\033[0m"

#define DEFAULT		0
#define BOLD		1
#define DIM			2
#define ITALIC		3
#define UNDERLINED	4
#define REVERSE		7
#define HIDDEN		8
#define CROSSED		9

namespace COLOR_HANDLER {

	class color_manager {
		public:
			color_manager();
			~color_manager();

		private:
			int attribute;
	};

}

#endif
