#ifndef __FACTORY__
#define __FACTORY__
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "indexitem.hpp"
using namespace std;
class Factory{
private:
	IndexItem* cs;
	// adding more major

public:
	IndexItem* parse(string filename){
		ifstream myfile(filename);
		string code;
		string title;
		string skip; //dummy
		
		IndexItem* major = new Major();
		int class_amount = 0;
		while(getline(getline(myfile,skip,'"'),title,'"')>>code){
			
			IndexItem* course = new Course(code,title);
			major->add(course);
			class_amount++;					
		}
		cout<< class_amount;
		return major;
		
	};    
};
#endif
