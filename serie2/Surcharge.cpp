/*
Exercice 2 : Surcharge des fonctions
-------------------------------------------------------------------------------------
1) Ecrire un programme � l�aide des fonctions (pas de classe), pour calculer la somme de deux ou trois entiers (Utiliser deux m�thodes).
2) Refaire la fonction somme sans valeur de retour. (Utiliser 4 m�thodes)
3) �crire une fonction qui convertit un nombre d'heures, de minutes et de secondes en un nombre de secondes �quivalentes.
*/
#include <iostream>

using namespace std;

// 1. Ecrire un programme � l�aide des fonctions (pas de classe), pour calculer la somme de deux ou trois entiers(Utiliser deux m�thodes).
int somme1(int a, int b, int c=0) {
	return a + b + c;
}

int somme2(int a, int b) {
	return a + b;
}

int somme2(int a, int b, int c) {
	return a + b + c;
}

// 2. Refaire la fonction somme sans valeur de retour. (Utiliser 4 m�thodes)
void somme1(int a, int b) {
	cout << a + b;
}
void somme2(int a, int b, int* c) {
	*c = a + b;
}
void somme3(int a, int b, int& c) {
	c = a + b;
}
int s = 0;
void somme4(int a, int b) {
	s = a + b;
}

// 3. �crire une fonction qui convertit un nombre d'heures, de minutes et de secondes en un nombre de secondes �quivalentes.
int to_seconds(int h, int m = 0, int s = 0) {
	return (h * 60 + m) * 60 + s;
}