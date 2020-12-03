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
	Major(){};
        Major(string code, string title) {
                this->code = code;
                this->title = title;
        }

        void print() {
                cout << code << ": " << title << endl;
                if(courses.size() == 0)
                        cerr<< "Error getting courses";
                cout << "Required Courses:  " <<  endl;
                for(auto course : courses) {
                        course->print();
                }
		cout<<courses.size();

        }
        void add(IndexItem* item) {
               	courses.push_back(item);
        }
        /*void remove(IndexItem* item) {
		int i =0;
		bool found = false;
		while(!found){
			if(item->code==courses[i]->code){
				found = true;
				courses.erase(courses.begin()+i);
			}
			i++;
		}
		
        }
	*/
};

#endif //__MAJOR_HPP__

