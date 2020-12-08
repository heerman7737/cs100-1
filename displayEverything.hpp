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
				result = new Major("ENCS","Computer Science");	
				result = factory->parse("ComputerScience.txt");
				result->print();
			}
			else if(major.compare("Computer Engineering") == 0) {
				result = new Major("ENCE","Computer Engineering");
				result = factory->parse("ComputerEngineering.txt");
				result->print();
			}
			else if(major.compare("Bioengineering") == 0) {
				result = new Major("BIEN","Bioengineering");
				result = factory->parse("Bioengineering.txt");
				result->print();
			}
			else if(major.compare("Chemical Engineering") == 0) {
				result = new Major("CHEN","Chemical Engineering");
				result = factory->parse("ChemicalEngineering.txt");
				result->print();
			}
			else if(major.compare("Data Science") == 0) {
				result = new Major("ENDS","Data Science");
				result = factory->parse("DataScience.txt");
				result->print();
			}
			else if(major.compare("Electrical Engineering") == 0) {
				result = new Major("EE","Electrical Engineering");
				result = factory->parse("ElectricalEngineering.txt");
				result->print();
			}
			else if(major.compare("Materials Science") == 0) {
				result = new Major("MS","Materials Science");
				result = factory->parse("MaterialScience.txt");
				result->print();
			}
			else if(major.compare("Mechanical Engineering") == 0) {
				result = new Major("ME","Mechanical Engineering");
				result = factory->parse("MechanicalEngineering.txt");
				result->print();
			}
			else if(major.compare("Environmental Engineering") == 0) {
				result = new Major("ENEN","Environmental Engineering");
				result = factory->parse("EnvironmentalEngineering.txt");
				result->print();
			}
			else if(major.compare("Computer Science with Business Applications") == 0) {
				result = new Major("CSBA", "Computer Science with Business Applications");
				result = factory->parse("ComputerScienceBusinessApplications.txt");
				result->print();
			}			
			else{
				cout<<"incorrect";
			}
		}



};
#endif
