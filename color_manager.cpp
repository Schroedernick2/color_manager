#include "color_manager.h"
#include <cstdlib>

namespace COLOR_HANDLER {
	color_manager::color_manager(){
		this->font_attributes = (int*)malloc(MAX_ATTR*sizeof(int));
		this->attribute_count = 0;
		this->fg_color = DEFAULT_FOREGROUND;
		this->bg_color = DEFAULT_BACKGROUND;
	}

	color_manager::~color_manager(){
		delete this->font_attributes;
	}

	int color_manager::set_bg_color(int color){
		if((color > MIN_BG && color < MAX_BG) || (color > MIN_BBG && color < MAX_BBG)){
			this->bg_color = color;
			return 0;
		}

		return COLOR_OUT_OF_RANGE;
	}

	int color_manager::set_bg_color_rgb(int r,int g,int b){
		return 0;
	}

	int color_manager::set_fg_color(int color){
		if((color > MIN_BG && color < MAX_BG) || (color > MIN_BBG && color < MAX_BBG)){
			this->bg_color = color;
			return 0;
		}

		return COLOR_OUT_OF_RANGE;
	}

	int color_manager::set_fg_color_rgb(int r,int g,int b){
		return 0;
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

