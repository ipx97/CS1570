/*
Programmer: Ian Piskulic      Date: 4/17/2015
File: room.h                 Section: B
Purpose: To find a match of DNA from the samples with the
dead cow.
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cstring>
#include <fstream>
#include "res.h"

using namespace std;

#ifndef ROOM_H
#define ROOM_H

//Class
class crime_room {
	bool m_murderCommitted;
	int m_hair;
	string m_deadGuy;
public:
	crime_room();
	void meeting(resident & a, resident & b);
	bool murder();
	void check_room();
};

#endif
