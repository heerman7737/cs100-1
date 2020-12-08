#ifndef __INDEXITEM_HPP__
#define __INDEXITEM_HPP__

#include <string>
#include <vector>
#include "display.hpp"

using namespace std;
class Display;
class IndexItem {
    public:
	string code;
	string title;
	vector<IndexItem*> courses;
	Display* display_function;
    public:
        /* Constructors */
        IndexItem(){};
	IndexItem(string code,string title){};
        /* Pure Virtual Functions */
        virtual void  print() = 0;
	virtual string stringify() = 0;
	virtual void add(IndexItem* index) {};
	virtual void remove(IndexItem* index){};
	virtual void set_display(Display* function){};
	virtual Display* get_display(){};
};

#endif //__INDEXITEM_HPP__
