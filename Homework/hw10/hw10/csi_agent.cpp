#include "csi_agent.h"

void CSI_Agent::visitCrimeScene(const CrimeRoom & scene) {

	//Gets m_clues from the crime scene
	forensic_data evidence = scene.getEvidence();

	//Sends the data away to be corrupted and sets m_evidence
	gatherInfo(evidence);

	//Sets the class's Forensic_Data
	m_evidence = evidence;

	return;
}



//Corrupts the Forensic_Data evidence
void CSI_Agent::gatherInfo(forensic_data & corptData) const {

	//Randomly adds a value from -2 to +2 to the hair color (within boundaries)
	corptData.m_hairColor += ((rand() % 5) - 2);

	//Keeps badData in the correct range
	if (corptData.m_hairColor > HAIR_MAX) corptData.m_hairColor = HAIR_MAX;

	else if (corptData.m_hairColor < HAIR_MIN) corptData.m_hairColor = HAIR_MIN;

	//Randomly changes DNA characters to '-'
	for (short dashesAdded = 0; dashesAdded < DASHES_TO_ADD; dashesAdded++) {

		short randomIndex = (rand() % DNA_SIZE);

		corptData.m_dna[randomIndex] = '-';
	}


	//Randomly flips cells of the Finger_Print

	for (short cellsFlipped = 0; cellsFlipped < CELLS_TO_FLIP; cellsFlipped++) {

		//Chooses a random cell
		short randI = (rand() % ARRAY_LENGTH);
		short randJ = (rand() % ARRAY_LENGTH);

		//SPACE becomes '^' and STAR becomes '_'
		if (corptData.m_print.m_array[randI][randJ] == SPACE)
			corptData.m_print.m_array[randI][randJ] = STAR;

		else corptData.m_print.m_array[randI][randJ] = SPACE;
	}


	//Randomly adds a value from -1 to 1 to the Finger_Print loops
	corptData.m_print.m_loops += ((rand() % 3) - 1);

	if (corptData.m_print.m_loops < 0)
		corptData.m_print.m_loops = 0;

	else if (corptData.m_print.m_loops > FINGER_MAX)
		corptData.m_print.m_loops = FINGER_MAX;

	//Randomly adds a value from -1 to 1 to the Finger_Print arches

	corptData.m_print.m_arches += ((rand() % 3) - 1);

	if (corptData.m_print.m_arches < 0)
		corptData.m_print.m_arches = 0;

	else if (corptData.m_print.m_arches > FINGER_MAX)
		corptData.m_print.m_arches = FINGER_MAX;

	//Randomly adds a value from -1 to 1 to the Finger_Print whirls

	corptData.m_print.m_whirls += ((rand() % 3) - 1);

	if (corptData.m_print.m_whirls < 0)
		corptData.m_print.m_whirls = 0;

	else if (corptData.m_print.m_whirls > FINGER_MAX)
		corptData.m_print.m_whirls = FINGER_MAX;

	return;

}



//Determines whether or not it is a match
bool CSI_Agent::perpSearch(const Resident & suspect) const {

	bool match = false;
	float totalScore, dnaScore, fingerPrintScore, hairScore;
	short roundedScore;

	//Makes it way easier to call these variables
	forensic_data sample = suspect.drop_evidence();

	//Calculates dnaScore
	float dnaMatch = 0;

	for (int i = 0; i < DNA_SIZE; i++)

		if (sample.m_dna[i] == m_evidence.m_dna[i])
			dnaMatch++;

	dnaScore = (static_cast<float>(dnaMatch) / DNA_SIZE);

	//Calculate hair score
	float hairDiff = (m_evidence.m_hairColor - sample.m_hairColor);

	if (hairDiff == 2 || hairDiff == (-2))
		hairScore = 0.5;

	else if (hairDiff == 1 || hairDiff == (-1))
		hairScore = 0.6;

	else if (hairDiff == 0)
		hairScore = 0.8;

	else
		hairScore = 0;

	//Counts the number of matching stars in Finger_Prints
	float starMatch = 0;

	for (short i = 0; i < ARRAY_LENGTH; i++)
	{
		for (short j = 0; j < ARRAY_LENGTH; j++)
		{
			if (sample.m_print.m_array[j][i] == STAR
				&& m_evidence.m_print.m_array[j][i] == STAR)
			{
				starMatch++;
			}

		}
	}

	//Calculates the fingerPrintScore
	fingerPrintScore = (starMatch / static_cast<float>(STAR_NUM)) * 0.7;

	float newFinger = fingerPrintScore;

	if (sample.m_print.m_loops <= (m_evidence.m_print.m_loops + 1)
		&& sample.m_print.m_loops >= (m_evidence.m_print.m_loops - 1))

		fingerPrintScore += 0.1;

	if (sample.m_print.m_arches <= (m_evidence.m_print.m_arches + 1)
		&& sample.m_print.m_arches >= (m_evidence.m_print.m_arches - 1))

		fingerPrintScore += 0.1;

	if (sample.m_print.m_whirls <= (m_evidence.m_print.m_whirls + 1)
		&& sample.m_print.m_whirls >= (m_evidence.m_print.m_whirls - 1))

		fingerPrintScore += 0.1;

	//Calculates the total score with rounding
	totalScore = ((dnaScore * 0.6) + (fingerPrintScore * 0.3) + (hairScore * 0.1));
	// roundedScore = static_cast<short>(totalScore + 0.5);

	 //Checks if a match has occurred
	if (totalScore >= 0.9)
		match = true;

	//cout<<"DNA"<<dnaScore<<endl;
	//cout<<"Hair"<<hairScore<<endl;
	//cout<<"FingerPrint"<<fingerPrintScore<<endl;
	//cout<<"Total"<<totalScore<<endl;

	return match;
}



//Operator overloader for << operator
ostream& operator << (ostream & out, const CSI_Agent & agent) {
	out << agent.m_name;

	return out;
}
