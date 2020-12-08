#ifndef __COURSE_HPP__
#define __COURSE_HPP__

#include "indexitem.hpp"


using namespace std;
class Course : public IndexItem {    
    private:
        string code;
        string title;
    public:
	Course(string code, string title) {
		this->code = code;
		this->title = title;
	}

        void print() {
		cout << code << ": " << title << endl;
		
	}
	string stringify() {
		return code + ": " + title + "//";
	}
};

#endif //_Course_HPP_
