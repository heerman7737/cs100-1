#ifndef __TEST_STRATEGY_HPP__
#define __TEST_STRATEGY_HPP__

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
TEST(Display, displayEverythingFreshmen) {
        IndexItem* result = new Major();
        result->set_display(new DisplayEverything("Freshmen","Computer Science"));
        result->get_display()->display();
}
TEST(Display, displayCompletedFreshmen) {
        IndexItem* result = new Major();
        result->set_display(new DisplayCompleted("Freshmen","Computer Science"));
        result->get_display()->display();
}
TEST(Display, displayNeededFreshmen) {
        IndexItem* result = new Major();
        result->set_display(new DisplayNeeded("Freshmen","Computer Science"));
        result->get_display()->display();
}
TEST(Display, displayEverythingSenior) {
        IndexItem* result = new Major();
        result->set_display(new DisplayEverything("Senior","Computer Science"));
        result->get_display()->display();
}
TEST(Display, displayCompletedSenior) {
        IndexItem* result = new Major();
        result->set_display(new DisplayCompleted("Senior","Computer Science"));
        result->get_display()->display();
}
TEST(Display, displayNeededSenior) {
        IndexItem* result = new Major();
        result->set_display(new DisplayNeeded("Senior","Computer Science"));
        result->get_display()->display();
}

#endif

