#ifndef __COURSE_HPP__
#define __COURSE_HPP__

#include "indexitem.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Course : public IndexItem {    
    private:
        string code;
        string title;
        vector<IndexItem*> prerequisiteCourses;

    public:
	Course(string code, string title) {
		this->code = code;
		this->title = title;
	}

        virtual void print() {
		cout << code << ": " << title << endl;
		if(prerequisiteCourses.size() == 0)
			return;
		cout << "Prerequisites: " <<  endl;
		for(auto courses : prerequisiteCourses) {
			courses->print();
		}
		
	}
	void addCourse(IndexItem* item) {
		prerequisiteCourses.push_back(item);
	}
	void removeCourse(IndexItem* item) {
		unsigned i;
		for(unsigned i = 0; i < prerequisiteCourses.size(); i++){
			if(item == prerequisiteCourses.at(i))
				break;
		}
		prerequisiteCourses.erase(prerequisiteCourses.begin()+i);
	}
};

#endif //_Course_HPP_
