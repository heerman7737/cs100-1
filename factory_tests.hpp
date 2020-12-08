#ifndef __TEST_FACTORY_HPP__
#define __TEST_FACTORY_HPP__

#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <sstream>
#include "major.hpp"
#include "course.hpp"
#include "indexitem.hpp"
#include "factory.hpp"
#include "displayEverything.hpp"
TEST(Parse, CS) {
	IndexItem* result = new Major("ENCS", "Computer Science");
	Factory* factory = new Factory();
	result = factory->parse("ComputerScience.txt");	
	string output = result->stringify();
	EXPECT_EQ(output, "CS010A: C++ 1//ENGL001A: English 1//ENGR001I: Engineering 1//MATH009A: Calculus 1//CS010B: C++ 2//ENGL001B: English 2//MATH009B: Calculus 1//CS011: Discrete structures//CS010C: C++ 3//MATH009C: Calculus 1//course: Breadth//CS061: Machine Org. & Assembly Lang. Prog.//CS100: Software Construction//PHYS040A: Physics 1//course: Breadth//EE120A: Logic design//CS111: Discrete structures//PHYS040B: Physics 2//course: Breadth//CS120B: Embedded Systems//PHYS040C: Physics 3//course: Breadth//CS141: Data Structures & Algorithms//CS161: Design & Architec. of Comp. Sys.//MATH010A: Multivariable Calculus//course: Breadth//CS150: Theory of Automata & Formal Language//MATH031: Applied Linear Algebra//elective: Technical//ENGR101I: Engineering 2//EE01A: Engineering elective//ENGR180W: Technical Communications//CS153: Design of Operating Systems//CS178A: Proj Seq in CSE//elective: Technical//STAT155: Probability & Statistics//course: Breadth//CS178B: Proj Seq in CSE//elective: Technical//CS152: Compiler Design//course: Breadth//elective: Technical//elective: Technical//elective: Technical//");
}

TEST(Parse, DataScience) {
        IndexItem* result = new Major("ENDS", "Data Science");
        Factory* factory = new Factory();
        result = factory->parse("DataScience.txt");
        string output = result->stringify();
        EXPECT_EQ(output,"CS010A: C++ 1//ENGL001A: English 1//MATH009A: Calculus 1//CS010B: C++ 2//ENGL001B: English 2//MATH009B: Calculus 1//course: Breadth//CS010C: C++ 3//MATH009C: Calculus 1//course: Breadth//CS100: Software Construction//MATH031: Linear Algebra//STAT100A: Introduction to Statistics//course: Breadth//MATH010A: Multivariable Calculus//CS011: Discrete Structures//STAT100B: Introduction to Statistics//course: Breadth//CS105: Data Analysis Methods//CS111: Discrete Structures//course: Breadth//STAT156A: Statistics for Data Science I//CS166: Database Management or BIG Data//STAT147: Intro Stat Computing//course: Breadth//STAT156B: Statistics for Data Science II//CS141: Interm. Data Structures & Algorithms//ENGR170: Technology, Policy, and Ethics//course: Breadth//STAT167: Intro to Data Science//elective: Technical//course: Breadth//STAT170A: Regression Analysis//elective: Technical//sequence: Application Course//ENGR180W: Technical Communications//STAT170B: Design of Experiments//elective: Technical//STAT183: Stat Consulting or Project in CS//elective: Technical//");
}

TEST(Parse, ChemicalEngineering) {
        IndexItem* result = new Major("CHEN", "Chemical Engineering");
        Factory* factory = new Factory();
        result = factory->parse("ChemicalEngineering.txt");
        string output = result->stringify();
        EXPECT_EQ(output,"CEE010: Engineering 1//CHEM001A: Chemistry 1//ENGL001A: English 1//MATH009A: Calculus 1//CHEM001B: Chemistry 2//ENGL001B: English 2//MATH009B: Calculus 1//PHYS040A: Physics 1//CHEM001C: Chemistry 3//ENGL001C: English 3//MATH009C: Calculus 1//PHYS040B: Physics 2//CHE110A: Chemical Process Analysis//CHEM008A: Organic Chemistry//MATH046: Differential Equations//PHYS040C: Physics 3//CHE110B: Chemical Process Analysis//CHEM008B: Organic chemistry//MATH010A: Multivariable Calculus//CHE100: Engineering Thermodynamics//MATH010B: Multivariable Calculus//CHEM008C: Organic Chemistry//CS010A: C++ 1//course: Breadth//BIOL005A: Biology 5//CHE114: Applied Fluid Mechanics//ENGR118: Engineering Modeling & Analysis//course: Breadth//CHE120: Mass Transfer//elective: Technical//course: Breadth//course: Breadth//CHE116: Heat Transfer//CHE130: Advanced Engr. Thermodynamics//CHE160A: Chem. & Envir. Engineering Lab//CHE122: Chemical Engineering Kinetics//CHE117: Separation Processes//CHE160B: Chemical Engineering Lab//elective: Technical//CEE158: Professional Development for Engr//CHE118: Process Dynamics and Control//CHE160C: Chemical Engineering Lab//CHE175A: Chemical Process Design//elective: Technical//CHE175B: Chemical Process Design//Elective: Technical//course: Breadth//course: Breadth//");
}
TEST(Parse, Bioengineering) {
        IndexItem* result = new Major("BIEN", "Bioengineering");
        Factory* factory = new Factory();
        result = factory->parse("Bioengineering.txt");
        string output = result->stringify();
        EXPECT_EQ(output,"BIEN001: Freshmen Seminar//CHEM001A: General Chemistry & Lab//ENGL001A: Beginning Composition//MATH009A: First Year Calculus//BIOL005A: Cell & Molecular Biology & Lab//CHEM001B: General Chemistry & Lab//ENGL001B: Intermediate Composition//MATH009B: First Year Calculus//BIOL005B: Organismal Biology//CHEM001C: General Chemistry & Lab//ENGL001C: Applied Intermediate Composition//MATH009C: First Year Calculus//BIEN010: Overview of Bioengineering//MATH046: Differential Equations//PHYS040A: Physics (Mechanics)//course: Breadth//CHEM008: Organic Chemistry//CS010A: C++ Programming I//MATH010A: Multivariable Calculus//PHYS040B: Physics (Heat/Waves/Sound)//CHEM008B: Organic Chemistry//EE001A: Engineering Circuit Analysis I & Lab//MATH010B: Multivariable Calculus//PHYS040C: Physics (Electricity/Magnetism)//BIEN101: Quantitative Biochemistry//BIEN110: Biomechanics of the Human Body//STAT155: Probability & Statitics for Engr//course: Breadth//BIEN105: Circulation Physiology//BIEN125: Biotechnology & Molecular Engr.//BIEN140A: Biomaterials//Course: Technical Elective/ Breadth//BIEN115: Quantitative Physiology//BIEN120: Biosystems & Signals Analysis//BIEN130: Bioinstrumentation//BIEN130L: Bioinstrumentation Lab//BIEN175A: Senior Design//BIEN135: Biophysics & Biothermodynamics//BIEN155: Biotechnology Lab//Elective: Technical//BIEN175B: Senior Design//Elective: Technical//course: Breadth//course: Breadth//BIEN175C: Senior Design//Elective: Technical//course: Breadth//course: Breadth//");
}

TEST(Parse, ElectricalEngineering) {
        IndexItem* result = new Major("ELEN", "Electrical Engineering");
        Factory* factory = new Factory();
        result = factory->parse("ElectricalEngineering.txt");
        string output = result->stringify();
        EXPECT_EQ(output,"CS010A: C++ 1//EE010: Intro to Electrical Engineering//ENGL001A: English 1//MATH009A: Calculus 1//CS010B: C++ 2//ENGL001B: English 2//MATH009B: Calculus 1//PHYS040A: Physics 1//CS061: Machine Org. & Assembly Lang. Prog//EE020: Linear Methodsfor Engr. Analysis//MATH009C: Calculus 1//PHYS040B: Physics 2//EE001A: Engineering Circuit Analysis I//MATH046: Differential Equations//PHYS040C: Physics 3//CHEM001A: Chemistry 1//EE001B: Engineering Circuit Analysis II//EE120A: Logic Design//MATH010A: Multivariable Calculus//course: Breadth//EE100A: Electronic Circuits//CS120B: Embedded Systems//MATH010B: Multivariable Calculus//course: Breadth//EE100B: Electronic Circuits//EE110A: Signals & Systems//EE116: Engineering Electromagnetics//course: Breadth//EE105: Model. & Simulation of Dynamic Sys//EE110B: Signals & Systems//EE114: Prob., Random Variables & Processes//course: Breadth//EE128: (Lead)//EE132: Automatic Control//EE133: Solid-State Electronics//EE141: Digital Signal Processing//EE175A: Senior Design Project//elective: Technical//course: Breadth//course: Breadth//EE175B: Senior Design Project//elective: Technical//elective: Technical//ENGR181W: Technical Communications//course: Breadth//elective: Technical//");
}

#endif
