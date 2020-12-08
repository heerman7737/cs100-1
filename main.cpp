#include <iostream>
#include "course.hpp"
#include "indexitem.hpp"
#include "major.hpp"
#include <string>
#include "display.hpp"
#include "displayEverything.hpp"
#include "factory.hpp"

using namespace std;

int main(){
	//Factory* factory = new Factory();
	//factory->parse("dummy1.txt");
	//IndexItem* get_major = computer_science();
	//get_major->print();	
	string gradeLevel;
	string major;
	cout<< "Enter grade level:";
	getline(cin,gradeLevel);
	cout<<endl;
	cout<<"Enter major:";
	getline(cin,major);
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<major;
	cout<<endl;
	IndexItem* result = new Major();
	result->set_display(new DisplayEverything(gradeLevel,major));
	
	result->get_display()->display();		
	//Display* displayAll = new DisplayEverything(gradeLevel,major);
	//displayAll->display();
	//Display* displayCompleted = new DisplayCompleted(gradeLevel,major);
	//displayCompleted->display();
	//Display* displayNeeded = new displayNeeded(gradeLevel,major);	
	return 0;

}
