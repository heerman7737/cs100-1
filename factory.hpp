#ifndef __FACTORY__
#define __FACTORY__
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "indexitem.hpp"
#include "course.hpp"
#include "major.hpp"
using namespace std;

class Factory{
private:
	vector<IndexItem*> year1;
	vector<IndexItem*> year2;
	vector<IndexItem*> year3;
	vector<IndexItem*> year4;

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
			if(class_amount<13){
				year1.push_back(course);
			}
			else if(class_amount>=13&&class_amount<=26){
				year2.push_back(course);	
			}
			else if(class_amount>=27 && class_amount<=38 ){
				year3.push_back(course);	
			}
			else{
				year4.push_back(course);
			}						
		}
		
		return major;
		
	};
	void get_year1(){
		cout<<"_____________________________________________________________________";
		cout<<"Year 1: "<<endl;
		for(int i =0;i<year1.size();i++){
			year1[i]->print();
			
		}
	}
	void get_year2(){
		cout<<"_____________________________________________________________________";
		cout<<"Year 2: "<<endl;
                for(int i =0;i<year2.size();i++){
                        year2[i]->print();
                        
                }

	}
	void get_year3(){
		cout<<"_____________________________________________________________________";
		cout<<"Year 3: "<<endl;
                for(int i =0;i<year1.size();i++){
                        year3[i]->print();
                       
                }

	}
	void get_year4(){
		cout<<"_____________________________________________________________________";
		cout<<"Year 4: "<<endl;
                for(int i =0;i<year4.size();i++){
                        year4[i]->print();
                     
                }

	}
	   
};
#endif
