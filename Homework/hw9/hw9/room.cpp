#include "room.h"
#include "res.h"

crime_room::crime_room() {
	m_murderCommitted = false;
	m_deadGuy = "";
	m_hair = 0;
}

void crime_room::meeting(resident & a, resident & b) {
	if (murder()) {
		m_murderCommitted = true;
		if (rand() % 2) {
			m_deadGuy = a.m_name;
			m_hair = a.m_hair;
			a.m_isAlive = false;
			b.m_isMurderer = true;
		}
		else {
			m_deadGuy = b.m_name;
			m_hair = b.m_hair;
			b.m_isAlive = false;
			a.m_isMurderer = true;
		}
	}
	return;
}

bool crime_room::murder() {
	if (rand() % 2)
		return true;
	else
		return false;
}

void crime_room::check_room() {
	if (m_murderCommitted)
		cout << m_deadGuy << " has been murdered!!!\n";
	return;
}
