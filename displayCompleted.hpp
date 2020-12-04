#ifndef _DISPLAYCOMPLETED_HPP_
#define _DISPLAYCOMPLETED_HPP_
#include <string>
#include <iostream>
#include "display.hpp"
using namespace std;
class DisplayCompleted: public Display{
     private:
	string gradeLevel;
	string major;
     public:
	DisplayCompleted(string gradeLevel,string major){
		this->gradeLevel= gradeLevel;
		this->major = major;
	};
	void display(IndexItem* item){
		cout<<"Courses you should have completed: "
		if(gradeLevel.compare("Freshman")==0){
			cout<<"N/A";
		}
		else if(gradeLevel.compare("Sophomore")==0){
				
		}	
	}







};
#endif 
