/*
Programmer: Ian Piskulic      Date: 4/26/2015
File: hw10.h                 Section: B
Purpose: The main functions of the driver
*/

#include <iostream>
#include <string>
#include "forensics.h"
#include "res.h"
#include "room.h"
#include "judicial.h"
#include "csi_agent.h"

using namespace std;

#ifndef HW10_H
#define HW10_H

//Prototypes

//Description: outputs a greeting message to the user
//Pre: none
//Post: sends a goodbye message to the user
void greeting();
//Description: runs through the meetings between residents
//Pre: takes in the crime room and a list of residents
//Post: outputs if a murder happened or not and who died
void encounters(Resident res[], CrimeRoom & room);
//Description: counts all the residents that are alive
//Pre: the array of residents
//Post: the number of living residents
int resCount(Resident res[]);
//Description: attempts to find the killer
//Pre: sends an agent, judge, array of residents(suspects),
//     and a murder scene
//Post: outputs who the murderer was if found
void investigation(CSI_Agent & agent, Resident res[],
  const CrimeRoom & room, Judicial & judge);
//Description: outputs if the last person alive (if any)
//Pre: takes in the array of residents
//Post: outputs who the last resident alive is or if there
//      are no residents alive
void ending(Resident res[]);
//Description: sends a signoff message to the console
//Pre: none
//Post: outputs a goodbye message to the user
void signoff();


//Constants
const int RES_NUM = 25;
const int VISITS_MAX = 10;

#endif
