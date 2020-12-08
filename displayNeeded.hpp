#ifndef _DISPLAYNEEDED_HPP_
#define _DISPLAYNEEDED_HPP_
#include <string>
#include <iostream>
#include "display.hpp"
#include "factory.hpp"
using namespace std;
class DisplayNeeded: public Display{
     private:
	string gradeLevel;
	string major;
     public:
	DisplayNeeded(string gradeLevel,string major){
		this->gradeLevel= gradeLevel;
		this->major = major;
	};
	
	void display(){
		cout<<endl;
		IndexItem* result;
		Factory* factory = new Factory();
			 if(major.compare("Computer Science")==0){
                                result = new Major("ENCS","Computer Science");
                                result = factory->parse("ComputerScience.txt");
                             
                        }
                        else if(major.compare("Computer Engineering") == 0) {
                                result = new Major("ENCE","Computer Engineering");
                                result = factory->parse("ComputerEngineering.txt");
                            
                        }
                        else if(major.compare("Bioengineering") == 0) {
                                result = new Major("BIEN","Bioengineering");
                                result = factory->parse("Bioengineering.txt");
                           
                        }
                        else if(major.compare("Chemical Engineering") == 0) {
                                result = new Major("CHEN","Chemical Engineering");
                                result = factory->parse("ChemicalEngineering.txt");
                              
                        }
                        else if(major.compare("Data Science") == 0) {
                                result = new Major("ENDS","Data Science");
                                result = factory->parse("DataScience.txt");
                             
                        }
                       else if(major.compare("Electrical Engineering") == 0) {
                                result = new Major("EE","Electrical Engineering");
                                result = factory->parse("ElectricalEngineering.txt");
                             
                        }
                        else if(major.compare("Materials Science") == 0) {
                                result = new Major("MS","Materials Science");
                                result = factory->parse("MaterialScience.txt");
                           
                        }
                        else if(major.compare("Mechanical Engineering") == 0) {
                                result = new Major("ME","Mechanical Engineering");
                                result = factory->parse("MechanicalEngineering.txt");
                             
                        }
                        else if(major.compare("Environmental Engineering") == 0) {
                                result = new Major("ENEN","Environmental Engineering");
                                result = factory->parse("EnvironmentalEngineering.txt");
                             
                        }
                        else if(major.compare("Computer Science with Business Applications") == 0) {
                                result = new Major("CSBA", "Computer Science with Business Applications");
                                result = factory->parse("ComputerScienceBusinessApplications.txt");
                               
                        }
                        else{
                                cout<<"incorrect";
                        }
		cout<<"----------------------------------------------------------------------------"<<endl<<endl;

		cout<<"Courses you need: "<<endl;
		if(gradeLevel.compare("Freshman")==0){
			factory->get_year1();
			factory->get_year2();
			factory->get_year3();
			factory->get_year4();
		}
		else if(gradeLevel.compare("Sophomore")==0){
			factory->get_year2();
			factory->get_year3();
			factory->get_year4();					
		}
		else if(gradeLevel.compare("Junior")==0){
			factory->get_year3();
			factory->get_year4();
		}
		else if(gradeLevel.compare("Senior")==0){
			factory->get_year4();
		}
		else{

			cout<<"Incorrect grade level";
		}	
	}







};
#endif 
