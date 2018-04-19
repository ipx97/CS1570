/*
Programmer: Ian Piskulic      Date: 4/25/2015
File: csi_agent.h                 Section: B
Purpose: Creates a CSI agent for a crime
*/

#include <iostream>
#include "room.h"
#include "forensics.h"

using namespace std;

#ifndef CSI_AGENT_H
#define CSI_AGENT_H

//Class Constants
const short DASHES_TO_ADD = 15;
const short CELLS_TO_FLIP = 5;
const short SCORE_MIN = 90;

class CSI_Agent{
  
  public:
    //default constructor of agent
    CSI_Agent (const string name) : m_name(name) {}
    void visitCrimeScene (const CrimeRoom & scene);
    //Description:
    //Pre:
    //Post:
    bool perpSearch (const Resident & suspect) const;
    //Description:
    //Pre:
    //Post:
    friend ostream & operator << (ostream & out, const CSI_Agent & agent);
    
  private:
    void gatherInfo (forensic_data & corptData) const;
    string m_name;
    forensic_data m_evidence;
};

#endif
