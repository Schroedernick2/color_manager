#ifndef COLORS_H
#define COLORS_H

/******FONT ATTRIBUTES******/

#define DEFAULT     0
#define BOLD        1
#define DIM         2
#define ITALIC      3
#define UNDERLINED  4
#define REVERSE     7
#define HIDDEN      8
#define CROSSED     9

/***************************/
/*****FOREGROUND COLORS*****/

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
#define BWHITE_FG       97

/***************************/
/*****BACKGROUND COLORS*****/

#define BLACK_BG        40
#define RED_BG          41
#define GREEN_BG        42
#define YELLOW_BG       43
#define BLUE_BG         44
#define MAGENTA_BG      45
#define CYAN_BG         46
#define WHITE_BG        47
#define BBLACK_BG       100
#define BRED_BG         101
#define BGREEN_BG       102
#define BYELLOW_BG      103
#define BBLUE_BG        104
#define BMAGENTA_BG     105
#define BCYAN_BG        106
#define BWHITE_BG       107

/***************************/
/******DEFAULT VALUES*******/

#define DEFAULT_FOREGROUND      39
#define DEFAULT_BACKGROUND      49

/***************************/
/********BOUNDARIES*********/

#define MIN_FG      30
#define MAX_FG      37
#define MIN_BFG     90
#define MAX_BFG     97

#define MIN_BG      40
#define MAX_BG      47
#define MIN_BBG     100
#define MAX_BBG     107

#define MIN_ATTR    0
#define MAX_ATTR    9

/***************************/

#endif

