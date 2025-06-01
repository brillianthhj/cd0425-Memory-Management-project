# CPPND: Memory Management Chatbot

This is the project for the Memory Management course in the Udacity C++ Nanodegree Program.

# Introduction
* The ChatBot code creates a dialogue where users can ask questions about some aspects of memory management in C++ via a terminal. 
* After the knowledge base of the chatbot has been loaded from a text file, a knowledge graph representation is created in computer memory, where chatbot answers represent the graph nodes and user queries represent the graph edges. 
* After a user query has been sent to the chatbot, the Levenshtein distance is used to identify the most probable answer. The code is fully functional as-is and uses raw pointers to represent the knowledge graph and interconnections between objects throughout the project.


# High-level Objectives
> [!IMPORTANT]  
> **Your goal is to use the course knowledge to optimize the ChatBot program from a memory management perspective, as specified in the Project Rubric.**

In this project you will analyze and modify the program. Although the program can be executed and works as intended, no advanced concepts as discussed in this course have been used; there are currently no smart pointers, no move semantics and not much thought has been given to ownership or memory allocation.

See the Project Rubric for a full list of requirements.

# Project Setup
## 1. Install Dependencies
> [!NOTE]  
> If you're using Udacity Workspace, these are already installed

* cmake >= 3.11
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* wxWidgets >= 3.0
  * Linux: `sudo apt-get install libwxgtk3.0-gtk3-dev`
  * Mac: There is a [homebrew installation available](https://formulae.brew.sh/formula/wxmac).
  * Installation instructions can be found [here](https://wiki.wxwidgets.org/Install). Some version numbers may need to be changed in instructions to install v3.0 or greater.

## 2. Build, Compile, and Run
In the top level directory of this project, run the following to build, compile and run:

`mkdir build && cd build && cmake .. && make && ./membot`