#include <iostream>
#include <fstream>

#include "Lieu.h"

#define	DIFFICULTY_LEVEL	10
#define	REST_AMOUNT			50

using namespace std;

// === Exercice 1 ===
//int main() {
//	cout << "Choisissez une destination parmi les 2 proposees :\n"
//		<< "- [1] Guichen\n"
//		<< "- [2] Bruz" << endl;
//
//	int input = 0;
//	cout << ">> ";
//	cin >> input;
//
//	// l'emploi d'un switch ici permet une meilleure lisibilité du code
//	switch (input) {
//	case 1:
//		cout << "Vous avez atteint Guichen !" << endl;
//		break;
//	case 2:
//		cout << "Vous avez atteint Bruz !" << endl;
//		break;
//	default:
//		cout << "Cette destination n'existe pas !" << endl;
//		break;
//	}
//	return 0;
//}

//// === Exercice 2 ===
//int main() {
//	cout << "Choisissez une destination parmi les 2 proposees :\n"
//		<< "- Guichen\n"
//		<< "- Bruz" << endl;
//
//	string input = "";
//	cout << ">> ";
//	cin >> input;
//
//	// malheureusement on ne peut pas réaliser un switch sur une chaine de caractères
//	if (input == "Guichen") {
//		cout << "Vous avez atteint Guichen !" << endl;
//		return 0;
//	}
//	if (input == "Bruz") {
//		cout << "Vous avez atteint Bruz !" << endl;
//		return 0;
//	}
//
//	cout << "Cette destination n'existe pas !" << endl;
//	return 0;
//}

//// === Exercice 3 ===
//void Deplacement(Lieu* destination) {
//	cout << "Vous avez atteint " << destination->getName() << " !" << endl;
//}
//
//int main() {
//	Lieu* lieu1 = new Lieu("Guichen", "Super ville", 5);
//	lieu1->AddDestination(2);
//	lieu1->AddDestination(3);
//
//	Lieu* lieu2 = new Lieu("Bruz", "Ville ok-tier", 4);
//	lieu2->AddDestination(1);
//	lieu2->AddDestination(3);
//
//	Lieu* lieu3 = new Lieu("Pont-Rean", "Voila ca c'est une bete de ville !", 8);
//	lieu3->AddDestination(1);
//	lieu3->AddDestination(2);
//
//	cout << "Choisissez une destination parmi les 3 proposees :\n"
//		<< "- " << lieu1->getName() << ", " << lieu1->getDescription() << "\n"
//		<< "- " << lieu2->getName() << ", " << lieu2->getDescription() << "\n"
//		<< "- " << lieu3->getName() << ", " << lieu3->getDescription() << endl;
//
//	string input = "";
//	cout << ">> ";
//	cin >> input;
//
//	// On optimisera ce code au prochain exercice, ici on teste nos classes
//	if (input == lieu1->getName()) {
//		Deplacement(lieu1);
//		return 0;
//	}
//	if (input == lieu2->getName()) {
//		Deplacement(lieu2);
//		return 0;
//	}
//	if (input == lieu3->getName()) {
//		Deplacement(lieu3);
//		return 0;
//	}
//
//	cout << "Cette destination n'existe pas !" << endl;
//	return 0;
//}

//// === Exercice 4 ===
//void Deplacement(Lieu* lieuCourant, Lieu* destination) {
//	if(lieuCourant->getName().empty())
//		cout << "Vous commencez votre epopee depuis " << destination->getName() << " !" << endl;
//	else 
//		cout << "Vous avez atteint " << destination->getName() << " depuis " << lieuCourant->getName() << " !" << endl;
//	
//	*lieuCourant = *destination;
//}
//
//int main() {
//	vector<Lieu*> lieux = vector<Lieu*>();
//	Lieu lieuCourant = Lieu();
//
//	lieux.push_back(new Lieu("Guichen", "Super ville", 5));
//	lieux.back()->AddDestination(1);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Bruz", "Ville ok-tier", 4));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Pont-Rean", "Voila ca c'est une bete de ville !", 8));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(1);
//
//	// pour le point de départ
//	cout << "Choisissez un point de depart parmi les villes proposees :\n";
//	for (Lieu* lieu : lieux) {
//		cout << "- " << lieu->getName() << ", " << lieu->getDescription() << "\n";
//	}
//
//	// boucle tant que l'input n'est pas valide
//	bool validInput = false;
//	while (!validInput) {
//		string input = "";
//		cout << ">> ";
//		cin >> input;
//
//		for (Lieu* lieu : lieux) {
//			if (input == lieu->getName()) {
//				Deplacement(&lieuCourant, lieu);
//				validInput = true;
//			}
//		}
//
//		if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//	}
//	
//
//	// puis pour le reste du programme
//	// boucle infinie
//	for (;;) {
//		cout << "Choisissez une destination parmi les villes proposees :\n";
//		for (int lieuID : lieuCourant.getDestinations()) {
//			cout << "- " << lieux[lieuID]->getName() << ", " << lieux[lieuID]->getDescription() << "\n";
//		}
//
//		// entrée de destination
//		bool validInput = false;
//		while (!validInput) {
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			for (int lieuID : lieuCourant.getDestinations()) {
//				if (input == lieux[lieuID]->getName()) {
//					Deplacement(&lieuCourant, lieux[lieuID]);
//					validInput = true;
//				}
//			}
//
//			if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//		}
//
//		// entrée de volonté de continuer
//		validInput = false;
//		while (!validInput) {
//			cout << "Continuer ? [O/n]" << endl;
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			if (input == "O") validInput = true;
//			if (input == "n") return 0;
//		}
//	}
//
//	return 0;
//}

//// === Exercice 5 ===
//void Deplacement(Lieu &lieuCourant, Lieu* destination, int &endurance) {
//	if (lieuCourant.getName().empty())
//		cout << "Vous commencez votre epopee depuis " << destination->getName() << " !" << endl;
//	else {
//		cout << "\nVous avez atteint " << destination->getName() << " depuis " << lieuCourant.getName() << " !" << endl;
//		
//		endurance -= (lieuCourant.getDifficulty() + destination->getDifficulty());
//		cout << "Il vous reste " << endurance << "/100 points d'endurance !" << endl;
//	}
//	lieuCourant = *destination;
//}
//
//int main() {
//	vector<Lieu*> lieux = vector<Lieu*>();
//	Lieu lieuCourant = Lieu();
//	int endurance = 100;
//
//	lieux.push_back(new Lieu("Guichen", "Super ville", 5));
//	lieux.back()->AddDestination(1);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Bruz", "Ville ok-tier", 4));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Pont-Rean", "Voila ca c'est une bete de ville !", 8));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(1);
//
//	// pour le point de départ
//	cout << "Choisissez un point de depart parmi les villes proposees :\n";
//	for (Lieu* lieu : lieux) {
//		cout << "- " << lieu->getName() << ", " << lieu->getDescription() << "\n";
//	}
//
//	// boucle tant que l'input n'est pas valide
//	bool validInput = false;
//	while (!validInput) {
//		string input = "";
//		cout << ">> ";
//		cin >> input;
//
//		for (Lieu* lieu : lieux) {
//			if (input == lieu->getName()) {
//				Deplacement(lieuCourant, lieu, endurance);
//				validInput = true;
//			}
//		}
//
//		if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//	}
//
//
//	// puis pour le reste du programme
//	// boucle infinie
//	for (;;) {
//		cout << "Choisissez une destination parmi les villes proposees :\n";
//		for (int lieuID : lieuCourant.getDestinations()) {
//			cout << "- " << lieux[lieuID]->getName() << ", " << lieux[lieuID]->getDescription() << "\n";
//		}
//
//		// entrée de destination
//		bool validInput = false;
//		while (!validInput) {
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			for (int lieuID : lieuCourant.getDestinations()) {
//				if (input == lieux[lieuID]->getName()) {
//					Deplacement(lieuCourant, lieux[lieuID], endurance);
//					validInput = true;
//				}
//			}
//
//			if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//		}
//
//		// entrée de volonté de continuer
//		validInput = false;
//		while (!validInput) {
//			cout << "\nContinuer ? [O/n]" << endl;
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			if (input == "O") validInput = true;
//			if (input == "n") return 0;
//		}
//	}
//
//	return 0;
//}

//// === Exercice 6 ===
//void Deplacement(Lieu* &lieuCourant, Lieu* destination, int &endurance) {
//	if (lieuCourant == nullptr)
//		cout << "Vous commencez votre epopee depuis " << destination->getName() << " !" << endl;
//	else {
//		cout << "\nVous avez atteint " << destination->getName() << " depuis " << lieuCourant->getName() << " !" << endl;
//		
//		endurance -= destination->getCampement() ? (lieuCourant->getDifficulty() + destination->getDifficulty()) / 2 : (lieuCourant->getDifficulty() + destination->getDifficulty());
//		cout << "Il vous reste " << endurance << "/100 points d'endurance !" << endl;
//	}
//	lieuCourant = destination;
//}
//
//int main() {
//	vector<Lieu*> lieux = vector<Lieu*>();
//	Lieu* lieuCourant = nullptr;
//	int endurance = 100;
//
//	lieux.push_back(new Lieu("Guichen", "Super ville", 5));
//	lieux.back()->AddDestination(1);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Bruz", "Ville ok-tier", 14));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(2);
//
//	lieux.push_back(new Lieu("Pont-Rean", "Voila ca c'est une bete de ville !", 18));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(1);
//
//	// pour le point de départ
//	cout << "Choisissez un point de depart parmi les villes proposees :\n";
//	for (Lieu* lieu : lieux) {
//		cout << "- " << lieu->getName() << (lieu->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << ", " << lieu->getDescription() << "\n";
//	}
//
//	// boucle tant que l'input n'est pas valide
//	bool validInput = false;
//	while (!validInput) {
//		string input = "";
//		cout << ">> ";
//		cin >> input;
//
//		for (Lieu* lieu : lieux) {
//			if (input == lieu->getName()) {
//				Deplacement(lieuCourant, lieu, endurance);
//				validInput = true;
//			}
//		}
//
//		if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//	}
//
//
//	// puis pour le reste du programme
//	// boucle infinie
//	for (;;) {
//		cout << "Choisissez une destination parmi les villes proposees :\n";
//		for (int lieuID : lieuCourant->getDestinations()) {
//			cout << "- " << lieux[lieuID]->getName() << (lieux[lieuID]->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << (lieux[lieuID]->getCampement() ? ", (Campement)" : "") << ", " << lieux[lieuID]->getDescription() << "\n";
//		}
//
//		// entrée de destination
//		bool validInput = false;
//		while (!validInput) {
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			for (int lieuID : lieuCourant->getDestinations()) {
//				if (input == lieux[lieuID]->getName()) {
//					Deplacement(lieuCourant, lieux[lieuID], endurance);
//					validInput = true;
//				}
//			}
//
//			if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//		}
//
//		if (endurance <= 0) return 0;
//
//		if ((lieuCourant->getDifficulty() >= DIFFICULTY_LEVEL) && !lieuCourant->getCampement()) {
//			// entrée de volonté de placer un campement
//			validInput = false;
//			while (!validInput) {
//				cout << "\nPlacer un campement ? [O/n]" << endl;
//				string input = "";
//				cout << ">> ";
//				cin >> input;
//
//				if (input == "O") {
//					lieuCourant->AddCampement();
//					validInput = true;
//				}
//				if (input == "n") validInput = true;
//			}
//		}
//
//		// entrée de volonté de continuer
//		validInput = false;
//		while (!validInput) {
//			cout << "\nContinuer ? [O/n]" << endl;
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			if (input == "O") validInput = true;
//			if (input == "n") return 0;
//		}
//	}
//
//	return 0;
//}

//// === Exercice 7 ===
//void Deplacement(Lieu*& lieuCourant, Lieu* destination, int& endurance) {
//	if (lieuCourant == nullptr)
//		cout << "Vous commencez votre epopee depuis " << destination->getName() << " !" << endl;
//	else {
//		cout << "\nVous avez atteint " << destination->getName() << " depuis " << lieuCourant->getName() << " !" << endl;
//
//		endurance -= destination->getCampement() ? (lieuCourant->getDifficulty() + destination->getDifficulty()) / 2 : (lieuCourant->getDifficulty() + destination->getDifficulty());
//		cout << "Il vous reste " << endurance << "/100 points d'endurance !" << endl;
//	}
//	lieuCourant = destination;
//}
//
//int main() {
//	vector<Lieu*> lieux = vector<Lieu*>();
//	Lieu* lieuCourant = nullptr;
//	int endurance = 100;
//
//	lieux.push_back(new Lieu("Guichen", "Super ville", 5, true));
//	lieux.back()->AddDestination(2);
//	lieux.back()->AddDestination(3);
//
//	lieux.push_back(new Lieu("Bruz", "Ville ok-tier", 14));
//	lieux.back()->AddDestination(2);
//	lieux.back()->AddDestination(3);
//
//	lieux.push_back(new Lieu("Pont-Rean", "Voila ca c'est une bete de ville !", 18));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(1);
//	lieux.back()->AddDestination(3);
//
//	lieux.push_back(new Lieu("Rennes", "Petite boourgade", 5));
//	lieux.back()->AddDestination(0);
//	lieux.back()->AddDestination(1);
//	lieux.back()->AddDestination(2);
//
//	// pour le point de départ
//	cout << "Choisissez un point de depart parmi les villes proposees :\n";
//	for (Lieu* lieu : lieux) {
//		cout << "- " << lieu->getName() << (lieu->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << ", " << lieu->getDescription() << "\n";
//	}
//
//	// boucle tant que l'input n'est pas valide
//	bool validInput = false;
//	while (!validInput) {
//		string input = "";
//		cout << ">> ";
//		cin >> input;
//
//		for (Lieu* lieu : lieux) {
//			if (input == lieu->getName()) {
//				Deplacement(lieuCourant, lieu, endurance);
//				validInput = true;
//			}
//		}
//
//		if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//	}
//
//
//	// puis pour le reste du programme
//	// boucle infinie
//	for (;;) {
//		cout << "Choisissez une destination parmi les villes proposees :\n";
//		for (int lieuID : lieuCourant->getDestinations()) {
//			cout << "- " << lieux[lieuID]->getName() << (lieux[lieuID]->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << (lieux[lieuID]->getCampement() ? ", (Campement)" : "") << ", " << lieux[lieuID]->getDescription() << "\n";
//		}
//
//		// entrée de destination
//		bool validInput = false;
//		while (!validInput) {
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			for (int lieuID : lieuCourant->getDestinations()) {
//				if (input == lieux[lieuID]->getName()) {
//					Deplacement(lieuCourant, lieux[lieuID], endurance);
//					validInput = true;
//				}
//			}
//
//			if (!validInput) cout << "Cette destination n'existe pas !" << endl;
//		}
//
//		if (endurance <= 0) return 0;
//
//		if ((lieuCourant->getDifficulty() >= DIFFICULTY_LEVEL) && !lieuCourant->getCampement()) {
//			// entrée de volonté de placer un campement
//			validInput = false;
//			while (!validInput) {
//				cout << "\nPlacer un campement ? [O/n]" << endl;
//				string input = "";
//				cout << ">> ";
//				cin >> input;
//
//				if (input == "O") {
//					lieuCourant->AddCampement();
//					validInput = true;
//				}
//				if (input == "n") validInput = true;
//			}
//		}
//
//		if (lieuCourant->getRest()) {
//			// entrée de volonté de se reposer
//			validInput = false;
//			while (!validInput) {
//				cout << "\nSe reposer ? [O/n]" << endl;
//				string input = "";
//				cout << ">> ";
//				cin >> input;
//
//				if (input == "O") {
//					endurance += REST_AMOUNT;
//					validInput = true;
//				}
//				if (input == "n") validInput = true;
//			}
//		}
//
//		// entrée de volonté de continuer
//		validInput = false;
//		while (!validInput) {
//			cout << "\nContinuer ? [O/n]" << endl;
//			string input = "";
//			cout << ">> ";
//			cin >> input;
//
//			if (input == "O") validInput = true;
//			if (input == "n") return 0;
//		}
//	}
//
//	return 0;
//}

// === Exercice 8 ==================================================================================================
//
// Je n'ai pas eu le temps de créer le découpage des destinations dans le programme de chargement du fichier texte,
// de ce fait les destinations ne sont pas accessible dans cet exercice
// 
// =================================================================================================================

void Deplacement(Lieu*& lieuCourant, Lieu* destination, int& endurance) {
	if (lieuCourant == nullptr)
		cout << "Vous commencez votre epopee depuis " << destination->getName() << " !" << endl;
	else {
		cout << "\nVous avez atteint " << destination->getName() << " depuis " << lieuCourant->getName() << " !" << endl;

		endurance -= destination->getCampement() ? (lieuCourant->getDifficulty() + destination->getDifficulty()) / 2 : (lieuCourant->getDifficulty() + destination->getDifficulty());
		cout << "Il vous reste " << endurance << "/100 points d'endurance !" << endl;
	}
	lieuCourant = destination;
}

int main() {
	vector<Lieu*> lieux = vector<Lieu*>();
	Lieu* lieuCourant = nullptr;
	int endurance = 100;

	// lecture depuis le fichier lieux.txt
	ifstream fichierLieux;
	fichierLieux.open("lieux.txt", ios::in);

	string line;
	if (fichierLieux.is_open())
	{
		while (getline(fichierLieux, line))
		{
			size_t firstComa = line.find(',', 0);
			size_t secondComa = line.find(',', firstComa + 1);
			size_t thirdComa = line.find(',', secondComa + 1);

			string name = line.substr(0, firstComa);
			string description = line.substr(firstComa + 1, (secondComa - (firstComa + 1)));
			int difficulty = stoi(line.substr(secondComa + 1, (thirdComa - (firstComa + 1))));
			bool canRest = line.substr(thirdComa + 1, (line.length() - thirdComa + 1)) == "true" ? true : false;

			lieux.push_back(new Lieu(name, description, difficulty, canRest));
		}
		// fermeture du fichier une fois lu
		fichierLieux.close();
	}
	else {
		cout << "Impossible d'ouvrir le fichier.";
		return 0;
	}

	// pour le point de départ
	cout << "Choisissez un point de depart parmi les villes proposees :\n";
	for (Lieu* lieu : lieux) {
		cout << "- " << lieu->getName() << (lieu->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << ", " << lieu->getDescription() << "\n";
	}

	// boucle tant que l'input n'est pas valide
	bool validInput = false;
	while (!validInput) {
		string input = "";
		cout << ">> ";
		cin >> input;

		for (Lieu* lieu : lieux) {
			if (input == lieu->getName()) {
				Deplacement(lieuCourant, lieu, endurance);
				validInput = true;
			}
		}

		if (!validInput) cout << "Cette destination n'existe pas !" << endl;
	}


	// puis pour le reste du programme
	// boucle infinie
	for (;;) {
		cout << "Choisissez une destination parmi les villes proposees :\n";
		for (int lieuID : lieuCourant->getDestinations()) {
			cout << "- " << lieux[lieuID]->getName() << (lieux[lieuID]->getDifficulty() >= DIFFICULTY_LEVEL ? " (Difficile)" : "") << (lieux[lieuID]->getCampement() ? ", (Campement)" : "") << ", " << lieux[lieuID]->getDescription() << "\n";
		}

		// entrée de destination
		bool validInput = false;
		while (!validInput) {
			string input = "";
			cout << ">> ";
			cin >> input;

			for (int lieuID : lieuCourant->getDestinations()) {
				if (input == lieux[lieuID]->getName()) {
					Deplacement(lieuCourant, lieux[lieuID], endurance);
					validInput = true;
				}
			}

			if (!validInput) cout << "Cette destination n'existe pas !" << endl;
		}

		if (endurance <= 0) return 0;

		if ((lieuCourant->getDifficulty() >= DIFFICULTY_LEVEL) && !lieuCourant->getCampement()) {
			// entrée de volonté de placer un campement
			validInput = false;
			while (!validInput) {
				cout << "\nPlacer un campement ? [O/n]" << endl;
				string input = "";
				cout << ">> ";
				cin >> input;

				if (input == "O") {
					lieuCourant->AddCampement();
					validInput = true;
				}
				if (input == "n") validInput = true;
			}
		}

		if (lieuCourant->getRest()) {
			// entrée de volonté de se reposer
			validInput = false;
			while (!validInput) {
				cout << "\nSe reposer ? [O/n]" << endl;
				string input = "";
				cout << ">> ";
				cin >> input;

				if (input == "O") {
					endurance += REST_AMOUNT;
					validInput = true;
				}
				if (input == "n") validInput = true;
			}
		}

		// entrée de volonté de continuer
		validInput = false;
		while (!validInput) {
			cout << "\nContinuer ? [O/n]" << endl;
			string input = "";
			cout << ">> ";
			cin >> input;

			if (input == "O") validInput = true;
			if (input == "n") return 0;
		}
	}

	return 0;
}