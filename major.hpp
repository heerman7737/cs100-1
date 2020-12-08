#ifndef __MAJOR_HPP__
#define __MAJOR_HPP__

#include "indexitem.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "display.hpp"
using namespace std;
class Display;
class Major : public IndexItem {
    private:
        string code;
        string title;
        vector<IndexItem*> courses;
	Display* display_function;
    public:
	Major(){};
        Major(string code, string title) {
                this->code = code;
                this->title = title;
        }

        void print() {
                
                if(courses.size() == 0)
                        cerr<< "Error getting courses";
         
                for(auto course : courses) {
                        course->print();
                }
		cout<<courses.size();

        }
        void add(IndexItem* item) {
               	courses.push_back(item);
        }
	
	string stringify() {
		string ans = "";
		for(auto course :courses) {
			ans += course->stringify();
		}
		return ans;
	}
	void set_display(Display* function){
		this->display_function = function;	
	}
	Display* get_display(){
		return display_function;
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

