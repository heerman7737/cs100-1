#ifndef __INDEXITEM_HPP__
#define __INDEXITEM_HPP__

#include <string>
#include <vector>
using namespace std;
class IndexItem {
    public:
	string code;
	string title;
	vector<IndexItem*> courses;
    public:
        /* Constructors */
        IndexItem(){};
	IndexItem(string code,string title){};
        /* Pure Virtual Functions */
        virtual void  print() = 0;
	virtual void add(IndexItem* index) {};
	virtual void remove(IndexItem* index){};
};

#endif //__INDEXITEM_HPP__
