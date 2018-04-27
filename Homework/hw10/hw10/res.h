/*
Programmer: Ian Piskulic      Date: 4/25/2015
File: res.h                 Section: B
Purpose: To make a list of residents
*/

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include <cstring>
#include <fstream>
#include "forensics.h"

using namespace std;

#ifndef RES_H
#define RES_H

class Resident {
public:
	string m_name;
	bool m_isAlive, m_isMurderer;
	forensic_data m_data;
	//Default constructor
	Resident();
	//Description:Gets the name
	//Pre:none
	//Post:returns name
	string getName() const { return m_name; }
	//Description:makes copy of data
	//Pre:none
	//Post:returns a data variable
	forensic_data drop_evidence() const { return m_data; }
	//Description:sets the alive member to false
	//Pre:none
	//Post:member is false
	void kill_me();
	//Description:checks if the resident is alive
	//Pre:none
	//Post:returns a bool
	bool checkDead() { return m_isAlive; }
	//output operator for resident
	friend ostream &operator << (ostream &out, Resident &res);
};

#endif