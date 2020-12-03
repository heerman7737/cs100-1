#ifndef _DISPLAYEVERYTHING_HPP_
#define _DISPLAYEVERYTHING_HPP_
#include <string>
#include "display.hpp"
#include "collection.cpp"
using namespace std;
class DisplayEverything: public Display{
	private:
		string major;
		string gradeLevel;
	public:
		DisplayEverything(string gradeLevel,string major){
			this->gradeLevel= gradeLevel;
			this->major = major;
		};
		void display(){
		
		
			IndexItem* result = new Major();
			cout<<major;	
	    		if(major.compare("Computer Science")!=0){
				
				result = computer_science();
				result->print();
			}
			else{
			cout<<"incorrect";
			}
		}



};
#endif
