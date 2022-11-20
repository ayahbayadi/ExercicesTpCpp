/*
Exercice 1 : Structure des donn�es (programmes de proc�dure)
------------------------------------------------------------
1. Cr�er une structure note qui a les composants suivants : valeur, coefficient, module.
2. Cr�er une structure �tudiant qui a les composants suivants : nom, matricule, 3 notes.
3. Cr�er 3 variables d'�tudiants avec l'insertion des donn�es.
4. Cr�er une fonction moyenne qui prend �tudiant en parametre et return la note moyenne.
5. Afficher les informations et la moyenne de chaque �tudiant.
*/
#include <iostream>
#include<string>

using namespace std;

//// 1. Cr�er une structure note qui a les composants suivants : valeur, coefficient, module.
typedef struct note {
	float valeur;
	int coefficient;
	string module;
}note;

//// 2. Cr�er une structure �tudiant qui a les composants suivants : nom, num�ro, 3 notes.
typedef struct etudiant {
	string nom;
	int matricule;
	note notes[3];
}etudiant;

//// 4. Cr�er une fonction moyenne qui prend �tudiant en parametre et return la note moyenne.
float moyenne(etudiant etud) {
	float dividende = 0;
	float diviseur = 0;

	for (int i = 0; i < 3; i++) {
		dividende += etud.notes[i].valeur * etud.notes[i].coefficient;
		diviseur += etud.notes[i].coefficient;
	}

	return dividende / diviseur;
}
/*
int main() {
	//// 3. Cr�er 3 variables d'�tudiants avec l'insertion des donn�es.
	etudiant etudiants[3];
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". Entrer le nom de l'etudiant: ";
		cin >> etudiants[i].nom;
		cout << i + 1 << ". Entrer le matricule de l'etudiant: ";
		cin >> etudiants[i].matricule;
		// insertion des 3 notes pour chaque etudiant
		for (int j = 0; j < 3; j++) {
			cout << "\t" << j + 1 << ". Entrer le module de la note : ";
			cin >> etudiants[i].notes[j].module;
			cout << "\t" << j + 1 << ". Entrer le coefficient de la note : ";
			cin >> etudiants[i].notes[j].coefficient;
			cout <<"\t"<< j + 1 << ". Entrer la valeur de la note: ";
			cin >> etudiants[i].notes[j].valeur;
		}

		cout << endl;
	}// fin d'insertion
	
	//// 5. Afficher les informations et la moyenne de chaque �tudiant.
	for (int i = 0; i < 3; i++) {
		cout << i + 1 <<". L'etudiant " << etudiants[i].nom << "(" << etudiants[i].matricule << ") a eu la moyenne: " << moyenne(etudiants[i])<<endl;
	}
	
	return 0;
}
*/