#ifndef __TEST_COMPOSITE_HPP__
#define __TEST_COMPOSITE_HPP__

#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <sstream>
#include "major.hpp"
#include "course.hpp"
#include "indexitem.hpp"
#include "factory.hpp"
#include "displayEverything.hpp"
#include "displayCompleted.hpp"
#include "displayNeeded.hpp"

TEST(composite, add5) {
	IndexItem* result = new Major("ENCS","Computer Science");
	result->add(new Course("TEST01", "First Test"));
	result->add(new Course("TEST02", "Second Test"));
	result->add(new Course("TEST03", "Third Test"));
	result->add(new Course("TEST04", "Fourth Test"));
	result->add(new Course("TEST05", "Fifth Test"));
	result->print();
}
TEST(composite, add1) {
        IndexItem* result = new Major("ENCS","Computer Science");
        result->add(new Course("TEST01", "First Test"));
        result->print();
}
TEST(composite, printAndAdd) {
        IndexItem* result = new Major("ENCS","Computer Science");
        result->add(new Course("TEST01", "First Test"));
        result->add(new Course("TEST02", "Second Test"));
	result->print();
        result->add(new Course("TEST03", "Third Test"));
        result->add(new Course("TEST04", "Fourth Test"));
        result->add(new Course("TEST05", "Fifth Test"));
        result->print();
}
TEST(composite, printNothing) {
        IndexItem* result = new Major("ENCS","Computer Science");
        result->print();
}




#endif
