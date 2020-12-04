#ifndef _DISPLAYEVERYTHING_HPP_
#define _DISPLAYEVERYTHING_HPP_
#include <string>
#include "display.hpp"

#include "factory.hpp"
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
			cout<<endl;
			cout<<endl;	
			cout<<"Display all major requirement:"<<endl<<endl;	
			IndexItem* result;
			Factory* factory = new Factory();
	    		if(major.compare("Computer Science")==0){
				result = new Major("CS","Computer Science");	
				result = factory->parse("dummy1.txt");
				result->print();
			}
			else{
				cout<<"incorrect";
			}
		}



};
#endif
