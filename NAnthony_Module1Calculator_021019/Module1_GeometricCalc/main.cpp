/* 
Author: Nicholas Anthony
Date: 2/10/2019
FileName: main.cpp
Purpose: Demonstrates how to make your first program in C++.
Input: None.
Output: C++ example code that uses cout to output literal strings to the monitor or display, shows how to create a new line with endl and \n, illustrates the use of // and /* comments, explains literal strings and string variables, and what return 0 means at the end of a program.
Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip> // Include this to custom format cout output
using namespace std;


int main(int argc, char** argv) {
    
    int s1; int s2; int Area1;
    s1 = 3; 
    s2 = 4; 
    Area1 = 0;
    
    Area1 = 0.5*(s1*s2);
            
    cout<<"The sides of the triangle measure "<<s1<<" and "<<s2<<". The area is "<<Area1<<"."<<endl;

    double s3; double s4; double Area2;
    s3 = 0.0;
    s4 = 0.0;
    Area2 = 0.0;
    
    s3 = s1 * 5;
    s4 = s2 * 5;
    Area2 = 0.5 * (s3 * s4);
    
    cout<<fixed<<setprecision(1)<<"The sides of the triangle measure "<<s3<<" and "<<s4<<". The area is "<<Area2<<"."<<endl;

    return 0;
}

