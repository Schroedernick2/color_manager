#include "color_manager.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

namespace COLOR_HANDLER {
	color_manager::color_manager(){
		this->font_attributes = (int*)malloc(MAX_ATTR*sizeof(int));
		this->attribute_count = 0;
		this->fg_color = DEFAULT_FOREGROUND;
		this->bg_color = DEFAULT_BACKGROUND;

		this->rgb_set = false;
		this->r = 0;
		this->g = 0;
		this->b = 0;
	}

	color_manager::~color_manager(){
		delete this->font_attributes;
	}

	string color_manager::print(string content){
		string str_content = "\033[";

		if(this->attribute_count > 0){
			for(int i=0;i<this->attribute_count;i++){
				str_content += to_string(this->font_attributes[i])+";";
			}
		}
		else
			str_content += DEFAULT+";";

		str_content += to_string(this->fg_color)+";"+to_string(this->bg_color)+'m';
		str_content += content;
		str_content += "\033[0;m";

		return str_content;
	}

	void color_manager::set_default_color(){
		this->fg_color = DEFAULT_FOREGROUND;
		this->bg_color = DEFAULT_BACKGROUND;

		this->rgb_set = false;
	}

	int color_manager::set_bg_color(int color){
		if((color >= MIN_BG && color <= MAX_BG) || (color >= MIN_BBG && color <= MAX_BBG)){
			this->bg_color = color;
			this->rgb_set = false;

			return 0;
		}

		return COLOR_OUT_OF_RANGE;
	}

	int color_manager::set_bg_color_rgb(int r,int g,int b){
		if((r < MIN_RGB || r > MAX_RGB) || (g < MIN_RGB || g > MAX_RGB) || (b < MIN_RGB || b > MAX_RGB))
			return COLOR_OUT_OF_RANGE;

		this->r = r;
		this->g = g;
		this->b = b;

		this->rgb_set = true;

		return 0;
	}

	int color_manager::set_fg_color_rgb(int r,int g,int b){
		if((r < MIN_RGB || r > MAX_RGB) || (g < MIN_RGB || g > MAX_RGB) || (b < MIN_RGB || b > MAX_RGB))
			return COLOR_OUT_OF_RANGE;

		this->r = r;
		this->g = g;
		this->b = b;

		this->rgb_set = true;

		return 0;
	}

	int color_manager::set_fg_color(int color){
		if((color >= MIN_FG && color <= MAX_FG) || (color >= MIN_BFG && color <= MAX_BFG)){
			this->fg_color = color;
			this->rgb_set = false;

			return 0;
		}

		return COLOR_OUT_OF_RANGE;
	}

	int color_manager::set_attributes(int* attributes,int size){
		for(int i=0;i<size;i++){
			if(attributes[i] < MIN_ATTR || attributes[i] > MAX_ATTR || attributes[i] == 5 || attributes[i] == 6)
				return ATTRIBUTE_OUT_OF_RANGE;
		}

		this->attribute_count = size;

		for(int i=0;i<size;i++)
			this->font_attributes[i] = attributes[i];

		return 0;
	}

	void color_manager::clear_attributes(){
		this->font_attributes = NULL;
		this->attribute_count = 0;
	}

	int color_manager::set_attribute(int attribute){
		if(attribute < MIN_ATTR || attribute > MAX_ATTR || attribute == 5 || attribute == 6)
			return ATTRIBUTE_OUT_OF_RANGE;

		for(int i=0;i<this->attribute_count;i++){
			if(this->font_attributes[i] == attribute)
				return 0;
		}

		this->font_attributes[this->attribute_count] = attribute;
		this->attribute_count++;

		return 0;
	}

	int color_manager::remove_attribute(int attribute){
		if(attribute < MIN_ATTR || attribute > MAX_ATTR || attribute == 5 || attribute == 6)
			return ATTRIBUTE_OUT_OF_RANGE;

		for(int i=0;i<this->attribute_count;i++){
			if(this->font_attributes[i] == attribute){
				this->font_attributes[i] = this->font_attributes[this->attribute_count];
				this->attribute_count--;

				return 0;
			}
		}

		return ATTRIBUTE_NOT_FOUND;
	}
}

