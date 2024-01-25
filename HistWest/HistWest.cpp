#include <iostream>
#include <string>
#include "humain.h"
using namespace std;
/* TP POO C++ : tous humains ... */

int main()
{
	Humain lucky("Lucky Luke", "coca-cola");
	cout << "Une histoire sur " << lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe");
	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();

	return 0;
}