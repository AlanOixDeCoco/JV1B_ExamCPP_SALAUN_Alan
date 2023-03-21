#pragma once

#include <string>
#include <vector>

using namespace std;

class Lieu {
private:
	string str_name;
	string str_description;
	int i_difficulty;
	vector<int> vi_destinations;
	bool b_hasCampement;
	bool b_canRest;

public:
	// Constructor / destructor
	Lieu(string name, string description, int difficulty);
	Lieu(string name, string description, int difficulty, bool canRest);
	Lieu() {};
	~Lieu() {};

	void AddDestination(int destinationID);
	void AddCampement();
	
	string getName() { return str_name; };
	string getDescription() { return str_description; };
	vector<int> getDestinations() { return vi_destinations; };
	int getDifficulty() { return i_difficulty; };
	bool getCampement() { return b_hasCampement; };
	bool getRest() { return b_canRest; };
};