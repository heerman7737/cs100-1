#ifndef __MAJOR_HPP__
#define __MAJOR_HPP__

#include "indexitem.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Major : public IndexItem {
    private:
        string code;
        string title;
        vector<IndexItem*> courses;

    public:
        Major(string name, string title) {
                this->code = code;
                this->title = title;
        }

        virtual void print() {
                cout << code << ": " << title << endl;
                if(courses.size() == 0)
                        return;
                cout << "Required Courses:  " <<  endl;
                for(auto course : courses) {
                        course->print();
                }

        }
        void addCourse(IndexItem* item) {
               	courses.push_back(item);
        }
        void removeCourse(IndexItem* item) {
                unsigned i;
                for(unsigned i = 0; i < courses.size(); i++){
                        if(item == courses.at(i))
                                break;
                }
                courses.erase(courses.begin()+i);
        }
};

#endif //__MAJOR_HPP__

