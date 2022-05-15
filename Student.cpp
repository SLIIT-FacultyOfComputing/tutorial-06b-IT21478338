#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int inputID, char inputName[]) {
  strcpy(name,inputName);
  studentId = inputID; 
}

// Display StudentId and Name
void Student::display() {
  cout << "Name : " << name << endl << "Student ID :" << studentId
  << endl;
}