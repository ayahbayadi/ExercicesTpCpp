/*
Exercice 3 : Cr�ation d�une pile
-----------------------------------------------------------------------------------
Une pile (� stack � en anglais) est une structure de donn�es bas�e sur le principe � Dernier arriv�, premier sorti �, ou LIFO (Last In, First Out).
1. Cr�er une classe PileChar qui a les variables max (La taille maximale 50 par d�faut), sommet , et pile (pointeur sur les caract�res)
2. Cr�er les constructeurs:
	a. le premier en utilisant le constructeur par d�faut qui initialise la taille maximale
	b. le deuxi�me en utilisant le constructeur d'initialisation pour initialiser les variables max et sommet 0 par d�faut et allocation en utilisant new char avec la taille fournie
	c. le troisi�me en utilisant le constructeur de copie
3. Cr�er le destructeur qui lib�rent les valeurs de la pile
4. D�finit les m�thodes publiques suivantes;
	a. Une m�thode taille() qui donne comme r�sultat un entier positif qui est le nombre maximum de caract�res qu�il sera possible d�y mettre
	b. Une m�thode compter() qui donne comme r�sultat un entier positif qui est le nombre d��l�ments actuellement pr�sents sur la pile
	c. Une m�thode afficher() qui affiche entre des �[� et �]� les �l�ments actuellement pr�sents dans la pile.
	d. Une m�thode empiler() qui prend un caract�re en param�tre et le place sur le dessus de la pile
	e. Une m�thode depiler() qui enl�ve le caract�re du dessus de la pile et le renvoi en valeur de retour
5. D�finir l�op�rateur = (il faut supprimer la pile pr�c�dente, affecter les nouvelles valeurs de max et sommet, allocation de la pile, et enfin l�insertion des valeurs)
*/
#include <iostream>

using namespace std;

// 1. Cr�er une classe PileChar qui a les variables max (La taille maximale 50 par d�faut), sommet , et pile (pointeur sur les caract�res)
class PileChar {
private:
	int max;
	int sommet;
	char* pile;
public:
	// 2. Cr�er les constructeurs:	a.le premier en utilisant le constructeur par d�faut qui initialise la taille maximale
	PileChar() {
		max = 50;
		sommet = 0;
		pile = new char[max];
	}
	// 2. Cr�er les constructeurs :	b.le deuxi�me en utilisant le constructeur d'initialisation pour initialiser les variables max et sommet 0 par d�faut et allocation en utilisant new char avec la taille fournie
	PileChar(int max) {
		this->max = max;
		this->sommet = 0;
		this->pile = new char[max];
	}
	// 2. Cr�er les constructeurs:	c.le troisi�me en utilisant le constructeur de copie
	PileChar(const PileChar& p) {
		this->max = p.max;
		this->sommet = p.sommet;
		this->pile = new char[max];
		for (int i = 0; i < this->sommet; i++) {
			this->pile[i] = p.pile[i];
		}
	}
	// 3. Cr�er le destructeur qui lib�rent les valeurs de la pile
	~PileChar() {
		delete[] this->pile;
	}
	// 4. D�finit les m�thodes publiques suivantes; a.Une m�thode taille() qui donne comme r�sultat un entier positif qui est le nombre maximum de caract�res qu�il sera possible d�y mettre
	int taille() {
		return this->max;
	}
	// 4. D�finit les m�thodes publiques suivantes; b. Une m�thode compter() qui donne comme r�sultat un entier positif qui est le nombre d��l�ments actuellement pr�sents sur la pile
	int compter() {
		return this->sommet;
	}
	// 4. D�finit les m�thodes publiques suivantes; c. Une m�thode afficher() qui affiche entre des �[� et �]� les �l�ments actuellement pr�sents dans la pile.
	void afficher() {
		cout << '[';
		for (int i = 0; i < this->sommet; i++) {
			cout << this->pile[i];
		}
		cout << ']';
	}
	// 4. D�finit les m�thodes publiques suivantes; d. Une m�thode empiler() qui prend un caract�re en param�tre et le place sur le dessus de la pile
	void empiler(char c) {
		if (this->sommet < this->max) {
			this->pile[this->sommet] = c;
			this->sommet++;
		}else {
			cout << "La pile est pleine" << endl;
		}
	}
	// 4. D�finit les m�thodes publiques suivantes; e. Une m�thode depiler() qui enl�ve le caract�re du dessus de la pile et le renvoi en valeur de retour
	char depiler() {
		if (this->sommet > 0) {
			return this->pile[this->sommet--];
		}else {
			cout << "La pile est vide"<<endl;
			return ' ';
		}
	}
	// 5. D�finir l�op�rateur = (il faut supprimer la pile pr�c�dente, affecter les nouvelles valeurs de max et sommet, allocation de la pile, et enfin l�insertion des valeurs)
	void operator=(const PileChar& p) {
		delete[] this->pile;
		this->max = p.max;
		this->sommet = p.sommet;
		this->pile = new char[this->max];
		for (int i = 0; i < this->sommet; i++) {
			this->pile[i] = p.pile[i];
		}
	}
};
/*
int main() {
	PileChar p1(10);
	p1.empiler('s');
	p1.empiler('o');
	p1.empiler('u');
	p1.empiler('f');
	PileChar p2 = p1;
	cout << "p2: ";
	p2.afficher();
	int taille = p1.compter();
	cout <<endl<< "p1: ";
	p1.afficher();
	// Pour vider la pile
	for (int i = 0; i < taille; i++) {
		p1.depiler();
	}

	cout <<endl<< "Apres:"<<endl<<"p1: ";
	p1.afficher();
	cout <<endl<< "p2: ";
	p2.afficher();

	PileChar p3(60);
	p3.empiler('p');
	p3.empiler('o');
	p3.empiler('o');
	cout << endl << "p3: ";
	p3.afficher();
	PileChar p4;
	cout << endl << "p4: ";
	p4.afficher();
	p4 = p3;
	cout << endl <<"Apres affactation: "<<endl << "p4: ";
	p4.afficher();


	return 0;
}*/