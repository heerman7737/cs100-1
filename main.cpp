#include <iostream>
#include "course.hpp"
#include "indexitem.hpp"
#include "major.hpp"
#include <string>
#include "display.hpp"
#include "displayEverything.hpp"
using namespace std;

int main(){
	//IndexItem* get_major = computer_science();
	//get_major->print();	
	string gradeLevel;
	string major;
	cout<< "Enter grade level:";
	cin>>gradeLevel;
	cout<<endl;
	cout<<"Enter major:";
	cin>>major;
	cout<<endl;
	/*if(major.compare("Computer Science"))
		cout<< "Correct";
	else
		cout<< "Incorrect";
	*/
	Display* displayAll = new DisplayEverything(gradeLevel,major);
	displayAll->display();
	//Display* displayCompleted = new displayCompleted(gradeLevel,major);
	//Display* displayNeeded = new displayNeeded(gradeLevel,major);	
	return 0;

}
