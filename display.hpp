#ifndef _DISPLAY_HPP
#define _DISPLAY_HPP

#include "indexitem.hpp"
class IndexItem;
class Display {
     public:
	Display(){};

	virtual void display(IndexItem* item) = 0;

};

#endif
