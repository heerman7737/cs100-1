# Course planner
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: \<[Giang To](https://github.com/heerman7737) , [Ishika Rakesh](https://github.com/rakishika) , [Ryan Chandler](https://github.com/rrchandler)\>
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What will be the input/output of your project?
 > * What are the three design patterns you will be using. For each design pattern you must:
 >   * Explain in 3 - 5 sentences why you picked this pattern and what feature you will implement with it
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

**Motivation and Reason: In the current pandemic, it is hard and inconvenient to figure out what class you should take in order to graduate. That's the reason why we want to implement this project as a Course Planner**


**Language : C++**


**Tools: Github, Google Test Frame, MongoDB**


Input: Grade Level, Major, Quarter 
> Sophomore, Computer Science, Fall 2020 
>
Output:
> * Course should have completed: N/A
>
> * Course should do :
>
| Fall 2020  | Winter 2021 | Spring 2021 |
| ------------- | ------------- | ------------- |
| CS 100  | CS 111  | CS 160  |
| CS 120A  | CS 130  | CS 130 |
| CS 61   | CS 170 | CS 141    |
| ENGR 180 |        |          |

**Design Pattern:**
>
Strategy: We will use strategy pattern to design the Course class whether the instance of the object is optional or mandatory. If the Course is optional, we will use the Optional Strategy object. For example, we will be able to apply various strategies and sorting mechanisms for helping us sort through all of the courses stored into the database, in the construction of an algorithm that sorts based off of a courses prerequisites. This helps us reduce the work in handling database as well as shifting through the major requirements.
>
Composite: Using Composite Design Pattern, we will design the Major class to have Course class which will have different variables and instance. This will be useful for when we store several lists of courses, depending on the major inside of a tree. This means we will be able to use the Course class itself to help go through the  other objects within that same list its in. For example, when storing from the Database file, we will be able to compose a Course tree using the composite design pattern.
>
Interator: Using Observer Design Pattern, we will be able to go through the aforementioned tree list in order to get the courses that the user requests. The iterator will be useful because we will be able to choose any point within the list and go until the courses for that particular year are all gotten by the program. For example, when the user requests a year and major, we can start at the first course for that year, and go through the memory locations until we reach the number of courses that we end at. Using the iterator design pattern, we should be able to get the efficiency of making a course plan to at most O(n).
>
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
