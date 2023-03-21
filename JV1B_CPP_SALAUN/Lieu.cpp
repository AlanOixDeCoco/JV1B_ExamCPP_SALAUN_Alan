#include "Lieu.h"

Lieu::Lieu(string name, string description, int difficulty) {
	str_name = name;
	str_description = description;
	i_difficulty = difficulty;
	vi_destinations = vector<int>();
	b_hasCampement = false;
	b_canRest = false;
}

Lieu::Lieu(string name, string description, int difficulty, bool canRest) {
	str_name = name;
	str_description = description;
	i_difficulty = difficulty;
	vi_destinations = vector<int>();
	b_hasCampement = false;
	b_canRest = canRest;
}

void Lieu::AddDestination(int destinationID) {
	vi_destinations.push_back(destinationID);
}

void Lieu::AddCampement() {
	b_hasCampement = true;
	b_canRest = true;
}