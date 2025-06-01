# CPPND: Memory Management Chatbot

This is the project for the Memory Management course in the Udacity C++ Nanodegree Program.

# Introduction
* The ChatBot code creates a dialogue where users can ask questions about some aspects of memory management in C++ via a terminal. 
* After the knowledge base of the chatbot has been loaded from a text file, a knowledge graph representation is created in computer memory, where chatbot answers represent the graph nodes and user queries represent the graph edges. 
* After a user query has been sent to the chatbot, the Levenshtein distance is used to identify the most probable answer. The code is fully functional as-is and uses raw pointers to represent the knowledge graph and interconnections between objects throughout the project.


# High-level Objectives
> [!IMPORTANT]  
> _See the Project Rubric for a full list of requirements._

In this project, you'll apply your skills to: 
1. **Analyze problems**, and
2. **Then modify the program** using the advanced concepts taught in this course

**To complete the project:** 
1. **Find each `TODO`** located in the project's files. `TODO`s are located either:
    - To the side, if the fix is for a single line of code
    - Above the code, if the fix is for multiple lines of code. These also have a `END OF TODO` comment at the end of the relevant blocks of code.
3. **Analyze the relevant code to determine what needs to be fixed**
    - Generally, the `TODO`s don't provide instructions or guidance. This is so you can practice identifying and implementing appropriate fixes.
4. **Implement the appropriate fix**
    - Your fixes need to use the advanced concepts taught in this course

# Project Setup
## 1. Install Dependencies
> [!NOTE]  
> If you're using Udacity Workspace, these dependencies are already installed

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
