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
	IndexItem* result = new Major("ENDS", "Computer Science");
	Factory* factory = new Factory();
	result = factory->parse("ComputerScience.txt");
	
	
	result->print();
	EXPECT_EQ(output, );
}

#endif
