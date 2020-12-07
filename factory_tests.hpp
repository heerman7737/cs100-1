#ifndef __TEST_FACTORY_HPP__
#define __TEST_FACTORY_HPP__

#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include "major.hpp"
#include "course.hpp"
#include "indexitem.hpp"
#include "factory.hpp"
#include "displayEverything.hpp"
TEST(Parse, CS) {
	IndexItem* result = new Major("ENDS", "Data Science");
	Factory* factory = new Factory();
	result = factory->parse("dummy1.txt");
		
	stringstream buffer;
	streambuf* old = cout.rdbuf(buffer.rdbuf());
	result->print();
	string output = buffer.str();
	EXPECT_EQ(output, "WRONGANS");
}

#endif
