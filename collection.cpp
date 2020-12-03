#include "indexitem.hpp"
#include "major.hpp"
#include "course.hpp"


IndexItem* computer_science(){
        IndexItem* cs010a = new Course("CS010A","C++ 1");
        IndexItem* cs010b = new Course("CS010B","C++ 2");
	IndexItem* cs100 = new Course("CS100","Software Engineering");
        IndexItem* cs = new Major("CS","Computer Science");
        cs->add(cs010a);
        cs->add(cs010b);
	cs->add(cs100);
        return cs;


}

